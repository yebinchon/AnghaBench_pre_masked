
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct seq_file {int dummy; } ;
struct radeon_device {int dummy; } ;
struct kv_power_info {scalar_t__ vce_power_gated; scalar_t__ uvd_power_gated; TYPE_1__* graphics_level; } ;
struct TYPE_2__ {int SclkFrequency; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int ) ;
 struct kv_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct seq_file*,char*,...) ;

void FUNC_5(struct radeon_device *VAR_7,
          struct seq_file *VAR_8)
{
 struct kv_power_info *VAR_9 = FUNC_3(VAR_7);
 u32 VAR_10 =
  (FUNC_0(VAR_6) & VAR_0) >>
  VAR_1;
 u32 VAR_11, VAR_12;
 u16 VAR_13;

 if (VAR_10 >= VAR_5) {
  FUNC_4(VAR_8, "invalid dpm profile %d\n", VAR_10);
 } else {
  VAR_11 = FUNC_1(VAR_9->graphics_level[VAR_10].SclkFrequency);
  VAR_12 = (FUNC_0(VAR_4) & VAR_2) >>
   VAR_3;
  VAR_13 = FUNC_2(VAR_7, (u16)VAR_12);
  FUNC_4(VAR_8, "uvd    %sabled\n", VAR_9->uvd_power_gated ? "dis" : "en");
  FUNC_4(VAR_8, "vce    %sabled\n", VAR_9->vce_power_gated ? "dis" : "en");
  FUNC_4(VAR_8, "power level %d    sclk: %u vddc: %u\n",
      VAR_10, VAR_11, VAR_13);
 }
}
