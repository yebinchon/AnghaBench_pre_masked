
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t_stateflags; } ;
typedef TYPE_1__ teken_t ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_1, unsigned int VAR_2)
{

 switch (VAR_2) {
 case 4:
  VAR_1->t_stateflags &= ~VAR_0;
  break;
 default:
  FUNC_0("Unknown reset mode: %u\n", VAR_2);
 }
}
