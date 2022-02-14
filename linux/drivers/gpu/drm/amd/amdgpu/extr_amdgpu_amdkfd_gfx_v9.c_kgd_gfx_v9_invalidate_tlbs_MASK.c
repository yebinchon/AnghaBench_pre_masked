
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_10__ {scalar_t__ ready; } ;
struct amdgpu_ring {TYPE_5__ sched; } ;
struct TYPE_8__ {scalar_t__ num_physical_nodes; } ;
struct TYPE_9__ {TYPE_3__ xgmi; } ;
struct TYPE_6__ {struct amdgpu_ring ring; } ;
struct TYPE_7__ {TYPE_1__ kiq; } ;
struct amdgpu_device {scalar_t__ asic_type; int num_vmhubs; TYPE_4__ gmc; scalar_t__ in_gpu_reset; TYPE_2__ gfx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,int,int,int) ;
 int FUNC_2 (struct amdgpu_device*,int ,int) ;
 int FUNC_3 (struct kgd_dev*,int) ;
 scalar_t__ FUNC_4 (struct kgd_dev*,int) ;

int FUNC_5(struct kgd_dev *VAR_2, uint16_t VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *) VAR_2;
 int VAR_5, VAR_6;
 struct amdgpu_ring *VAR_7 = &VAR_4->gfx.kiq.ring;
 uint32_t VAR_8 = 0;

 if (VAR_4->in_gpu_reset)
  return -VAR_1;
 if (VAR_4->gmc.xgmi.num_physical_nodes &&
  VAR_4->asic_type == VAR_0)
  VAR_8 = 2;

 if (VAR_7->sched.ready)
  return FUNC_2(VAR_4, VAR_3, VAR_8);

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  if (!FUNC_0(VAR_4, VAR_5))
   continue;
  if (FUNC_4(VAR_2, VAR_5)) {
   if (FUNC_3(VAR_2, VAR_5)
    == VAR_3) {
    for (VAR_6 = 0; VAR_6 < VAR_4->num_vmhubs; VAR_6++)
     FUNC_1(VAR_4, VAR_5,
        VAR_6, VAR_8);
    break;
   }
  }
 }

 return 0;
}
