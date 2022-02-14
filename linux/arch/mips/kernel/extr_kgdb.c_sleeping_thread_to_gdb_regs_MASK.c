
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int reg31; int cp0_status; int reg30; int reg29; int reg23; int reg22; int reg21; int reg20; int reg19; int reg18; int reg17; int reg16; } ;
struct task_struct {TYPE_1__ thread; } ;



void FUNC_0(unsigned long *VAR_0, struct task_struct *VAR_1)
{
 int VAR_2;



 u64 *VAR_3 = (u64 *)VAR_0;


 for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  *(VAR_3++) = 0;


 *(VAR_3++) = VAR_1->thread.reg16;
 *(VAR_3++) = VAR_1->thread.reg17;
 *(VAR_3++) = VAR_1->thread.reg18;
 *(VAR_3++) = VAR_1->thread.reg19;
 *(VAR_3++) = VAR_1->thread.reg20;
 *(VAR_3++) = VAR_1->thread.reg21;
 *(VAR_3++) = VAR_1->thread.reg22;
 *(VAR_3++) = VAR_1->thread.reg23;

 for (VAR_2 = 24; VAR_2 < 28; VAR_2++)
  *(VAR_3++) = 0;


 *(VAR_3++) = (long)VAR_1;
 *(VAR_3++) = VAR_1->thread.reg29;
 *(VAR_3++) = VAR_1->thread.reg30;
 *(VAR_3++) = VAR_1->thread.reg31;

 *(VAR_3++) = VAR_1->thread.cp0_status;


 *(VAR_3++) = 0;
 *(VAR_3++) = 0;






 *(VAR_3++) = 0;
 *(VAR_3++) = 0;





 *(VAR_3++) = VAR_1->thread.reg31;
}
