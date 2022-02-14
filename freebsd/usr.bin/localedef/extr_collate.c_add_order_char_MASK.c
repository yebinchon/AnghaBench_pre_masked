
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int * ref; } ;
typedef TYPE_1__ collchar_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int) ;

void
FUNC_2(wchar_t VAR_2)
{
 collchar_t *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2, 1)) == ((void*)0)) {
  VAR_0;
  return;
 }

 FUNC_0(VAR_3->ref[VAR_1]);
}
