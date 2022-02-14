
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct voltagedomain {TYPE_1__* pmic; } ;
struct TYPE_2__ {int step_size; int slew_rate; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

void FUNC_2(struct voltagedomain *VAR_0,
   unsigned long VAR_1,
   u8 VAR_2, u8 VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2 - VAR_3);

 VAR_5 = ((VAR_4 * VAR_0->pmic->step_size) /
   VAR_0->pmic->slew_rate) + 2;
 FUNC_1(VAR_5);
}
