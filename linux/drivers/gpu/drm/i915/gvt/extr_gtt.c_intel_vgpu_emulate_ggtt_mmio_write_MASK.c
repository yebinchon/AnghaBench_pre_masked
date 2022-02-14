
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {TYPE_1__* gvt; } ;
struct intel_gvt_device_info {scalar_t__ gtt_start_offset; } ;
struct TYPE_2__ {struct intel_gvt_device_info device_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

int FUNC_1(struct intel_vgpu *VAR_1,
  unsigned int VAR_2, void *VAR_3, unsigned int VAR_4)
{
 const struct intel_gvt_device_info *VAR_5 = &VAR_1->gvt->device_info;
 int VAR_6;

 if (VAR_4 != 4 && VAR_4 != 8)
  return -VAR_0;

 VAR_2 -= VAR_5->gtt_start_offset;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_6;
}
