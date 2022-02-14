
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* p_stack; size_t tos; int * il; int i_l_follow; int * cstk; } ;


 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;

 int const VAR_3 ;
 TYPE_1__ VAR_4 ;





__attribute__((used)) static void
FUNC_0(void)
{
    int VAR_5;

    for (;;) {


 switch (VAR_4.p_stack[VAR_4.tos]) {

 case 131:
     switch (VAR_4.p_stack[VAR_4.tos - 1]) {

     case 131:
     case 130:

  VAR_4.p_stack[--VAR_4.tos] = 130;
  break;

     case 135:
  VAR_4.p_stack[--VAR_4.tos] = VAR_1;
  VAR_4.i_l_follow = VAR_4.il[VAR_4.tos];
  break;

     case 132:

  VAR_4.p_stack[--VAR_4.tos] = VAR_2;
  for (VAR_5 = VAR_4.tos - 1;
   (
    VAR_4.p_stack[VAR_5] != 131
    &&
    VAR_4.p_stack[VAR_5] != 130
    &&
    VAR_4.p_stack[VAR_5] != VAR_3
    );
   --VAR_5);
  VAR_4.i_l_follow = VAR_4.il[VAR_5];





  break;

     case 129:

  VAR_0 = VAR_4.cstk[VAR_4.tos - 1];

     case 136:
     case 134:

     case 133:

     case 128:

  VAR_4.p_stack[--VAR_4.tos] = 131;
  VAR_4.i_l_follow = VAR_4.il[VAR_4.tos];
  break;

     default:
  return;

     }
     break;

 case 128:
     if (VAR_4.p_stack[VAR_4.tos - 1] == VAR_1) {

  VAR_4.tos -= 2;
  break;
     }
     else
  return;

 default:
     return;

 }
    }
}
