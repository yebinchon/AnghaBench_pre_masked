
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ready; } ;
struct amdgpu_ring {TYPE_4__ sched; int doorbell_index; int use_doorbell; } ;
struct TYPE_7__ {int num_enc_rings; TYPE_2__* inst; } ;
struct amdgpu_device {int pg_flags; TYPE_3__ vcn; TYPE_1__* nbio_funcs; } ;
struct TYPE_6__ {struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;
struct TYPE_5__ {int (* vcn_doorbell_range ) (struct amdgpu_device*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct amdgpu_ring *VAR_3 = &VAR_2->vcn.inst->ring_dec;
 int VAR_4, VAR_5;

 VAR_2->nbio_funcs->vcn_doorbell_range(VAR_2, VAR_3->use_doorbell,
          VAR_3->doorbell_index, 0);

 VAR_3->sched.ready = 1;
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  VAR_3->sched.ready = 0;
  goto done;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->vcn.num_enc_rings; ++VAR_4) {
  VAR_3 = &VAR_2->vcn.inst->ring_enc[VAR_4];
  VAR_3->sched.ready = 1;
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5) {
   VAR_3->sched.ready = 0;
   goto done;
  }
 }

 VAR_3 = &VAR_2->vcn.inst->ring_jpeg;
 VAR_3->sched.ready = 1;
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  VAR_3->sched.ready = 0;
  goto done;
 }

done:
 if (!VAR_5)
  FUNC_0("VCN decode and encode initialized successfully(under %s).\n",
   (VAR_2->pg_flags & VAR_0)?"DPG Mode":"SPG Mode");

 return VAR_5;
}
