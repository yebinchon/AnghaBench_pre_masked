
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ready; } ;
struct amdgpu_ring {TYPE_1__ sched; } ;
struct TYPE_6__ {int num_enc_rings; TYPE_2__* inst; } ;
struct amdgpu_device {int pg_flags; TYPE_3__ vcn; } ;
struct TYPE_5__ {struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct amdgpu_ring*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct amdgpu_ring *VAR_3 = &VAR_2->vcn.inst->ring_dec;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  goto done;

 for (VAR_4 = 0; VAR_4 < VAR_2->vcn.num_enc_rings; ++VAR_4) {
  VAR_3 = &VAR_2->vcn.inst->ring_enc[VAR_4];
  VAR_3->sched.ready = 1;
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5)
   goto done;
 }

 VAR_3 = &VAR_2->vcn.inst->ring_jpeg;
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  goto done;

done:
 if (!VAR_5)
  FUNC_0("VCN decode and encode initialized successfully(under %s).\n",
   (VAR_2->pg_flags & VAR_0)?"DPG Mode":"SPG Mode");

 return VAR_5;
}
