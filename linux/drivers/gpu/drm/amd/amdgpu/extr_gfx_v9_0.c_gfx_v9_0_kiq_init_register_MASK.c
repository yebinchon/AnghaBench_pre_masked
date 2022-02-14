
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9_mqd {int cp_hqd_eop_base_addr_lo; int cp_hqd_eop_base_addr_hi; int cp_hqd_eop_control; int cp_hqd_pq_doorbell_control; int cp_hqd_dequeue_request; int cp_hqd_pq_rptr; int cp_hqd_pq_wptr_lo; int cp_hqd_pq_wptr_hi; int cp_mqd_base_addr_lo; int cp_mqd_base_addr_hi; int cp_mqd_control; int cp_hqd_pq_base_lo; int cp_hqd_pq_base_hi; int cp_hqd_pq_control; int cp_hqd_pq_rptr_report_addr_lo; int cp_hqd_pq_rptr_report_addr_hi; int cp_hqd_pq_wptr_poll_addr_lo; int cp_hqd_pq_wptr_poll_addr_hi; int cp_hqd_vmid; int cp_hqd_persistent_state; int cp_hqd_active; } ;
struct amdgpu_ring {scalar_t__ use_doorbell; struct v9_mqd* mqd_ptr; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int kiq; int userqueue_end; } ;
struct amdgpu_device {int usec_timeout; TYPE_1__ doorbell_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_ring *VAR_28)
{
 struct amdgpu_device *VAR_29 = VAR_28->adev;
 struct v9_mqd *VAR_30 = VAR_28->mqd_ptr;
 int VAR_31;


 FUNC_1(VAR_4, 0, VAR_1, VAR_3, 0);

 FUNC_3(VAR_4, 0, VAR_7,
        VAR_30->cp_hqd_eop_base_addr_lo);
 FUNC_3(VAR_4, 0, VAR_8,
        VAR_30->cp_hqd_eop_base_addr_hi);


 FUNC_3(VAR_4, 0, VAR_9,
        VAR_30->cp_hqd_eop_control);


 FUNC_3(VAR_4, 0, VAR_14,
        VAR_30->cp_hqd_pq_doorbell_control);


 if (FUNC_0(VAR_4, 0, VAR_5) & 1) {
  FUNC_3(VAR_4, 0, VAR_6, 1);
  for (VAR_31 = 0; VAR_31 < VAR_29->usec_timeout; VAR_31++) {
   if (!(FUNC_0(VAR_4, 0, VAR_5) & 1))
    break;
   FUNC_4(1);
  }
  FUNC_3(VAR_4, 0, VAR_6,
         VAR_30->cp_hqd_dequeue_request);
  FUNC_3(VAR_4, 0, VAR_15,
         VAR_30->cp_hqd_pq_rptr);
  FUNC_3(VAR_4, 0, VAR_19,
         VAR_30->cp_hqd_pq_wptr_lo);
  FUNC_3(VAR_4, 0, VAR_18,
         VAR_30->cp_hqd_pq_wptr_hi);
 }


 FUNC_3(VAR_4, 0, VAR_25,
        VAR_30->cp_mqd_base_addr_lo);
 FUNC_3(VAR_4, 0, VAR_26,
        VAR_30->cp_mqd_base_addr_hi);


 FUNC_3(VAR_4, 0, VAR_27,
        VAR_30->cp_mqd_control);


 FUNC_3(VAR_4, 0, VAR_11,
        VAR_30->cp_hqd_pq_base_lo);
 FUNC_3(VAR_4, 0, VAR_12,
        VAR_30->cp_hqd_pq_base_hi);


 FUNC_3(VAR_4, 0, VAR_13,
        VAR_30->cp_hqd_pq_control);


 FUNC_3(VAR_4, 0, VAR_16,
    VAR_30->cp_hqd_pq_rptr_report_addr_lo);
 FUNC_3(VAR_4, 0, VAR_17,
    VAR_30->cp_hqd_pq_rptr_report_addr_hi);


 FUNC_3(VAR_4, 0, VAR_20,
        VAR_30->cp_hqd_pq_wptr_poll_addr_lo);
 FUNC_3(VAR_4, 0, VAR_21,
        VAR_30->cp_hqd_pq_wptr_poll_addr_hi);


 if (VAR_28->use_doorbell) {
  FUNC_2(VAR_4, 0, VAR_23,
     (VAR_29->doorbell_index.kiq * 2) << 2);
  FUNC_2(VAR_4, 0, VAR_24,
     (VAR_29->doorbell_index.userqueue_end * 2) << 2);
 }

 FUNC_3(VAR_4, 0, VAR_14,
        VAR_30->cp_hqd_pq_doorbell_control);


 FUNC_3(VAR_4, 0, VAR_19,
        VAR_30->cp_hqd_pq_wptr_lo);
 FUNC_3(VAR_4, 0, VAR_18,
        VAR_30->cp_hqd_pq_wptr_hi);


 FUNC_3(VAR_4, 0, VAR_22, VAR_30->cp_hqd_vmid);

 FUNC_3(VAR_4, 0, VAR_10,
        VAR_30->cp_hqd_persistent_state);


 FUNC_3(VAR_4, 0, VAR_5,
        VAR_30->cp_hqd_active);

 if (VAR_28->use_doorbell)
  FUNC_1(VAR_4, 0, VAR_0, VAR_2, 1);

 return 0;
}
