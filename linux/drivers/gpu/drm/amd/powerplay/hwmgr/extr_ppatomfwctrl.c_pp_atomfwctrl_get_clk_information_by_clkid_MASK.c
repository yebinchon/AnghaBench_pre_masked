
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct atom_get_smu_clock_info_parameters_v3_1 {scalar_t__ dfsdid; int command; void* syspll_id; void* clk_id; } ;
struct TYPE_4__ {int smu_clock_freq_hz; } ;
struct atom_get_smu_clock_info_output_parameters_v3_1 {TYPE_2__ atom_smu_outputclkfreq; } ;
struct TYPE_3__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

int FUNC_3(struct pp_hwmgr *VAR_3,
            uint8_t VAR_4, uint8_t VAR_5,
            uint32_t *VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_3->adev;
 struct atom_get_smu_clock_info_parameters_v3_1 VAR_8;
 struct atom_get_smu_clock_info_output_parameters_v3_1 *VAR_9;
 uint32_t VAR_10;

 VAR_8.clk_id = VAR_4;
 VAR_8.syspll_id = VAR_5;
 VAR_8.command = VAR_1;
 VAR_8.dfsdid = 0;

 VAR_10 = FUNC_0(VAR_2);

 if (FUNC_1(
  VAR_7->mode_info.atom_context, VAR_10, (uint32_t *)&VAR_8))
  return -VAR_0;

 VAR_9 = (struct atom_get_smu_clock_info_output_parameters_v3_1 *)&VAR_8;
 *VAR_6 = FUNC_2(VAR_9->atom_smu_outputclkfreq.smu_clock_freq_hz) / 10000;

 return 0;
}
