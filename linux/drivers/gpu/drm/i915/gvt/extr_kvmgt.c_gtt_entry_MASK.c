
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mdev_device {int dummy; } ;
struct intel_vgpu {struct intel_gvt* gvt; } ;
struct TYPE_2__ {int gtt_start_offset; } ;
struct intel_gvt {TYPE_1__ device_info; } ;
typedef int loff_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct intel_gvt*) ;
 int FUNC_2 (struct intel_vgpu*,unsigned int) ;
 struct intel_vgpu* FUNC_3 (struct mdev_device*) ;

__attribute__((used)) static bool FUNC_4(struct mdev_device *VAR_2, loff_t *VAR_3)
{
 struct intel_vgpu *VAR_4 = FUNC_3(VAR_2);
 unsigned int VAR_5 = FUNC_0(*VAR_3);
 struct intel_gvt *VAR_6 = VAR_4->gvt;
 int VAR_7;


 if (VAR_5 != VAR_0)
  return 0;

 VAR_7 = (u64)(*VAR_3 & VAR_1) -
  FUNC_2(VAR_4, VAR_0);

 return (VAR_7 >= VAR_6->device_info.gtt_start_offset &&
  VAR_7 < VAR_6->device_info.gtt_start_offset + FUNC_1(VAR_6)) ?
   1 : 0;
}
