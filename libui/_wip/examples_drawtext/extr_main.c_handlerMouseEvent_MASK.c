
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uiAreaMouseEvent ;
typedef int uiAreaHandler ;
typedef int uiArea ;
struct TYPE_2__ {int (* mouse ) (int *) ;} ;


 size_t VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(uiAreaHandler *VAR_2, uiArea *VAR_3, uiAreaMouseEvent *VAR_4)
{
 if (VAR_1[VAR_0]->mouse != ((void*)0))
  VAR_1[VAR_0]->mouse(VAR_4);
}
