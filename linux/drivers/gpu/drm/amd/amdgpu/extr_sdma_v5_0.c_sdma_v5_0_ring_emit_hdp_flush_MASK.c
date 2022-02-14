
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nbio_hdp_flush_reg {int ref_and_mask_sdma0; int ref_and_mask_sdma1; } ;
struct amdgpu_ring {scalar_t__ me; struct amdgpu_device* adev; } ;
struct amdgpu_device {TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {int (* get_hdp_flush_done_offset ) (struct amdgpu_device*) ;int (* get_hdp_flush_req_offset ) (struct amdgpu_device*) ;struct nbio_hdp_flush_reg* hdp_flush_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_8(struct amdgpu_ring *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 u32 VAR_3 = 0;
 const struct nbio_hdp_flush_reg *VAR_4 = VAR_2->nbio_funcs->hdp_flush_reg;

 if (VAR_1->me == 0)
  VAR_3 = VAR_4->ref_and_mask_sdma0;
 else
  VAR_3 = VAR_4->ref_and_mask_sdma1;

 FUNC_5(VAR_1, FUNC_0(VAR_0) |
     FUNC_4(1) |
     FUNC_3(3));
 FUNC_5(VAR_1, (VAR_2->nbio_funcs->get_hdp_flush_done_offset(VAR_2)) << 2);
 FUNC_5(VAR_1, (VAR_2->nbio_funcs->get_hdp_flush_req_offset(VAR_2)) << 2);
 FUNC_5(VAR_1, VAR_3);
 FUNC_5(VAR_1, VAR_3);
 FUNC_5(VAR_1, FUNC_2(0xfff) |
     FUNC_1(10));
}
