
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {TYPE_2__* gvt; } ;
struct TYPE_3__ {unsigned int cfg_space_size; } ;
struct TYPE_4__ {TYPE_1__ device_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 (struct intel_vgpu*) ;

int FUNC_3(struct intel_vgpu *VAR_1, unsigned int VAR_2,
 void *VAR_3, unsigned int VAR_4)
{
 if (FUNC_0(VAR_4 > 4))
  return -VAR_0;

 if (FUNC_0(VAR_2 + VAR_4 > VAR_1->gvt->device_info.cfg_space_size))
  return -VAR_0;

 FUNC_1(VAR_3, FUNC_2(VAR_1) + VAR_2, VAR_4);
 return 0;
}
