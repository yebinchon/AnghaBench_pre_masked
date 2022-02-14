
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uiAreaKeyEvent ;
typedef int uiAreaHandler ;
typedef int uiArea ;
struct TYPE_2__ {int (* key ) (int *) ;} ;


 size_t VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(uiAreaHandler *VAR_2, uiArea *VAR_3, uiAreaKeyEvent *VAR_4)
{
 if (VAR_1[VAR_0]->key != ((void*)0))
  return VAR_1[VAR_0]->key(VAR_4);
 return 0;
}
