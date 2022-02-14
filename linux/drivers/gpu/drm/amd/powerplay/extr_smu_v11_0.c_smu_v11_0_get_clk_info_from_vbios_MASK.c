
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int socclk; int dcefclk; int eclk; int vclk; int dclk; int format_revision; int content_revision; int fclk; } ;
struct TYPE_7__ {TYPE_2__ boot_values; } ;
struct smu_context {TYPE_3__ smu_table; struct amdgpu_device* adev; } ;
struct atom_get_smu_clock_info_parameters_v3_1 {void* command; int syspll_id; int clk_id; int member_0; } ;
struct TYPE_8__ {int smu_clock_freq_hz; } ;
struct atom_get_smu_clock_info_output_parameters_v3_1 {TYPE_4__ atom_smu_outputclkfreq; } ;
struct TYPE_5__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef int input ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int *) ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct atom_get_smu_clock_info_parameters_v3_1*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct smu_context *VAR_11)
{
 int VAR_12, VAR_13;
 struct amdgpu_device *VAR_14 = VAR_11->adev;
 struct atom_get_smu_clock_info_parameters_v3_1 VAR_15 = {0};
 struct atom_get_smu_clock_info_output_parameters_v3_1 *VAR_16;

 VAR_15.clk_id = VAR_5;
 VAR_15.command = VAR_1;
 VAR_13 = FUNC_1(VAR_9,
         VAR_10);

 VAR_12 = FUNC_0(VAR_14->mode_info.atom_context, VAR_13,
     (uint32_t *)&VAR_15);
 if (VAR_12)
  return -VAR_0;

 VAR_16 = (struct atom_get_smu_clock_info_output_parameters_v3_1 *)&VAR_15;
 VAR_11->smu_table.boot_values.socclk = FUNC_2(VAR_16->atom_smu_outputclkfreq.smu_clock_freq_hz) / 10000;

 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.clk_id = VAR_2;
 VAR_15.command = VAR_1;
 VAR_13 = FUNC_1(VAR_9,
         VAR_10);

 VAR_12 = FUNC_0(VAR_14->mode_info.atom_context, VAR_13,
     (uint32_t *)&VAR_15);
 if (VAR_12)
  return -VAR_0;

 VAR_16 = (struct atom_get_smu_clock_info_output_parameters_v3_1 *)&VAR_15;
 VAR_11->smu_table.boot_values.dcefclk = FUNC_2(VAR_16->atom_smu_outputclkfreq.smu_clock_freq_hz) / 10000;

 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.clk_id = VAR_4;
 VAR_15.command = VAR_1;
 VAR_13 = FUNC_1(VAR_9,
         VAR_10);

 VAR_12 = FUNC_0(VAR_14->mode_info.atom_context, VAR_13,
     (uint32_t *)&VAR_15);
 if (VAR_12)
  return -VAR_0;

 VAR_16 = (struct atom_get_smu_clock_info_output_parameters_v3_1 *)&VAR_15;
 VAR_11->smu_table.boot_values.eclk = FUNC_2(VAR_16->atom_smu_outputclkfreq.smu_clock_freq_hz) / 10000;

 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.clk_id = VAR_6;
 VAR_15.command = VAR_1;
 VAR_13 = FUNC_1(VAR_9,
         VAR_10);

 VAR_12 = FUNC_0(VAR_14->mode_info.atom_context, VAR_13,
     (uint32_t *)&VAR_15);
 if (VAR_12)
  return -VAR_0;

 VAR_16 = (struct atom_get_smu_clock_info_output_parameters_v3_1 *)&VAR_15;
 VAR_11->smu_table.boot_values.vclk = FUNC_2(VAR_16->atom_smu_outputclkfreq.smu_clock_freq_hz) / 10000;

 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.clk_id = VAR_3;
 VAR_15.command = VAR_1;
 VAR_13 = FUNC_1(VAR_9,
         VAR_10);

 VAR_12 = FUNC_0(VAR_14->mode_info.atom_context, VAR_13,
     (uint32_t *)&VAR_15);
 if (VAR_12)
  return -VAR_0;

 VAR_16 = (struct atom_get_smu_clock_info_output_parameters_v3_1 *)&VAR_15;
 VAR_11->smu_table.boot_values.dclk = FUNC_2(VAR_16->atom_smu_outputclkfreq.smu_clock_freq_hz) / 10000;

 if ((VAR_11->smu_table.boot_values.format_revision == 3) &&
     (VAR_11->smu_table.boot_values.content_revision >= 2)) {
  FUNC_3(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.clk_id = VAR_7;
  VAR_15.syspll_id = VAR_8;
  VAR_15.command = VAR_1;
  VAR_13 = FUNC_1(VAR_9,
          VAR_10);

  VAR_12 = FUNC_0(VAR_14->mode_info.atom_context, VAR_13,
      (uint32_t *)&VAR_15);
  if (VAR_12)
   return -VAR_0;

  VAR_16 = (struct atom_get_smu_clock_info_output_parameters_v3_1 *)&VAR_15;
  VAR_11->smu_table.boot_values.fclk = FUNC_2(VAR_16->atom_smu_outputclkfreq.smu_clock_freq_hz) / 10000;
 }

 return 0;
}
