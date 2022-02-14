
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct bios_parser {int dummy; } ;
struct atom_get_smu_clock_info_parameters_v3_1 {int syspll_id; int command; int member_0; } ;
struct TYPE_2__ {unsigned int syspllvcofreq_10khz; } ;
struct atom_get_smu_clock_info_output_parameters_v3_1 {TYPE_1__ atom_smu_outputclkfreq; } ;


 scalar_t__ FUNC_0 (int ,struct atom_get_smu_clock_info_parameters_v3_1) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct atom_get_smu_clock_info_output_parameters_v3_1*,struct atom_get_smu_clock_info_parameters_v3_1*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct bios_parser *VAR_2, uint8_t VAR_3)
{
 struct atom_get_smu_clock_info_parameters_v3_1 VAR_4 = {0};
 struct atom_get_smu_clock_info_output_parameters_v3_1 VAR_5;

 VAR_4.command = VAR_0;
 VAR_4.syspll_id = VAR_3;


 if (FUNC_0(VAR_1, VAR_4)) {
  FUNC_1(&VAR_5, &VAR_4, sizeof(
   struct atom_get_smu_clock_info_parameters_v3_1));
  return VAR_5.atom_smu_outputclkfreq.syspllvcofreq_10khz;
 }

 return 0;
}
