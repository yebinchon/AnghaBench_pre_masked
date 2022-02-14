
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ready; } ;
struct amdgpu_ring {TYPE_3__ sched; } ;
struct TYPE_5__ {int num_vcn_inst; int harvest_config; int num_enc_rings; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct TYPE_4__ {struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;
 struct amdgpu_ring *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->vcn.num_vcn_inst; ++VAR_6) {
  if (VAR_4->vcn.harvest_config & (1 << VAR_6))
   continue;
  VAR_5 = &VAR_4->vcn.inst[VAR_6].ring_dec;

  if (FUNC_0(VAR_1, VAR_6, VAR_2))
   FUNC_1(VAR_4, VAR_0);

  VAR_5->sched.ready = 0;

  for (VAR_6 = 0; VAR_6 < VAR_4->vcn.num_enc_rings; ++VAR_6) {
   VAR_5 = &VAR_4->vcn.inst[VAR_6].ring_enc[VAR_6];
   VAR_5->sched.ready = 0;
  }

  VAR_5 = &VAR_4->vcn.inst[VAR_6].ring_jpeg;
  VAR_5->sched.ready = 0;
 }

 return 0;
}
