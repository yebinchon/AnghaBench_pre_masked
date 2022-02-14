
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct v10_gfx_mqd {int cp_mqd_base_addr; int cp_mqd_base_addr_hi; int cp_gfx_mqd_control; int cp_gfx_hqd_queue_priority; int cp_gfx_hqd_quantum; int cp_gfx_hqd_base; int cp_gfx_hqd_base_hi; int cp_gfx_hqd_rptr_addr; int cp_gfx_hqd_rptr_addr_hi; int cp_rb_wptr_poll_addr_lo; int cp_rb_wptr_poll_addr_hi; int cp_gfx_hqd_cntl; int cp_rb_doorbell_control; int cp_gfx_hqd_active; void* cp_gfx_hqd_rptr; scalar_t__ cp_gfx_hqd_vmid; scalar_t__ cp_gfx_hqd_wptr_hi; scalar_t__ cp_gfx_hqd_wptr; } ;
struct amdgpu_ring {int mqd_gpu_addr; int gpu_addr; int rptr_offs; int wptr_offs; int ring_size; int doorbell_index; scalar_t__ wptr; scalar_t__ use_doorbell; struct v10_gfx_mqd* mqd_ptr; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int gpu_addr; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int ,int ,int) ;
 void* FUNC_1 (int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_ring *VAR_24)
{
 struct amdgpu_device *VAR_25 = VAR_24->adev;
 struct v10_gfx_mqd *VAR_26 = VAR_24->mqd_ptr;
 uint64_t VAR_27, VAR_28;
 uint32_t VAR_29;
 uint32_t VAR_30;


 VAR_26->cp_gfx_hqd_wptr = 0;
 VAR_26->cp_gfx_hqd_wptr_hi = 0;


 VAR_26->cp_mqd_base_addr = VAR_24->mqd_gpu_addr & 0xfffffffc;
 VAR_26->cp_mqd_base_addr_hi = FUNC_3(VAR_24->mqd_gpu_addr);


 VAR_29 = FUNC_1(VAR_10, 0, VAR_22);
 VAR_29 = FUNC_0(VAR_29, VAR_6, VAR_16, 0);
 VAR_29 = FUNC_0(VAR_29, VAR_6, VAR_12, 1);
 VAR_29 = FUNC_0(VAR_29, VAR_6, VAR_1, 0);
 VAR_26->cp_gfx_mqd_control = VAR_29;


 VAR_29 = FUNC_1(VAR_10, 0, VAR_21);
 VAR_29 = FUNC_0(VAR_29, VAR_5, VAR_16, 0);
 VAR_26->cp_gfx_hqd_vmid = 0;



 VAR_29 = FUNC_1(VAR_10, 0, VAR_19);
 VAR_29 = FUNC_0(VAR_29, VAR_4, VAR_11, 0);
 VAR_26->cp_gfx_hqd_queue_priority = VAR_29;


 VAR_29 = FUNC_1(VAR_10, 0, VAR_18);
 VAR_29 = FUNC_0(VAR_29, VAR_3, VAR_13, 1);
 VAR_26->cp_gfx_hqd_quantum = VAR_29;


 VAR_27 = VAR_24->gpu_addr >> 8;
 VAR_26->cp_gfx_hqd_base = VAR_27;
 VAR_26->cp_gfx_hqd_base_hi = FUNC_3(VAR_27);


 VAR_28 = VAR_25->wb.gpu_addr + (VAR_24->rptr_offs * 4);
 VAR_26->cp_gfx_hqd_rptr_addr = VAR_28 & 0xfffffffc;
 VAR_26->cp_gfx_hqd_rptr_addr_hi =
  FUNC_3(VAR_28) & 0xffff;


 VAR_28 = VAR_25->wb.gpu_addr + (VAR_24->wptr_offs * 4);
 VAR_26->cp_rb_wptr_poll_addr_lo = VAR_28 & 0xfffffffc;
 VAR_26->cp_rb_wptr_poll_addr_hi = FUNC_3(VAR_28) & 0xffff;


 VAR_30 = FUNC_2(VAR_24->ring_size / 4) - 1;
 VAR_29 = FUNC_1(VAR_10, 0, VAR_17);
 VAR_29 = FUNC_0(VAR_29, VAR_2, VAR_15, VAR_30);
 VAR_29 = FUNC_0(VAR_29, VAR_2, VAR_14, VAR_30 - 2);



 VAR_26->cp_gfx_hqd_cntl = VAR_29;


 VAR_29 = FUNC_1(VAR_10, 0, VAR_23);
 if (VAR_24->use_doorbell) {
  VAR_29 = FUNC_0(VAR_29, VAR_7,
        VAR_9, VAR_24->doorbell_index);
  VAR_29 = FUNC_0(VAR_29, VAR_7,
        VAR_8, 1);
 } else
  VAR_29 = FUNC_0(VAR_29, VAR_7,
        VAR_8, 0);
 VAR_26->cp_rb_doorbell_control = VAR_29;


 VAR_24->wptr = 0;
 VAR_26->cp_gfx_hqd_rptr = FUNC_1(VAR_10, 0, VAR_20);


 VAR_26->cp_gfx_hqd_active = 1;

 return 0;
}
