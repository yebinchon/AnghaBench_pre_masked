
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct si_mc_reg_entry {int * mc_data; } ;
struct TYPE_3__ {int * value; } ;
typedef TYPE_1__ SMC_SIslands_MCRegisterSet ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct si_mc_reg_entry *VAR_0,
        SMC_SIslands_MCRegisterSet *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 for(VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_3 & (1 << VAR_5)) {
   VAR_1->value[VAR_4] = FUNC_0(VAR_0->mc_data[VAR_5]);
   VAR_4++;
  }
 }
}
