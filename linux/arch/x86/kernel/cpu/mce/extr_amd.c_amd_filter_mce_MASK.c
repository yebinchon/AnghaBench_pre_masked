
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mce {int status; int bank; } ;
struct cpuinfo_x86 {int x86; int x86_model; } ;
typedef enum smca_bank_types { ____Placeholder_smca_bank_types } smca_bank_types ;


 int VAR_0 ;
 struct cpuinfo_x86 VAR_1 ;
 int FUNC_0 (int ) ;

bool FUNC_1(struct mce *VAR_2)
{
 enum smca_bank_types VAR_3 = FUNC_0(VAR_2->bank);
 struct cpuinfo_x86 *VAR_4 = &VAR_1;
 u8 VAR_5 = (VAR_2->status >> 16) & 0x3F;


 if (VAR_4->x86 == 0x17 &&
     VAR_4->x86_model >= 0x10 && VAR_4->x86_model <= 0x2F &&
     VAR_3 == VAR_0 && VAR_5 == 10)
  return 1;

 return 0;
}
