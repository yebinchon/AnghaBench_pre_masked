
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gender; } ;
typedef TYPE_1__ bot_chatstate_t ;


 TYPE_1__* FUNC_0 (int) ;

 int VAR_0 ;


void FUNC_1(int VAR_1, int VAR_2)
{
 bot_chatstate_t *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3) return;
 switch(VAR_2)
 {
  case 129: VAR_3->gender = 129; break;
  case 128: VAR_3->gender = 128; break;
  default: VAR_3->gender = VAR_0; break;
 }
}
