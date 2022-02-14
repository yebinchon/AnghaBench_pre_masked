
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct seq_file {int dummy; } ;
struct kv_power_info {scalar_t__ vce_power_gated; scalar_t__ uvd_power_gated; TYPE_1__* graphics_level; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int SclkFrequency; } ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct amdgpu_device*,int ) ;
 struct kv_power_info* FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct seq_file*,char*,...) ;

__attribute__((used)) static void
FUNC_5(void *VAR_7,
            struct seq_file *VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_7;
 struct kv_power_info *VAR_10 = FUNC_3(VAR_9);
 u32 VAR_11 =
  (FUNC_0(VAR_6) &
  VAR_3) >>
  VAR_4;
 u32 VAR_12, VAR_13;
 u16 VAR_14;

 if (VAR_11 >= VAR_2) {
  FUNC_4(VAR_8, "invalid dpm profile %d\n", VAR_11);
 } else {
  VAR_12 = FUNC_1(VAR_10->graphics_level[VAR_11].SclkFrequency);
  VAR_13 = (FUNC_0(VAR_5) &
   VAR_0) >>
   VAR_1;
  VAR_14 = FUNC_2(VAR_9, (u16)VAR_13);
  FUNC_4(VAR_8, "uvd    %sabled\n", VAR_10->uvd_power_gated ? "dis" : "en");
  FUNC_4(VAR_8, "vce    %sabled\n", VAR_10->vce_power_gated ? "dis" : "en");
  FUNC_4(VAR_8, "power level %d    sclk: %u vddc: %u\n",
      VAR_11, VAR_12, VAR_14);
 }
}
