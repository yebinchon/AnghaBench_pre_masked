
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vreg; } ;
struct intel_vgpu {TYPE_2__ mmio; TYPE_1__* gvt; } ;
struct intel_gvt_device_info {int mmio_size; } ;
struct TYPE_3__ {struct intel_gvt_device_info device_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_vgpu*,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct intel_vgpu *VAR_1)
{
 const struct intel_gvt_device_info *VAR_2 = &VAR_1->gvt->device_info;

 VAR_1->mmio.vreg = FUNC_1(VAR_2->mmio_size);
 if (!VAR_1->mmio.vreg)
  return -VAR_0;

 FUNC_0(VAR_1, 1);

 return 0;
}
