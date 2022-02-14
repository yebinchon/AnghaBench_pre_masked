
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct v10_compute_mqd {int header; int compute_pipelinestat_enable; int compute_static_thread_mgmt_se0; int compute_static_thread_mgmt_se1; int compute_static_thread_mgmt_se2; int compute_static_thread_mgmt_se3; int compute_misc_reserved; int cp_hqd_eop_base_addr_lo; int cp_hqd_eop_base_addr_hi; int cp_mqd_base_addr_lo; int cp_mqd_base_addr_hi; int cp_hqd_pq_base_lo; int cp_hqd_pq_base_hi; int cp_hqd_pq_rptr_report_addr_lo; int cp_hqd_pq_rptr_report_addr_hi; int cp_hqd_pq_wptr_poll_addr_lo; int cp_hqd_pq_wptr_poll_addr_hi; int cp_hqd_active; void* cp_hqd_ib_control; void* cp_hqd_persistent_state; scalar_t__ cp_hqd_vmid; void* cp_hqd_pq_rptr; void* cp_hqd_pq_doorbell_control; void* cp_hqd_pq_control; void* cp_mqd_control; scalar_t__ cp_hqd_pq_wptr_hi; scalar_t__ cp_hqd_pq_wptr_lo; scalar_t__ cp_hqd_dequeue_request; void* cp_hqd_eop_control; } ;
struct amdgpu_ring {int eop_gpu_addr; int doorbell_index; int mqd_gpu_addr; int gpu_addr; int ring_size; int rptr_offs; int wptr_offs; scalar_t__ wptr; scalar_t__ use_doorbell; struct v10_compute_mqd* mqd_ptr; struct amdgpu_device* adev; } ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_0 (void*,int ,int ,int) ;
 int VAR_20 ;
 void* FUNC_1 (int ,int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_ring *VAR_31)
{
 struct amdgpu_device *VAR_32 = VAR_31->adev;
 struct v10_compute_mqd *VAR_33 = VAR_31->mqd_ptr;
 uint64_t VAR_34, VAR_35, VAR_36;
 uint32_t VAR_37;

 VAR_33->header = 0xC0310800;
 VAR_33->compute_pipelinestat_enable = 0x00000001;
 VAR_33->compute_static_thread_mgmt_se0 = 0xffffffff;
 VAR_33->compute_static_thread_mgmt_se1 = 0xffffffff;
 VAR_33->compute_static_thread_mgmt_se2 = 0xffffffff;
 VAR_33->compute_static_thread_mgmt_se3 = 0xffffffff;
 VAR_33->compute_misc_reserved = 0x00000003;

 VAR_36 = VAR_31->eop_gpu_addr >> 8;
 VAR_33->cp_hqd_eop_base_addr_lo = VAR_36;
 VAR_33->cp_hqd_eop_base_addr_hi = FUNC_3(VAR_36);


 VAR_37 = FUNC_1(VAR_13, 0, VAR_24);
 VAR_37 = FUNC_0(VAR_37, VAR_1, VAR_12,
   (FUNC_2(VAR_14 / 4) - 1));

 VAR_33->cp_hqd_eop_control = VAR_37;


 VAR_37 = FUNC_1(VAR_13, 0, VAR_28);

 if (VAR_31->use_doorbell) {
  VAR_37 = FUNC_0(VAR_37, VAR_5,
        VAR_9, VAR_31->doorbell_index);
  VAR_37 = FUNC_0(VAR_37, VAR_5,
        VAR_7, 1);
  VAR_37 = FUNC_0(VAR_37, VAR_5,
        VAR_10, 0);
  VAR_37 = FUNC_0(VAR_37, VAR_5,
        VAR_8, 0);
 } else {
  VAR_37 = FUNC_0(VAR_37, VAR_5,
        VAR_7, 0);
 }

 VAR_33->cp_hqd_pq_doorbell_control = VAR_37;


 VAR_31->wptr = 0;
 VAR_33->cp_hqd_dequeue_request = 0;
 VAR_33->cp_hqd_pq_rptr = 0;
 VAR_33->cp_hqd_pq_wptr_lo = 0;
 VAR_33->cp_hqd_pq_wptr_hi = 0;


 VAR_33->cp_mqd_base_addr_lo = VAR_31->mqd_gpu_addr & 0xfffffffc;
 VAR_33->cp_mqd_base_addr_hi = FUNC_3(VAR_31->mqd_gpu_addr);


 VAR_37 = FUNC_1(VAR_13, 0, VAR_30);
 VAR_37 = FUNC_0(VAR_37, VAR_6, VAR_23, 0);
 VAR_33->cp_mqd_control = VAR_37;


 VAR_34 = VAR_31->gpu_addr >> 8;
 VAR_33->cp_hqd_pq_base_lo = VAR_34;
 VAR_33->cp_hqd_pq_base_hi = FUNC_3(VAR_34);


 VAR_37 = FUNC_1(VAR_13, 0, VAR_27);
 VAR_37 = FUNC_0(VAR_37, VAR_4, VAR_19,
       (FUNC_2(VAR_31->ring_size / 4) - 1));
 VAR_37 = FUNC_0(VAR_37, VAR_4, VAR_20,
       ((FUNC_2(VAR_0 / 4) - 1) << 8));



 VAR_37 = FUNC_0(VAR_37, VAR_4, VAR_22, 0);
 VAR_37 = FUNC_0(VAR_37, VAR_4, VAR_21, 0);
 VAR_37 = FUNC_0(VAR_37, VAR_4, VAR_18, 1);
 VAR_37 = FUNC_0(VAR_37, VAR_4, VAR_15, 1);
 VAR_33->cp_hqd_pq_control = VAR_37;


 VAR_35 = VAR_32->wb.gpu_addr + (VAR_31->rptr_offs * 4);
 VAR_33->cp_hqd_pq_rptr_report_addr_lo = VAR_35 & 0xfffffffc;
 VAR_33->cp_hqd_pq_rptr_report_addr_hi =
  FUNC_3(VAR_35) & 0xffff;


 VAR_35 = VAR_32->wb.gpu_addr + (VAR_31->wptr_offs * 4);
 VAR_33->cp_hqd_pq_wptr_poll_addr_lo = VAR_35 & 0xfffffffc;
 VAR_33->cp_hqd_pq_wptr_poll_addr_hi = FUNC_3(VAR_35) & 0xffff;

 VAR_37 = 0;

 if (VAR_31->use_doorbell) {
  VAR_37 = FUNC_1(VAR_13, 0, VAR_28);
  VAR_37 = FUNC_0(VAR_37, VAR_5,
    VAR_9, VAR_31->doorbell_index);

  VAR_37 = FUNC_0(VAR_37, VAR_5,
        VAR_7, 1);
  VAR_37 = FUNC_0(VAR_37, VAR_5,
        VAR_10, 0);
  VAR_37 = FUNC_0(VAR_37, VAR_5,
        VAR_8, 0);
 }

 VAR_33->cp_hqd_pq_doorbell_control = VAR_37;


 VAR_31->wptr = 0;
 VAR_33->cp_hqd_pq_rptr = FUNC_1(VAR_13, 0, VAR_29);


 VAR_33->cp_hqd_vmid = 0;

 VAR_37 = FUNC_1(VAR_13, 0, VAR_26);
 VAR_37 = FUNC_0(VAR_37, VAR_3, VAR_17, 0x53);
 VAR_33->cp_hqd_persistent_state = VAR_37;


 VAR_37 = FUNC_1(VAR_13, 0, VAR_25);
 VAR_37 = FUNC_0(VAR_37, VAR_2, VAR_16, 3);
 VAR_33->cp_hqd_ib_control = VAR_37;


 VAR_33->cp_hqd_active = 1;

 return 0;
}
