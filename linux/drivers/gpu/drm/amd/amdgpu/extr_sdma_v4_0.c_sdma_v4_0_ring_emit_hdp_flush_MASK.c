
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nbio_hdp_flush_reg {int ref_and_mask_sdma0; } ;
struct amdgpu_ring {int me; struct amdgpu_device* adev; } ;
struct amdgpu_device {TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {int (* get_hdp_flush_req_offset ) (struct amdgpu_device*) ;int (* get_hdp_flush_done_offset ) (struct amdgpu_device*) ;struct nbio_hdp_flush_reg* hdp_flush_reg; } ;


 int FUNC_0 (struct amdgpu_ring*,int ,int,int ,int ,int,int,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;
 u32 VAR_2 = 0;
 const struct nbio_hdp_flush_reg *VAR_3 = VAR_1->nbio_funcs->hdp_flush_reg;

 VAR_2 = VAR_3->ref_and_mask_sdma0 << VAR_0->me;

 FUNC_0(VAR_0, 0, 1,
          VAR_1->nbio_funcs->get_hdp_flush_done_offset(VAR_1),
          VAR_1->nbio_funcs->get_hdp_flush_req_offset(VAR_1),
          VAR_2, VAR_2, 10);
}
