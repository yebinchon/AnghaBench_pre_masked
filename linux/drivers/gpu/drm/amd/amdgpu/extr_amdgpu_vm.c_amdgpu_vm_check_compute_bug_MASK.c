
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_ring {int has_compute_vm_bug; TYPE_3__* funcs; } ;
struct amdgpu_ip_block {TYPE_1__* version; } ;
struct TYPE_5__ {int mec_fw_version; } ;
struct amdgpu_device {int num_rings; struct amdgpu_ring** rings; TYPE_2__ gfx; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {int major; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct amdgpu_ip_block* FUNC_0 (struct amdgpu_device*,int ) ;

void FUNC_1(struct amdgpu_device *VAR_2)
{
 const struct amdgpu_ip_block *VAR_3;
 bool VAR_4;
 struct amdgpu_ring *VAR_5;
 int VAR_6;

 VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3) {


  if (VAR_3->version->major <= 7)
   VAR_4 = 1;
  else if (VAR_3->version->major == 8)
   if (VAR_2->gfx.mec_fw_version < 673)
    VAR_4 = 1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->num_rings; VAR_6++) {
  VAR_5 = VAR_2->rings[VAR_6];
  if (VAR_5->funcs->type == VAR_0)

   VAR_5->has_compute_vm_bug = VAR_4;
  else
   VAR_5->has_compute_vm_bug = 0;
 }
}
