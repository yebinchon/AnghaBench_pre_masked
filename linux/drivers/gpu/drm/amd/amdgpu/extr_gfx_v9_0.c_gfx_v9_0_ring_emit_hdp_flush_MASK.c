
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nbio_hdp_flush_reg {int ref_and_mask_cp2; int ref_and_mask_cp6; int ref_and_mask_cp0; } ;
struct amdgpu_ring {int me; int pipe; TYPE_1__* funcs; struct amdgpu_device* adev; } ;
struct amdgpu_device {TYPE_2__* nbio_funcs; } ;
struct TYPE_4__ {int (* get_hdp_flush_done_offset ) (struct amdgpu_device*) ;int (* get_hdp_flush_req_offset ) (struct amdgpu_device*) ;struct nbio_hdp_flush_reg* hdp_flush_reg; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*,int,int ,int,int ,int ,int,int,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 u32 VAR_3, VAR_4;
 const struct nbio_hdp_flush_reg *VAR_5 = VAR_2->nbio_funcs->hdp_flush_reg;

 if (VAR_1->funcs->type == VAR_0) {
  switch (VAR_1->me) {
  case 1:
   VAR_3 = VAR_5->ref_and_mask_cp2 << VAR_1->pipe;
   break;
  case 2:
   VAR_3 = VAR_5->ref_and_mask_cp6 << VAR_1->pipe;
   break;
  default:
   return;
  }
  VAR_4 = 0;
 } else {
  VAR_3 = VAR_5->ref_and_mask_cp0;
  VAR_4 = 1;
 }

 FUNC_0(VAR_1, VAR_4, 0, 1,
         VAR_2->nbio_funcs->get_hdp_flush_req_offset(VAR_2),
         VAR_2->nbio_funcs->get_hdp_flush_done_offset(VAR_2),
         VAR_3, VAR_3, 0x20);
}
