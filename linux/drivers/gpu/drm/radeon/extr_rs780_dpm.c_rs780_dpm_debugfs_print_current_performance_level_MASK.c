
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {int dummy; } ;
struct radeon_ps {int vclk; int dclk; } ;
struct TYPE_7__ {int reference_freq; } ;
struct TYPE_8__ {TYPE_3__ spll; } ;
struct TYPE_5__ {struct radeon_ps* current_ps; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_4__ clock; TYPE_2__ pm; } ;
struct igp_ps {int sclk_low; int sclk_high; int max_voltage; int min_voltage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct igp_ps* FUNC_1 (struct radeon_ps*) ;
 int FUNC_2 (struct seq_file*,char*,int,int ) ;

void FUNC_3(struct radeon_device *VAR_9,
             struct seq_file *VAR_10)
{
 struct radeon_ps *VAR_11 = VAR_9->pm.dpm.current_ps;
 struct igp_ps *VAR_12 = FUNC_1(VAR_11);
 u32 VAR_13 = FUNC_0(VAR_2) & VAR_1;
 u32 VAR_14 = FUNC_0(VAR_0);
 u32 VAR_15 = ((VAR_14 & VAR_3) >> VAR_4) + 1;
 u32 VAR_16 = ((VAR_14 & VAR_5) >> VAR_6) + 1 +
  ((VAR_14 & VAR_7) >> VAR_8) + 1;
 u32 VAR_17 = (VAR_9->clock.spll.reference_freq * VAR_13) /
  (VAR_16 * VAR_15);

 FUNC_2(VAR_10, "uvd    vclk: %d dclk: %d\n", VAR_11->vclk, VAR_11->dclk);


 if (VAR_17 < (VAR_12->sclk_low + 500))
  FUNC_2(VAR_10, "power level 0    sclk: %u vddc_index: %d\n",
      VAR_12->sclk_low, VAR_12->min_voltage);
 else
  FUNC_2(VAR_10, "power level 1    sclk: %u vddc_index: %d\n",
      VAR_12->sclk_high, VAR_12->max_voltage);
}
