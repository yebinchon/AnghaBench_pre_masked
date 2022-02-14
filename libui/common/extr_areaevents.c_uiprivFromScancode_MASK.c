
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ExtKey; int Key; } ;
typedef TYPE_1__ uiAreaKeyEvent ;
struct TYPE_7__ {int scancode; int equiv; } ;
struct TYPE_6__ {int scancode; int equiv; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;

int FUNC_0(uintptr_t VAR_2, uiAreaKeyEvent *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4].scancode != 0xFFFF; VAR_4++)
  if (VAR_1[VAR_4].scancode == VAR_2) {
   VAR_3->Key = VAR_1[VAR_4].equiv;
   return 1;
  }
 for (VAR_4 = 0; VAR_0[VAR_4].scancode != 0xFFFF; VAR_4++)
  if (VAR_0[VAR_4].scancode == VAR_2) {
   VAR_3->ExtKey = VAR_0[VAR_4].equiv;
   return 1;
  }
 return 0;
}
