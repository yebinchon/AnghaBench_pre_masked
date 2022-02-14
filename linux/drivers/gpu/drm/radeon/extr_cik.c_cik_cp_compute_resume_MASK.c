
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int gpu_addr; } ;
struct TYPE_5__ {int num_pipe; int num_mec; int hpd_eop_gpu_addr; } ;
struct radeon_device {int usec_timeout; TYPE_4__* ring; int srbm_mutex; TYPE_2__ wb; int dev; TYPE_1__ mec; } ;
struct TYPE_7__ {int cp_hqd_pq_doorbell_control; int cp_hqd_dequeue_request; int cp_hqd_pq_rptr; int cp_hqd_pq_wptr; int cp_mqd_base_addr; int cp_mqd_base_addr_hi; int cp_mqd_control; int cp_hqd_pq_base; int cp_hqd_pq_base_hi; int cp_hqd_pq_control; int cp_hqd_pq_wptr_poll_addr; int cp_hqd_pq_wptr_poll_addr_hi; int cp_hqd_pq_rptr_report_addr; int cp_hqd_pq_rptr_report_addr_hi; int cp_hqd_vmid; int cp_hqd_active; } ;
struct bonaire_mqd {int header; int* static_thread_mgmt01; int* static_thread_mgmt23; TYPE_3__ queue_state; } ;
struct TYPE_8__ {int me; int pipe; int gpu_addr; int ring_size; int wptr; int ready; int * mqd_obj; int doorbell_index; int queue; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_1 (int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int,int,int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct radeon_device*,int,int ,int,int ,int ,int *,int *,int **) ;
 int FUNC_12 (int *,void**) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int*) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct radeon_device*,int,TYPE_4__*) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct radeon_device *VAR_47)
{
 int VAR_48, VAR_49, VAR_50, VAR_51;
 u32 VAR_52;
 bool VAR_53 = 1;
 u64 VAR_54;
 u64 VAR_55;
 u64 VAR_56;
 u64 VAR_57;
 u32 *VAR_58;
 struct bonaire_mqd *VAR_59;

 VAR_48 = FUNC_4(VAR_47);
 if (VAR_48)
  return VAR_48;


 VAR_52 = FUNC_1(VAR_5);
 VAR_52 |= (1 << 23);
 FUNC_2(VAR_5, VAR_52);


 FUNC_8(&VAR_47->srbm_mutex);

 for (VAR_49 = 0; VAR_49 < (VAR_47->mec.num_pipe * VAR_47->mec.num_mec); ++VAR_49) {
  int VAR_60 = (VAR_49 < 4) ? 1 : 2;
  int VAR_61 = (VAR_49 < 4) ? VAR_49 : (VAR_49 - 4);

  FUNC_5(VAR_47, VAR_60, VAR_61, 0, 0);

  VAR_56 = VAR_47->mec.hpd_eop_gpu_addr + (VAR_49 * VAR_33 * 2) ;

  FUNC_2(VAR_6, VAR_56 >> 8);
  FUNC_2(VAR_7, FUNC_20(VAR_56) >> 8);


  FUNC_2(VAR_9, 0);


  VAR_52 = FUNC_1(VAR_8);
  VAR_52 &= ~VAR_31;
  VAR_52 |= FUNC_10(VAR_33 / 8);
  FUNC_2(VAR_8, VAR_52);

 }
 FUNC_5(VAR_47, 0, 0, 0, 0);
 FUNC_9(&VAR_47->srbm_mutex);


 for (VAR_49 = 0; VAR_49 < 2; VAR_49++) {
  if (VAR_49 == 0)
   VAR_51 = VAR_1;
  else
   VAR_51 = VAR_2;

  if (VAR_47->ring[VAR_51].mqd_obj == ((void*)0)) {
   VAR_48 = FUNC_11(VAR_47,
          sizeof(struct bonaire_mqd),
          VAR_35, 1,
          VAR_39, 0, ((void*)0),
          ((void*)0), &VAR_47->ring[VAR_51].mqd_obj);
   if (VAR_48) {
    FUNC_6(VAR_47->dev, "(%d) create MQD bo failed\n", VAR_48);
    return VAR_48;
   }
  }

  VAR_48 = FUNC_15(VAR_47->ring[VAR_51].mqd_obj, 0);
  if (FUNC_19(VAR_48 != 0)) {
   FUNC_3(VAR_47);
   return VAR_48;
  }
  VAR_48 = FUNC_14(VAR_47->ring[VAR_51].mqd_obj, VAR_39,
      &VAR_55);
  if (VAR_48) {
   FUNC_6(VAR_47->dev, "(%d) pin MQD bo failed\n", VAR_48);
   FUNC_3(VAR_47);
   return VAR_48;
  }
  VAR_48 = FUNC_12(VAR_47->ring[VAR_51].mqd_obj, (void **)&VAR_58);
  if (VAR_48) {
   FUNC_6(VAR_47->dev, "(%d) map MQD bo failed\n", VAR_48);
   FUNC_3(VAR_47);
   return VAR_48;
  }


  FUNC_7(VAR_58, 0, sizeof(struct bonaire_mqd));

  VAR_59 = (struct bonaire_mqd *)VAR_58;
  VAR_59->header = 0xC0310800;
  VAR_59->static_thread_mgmt01[0] = 0xffffffff;
  VAR_59->static_thread_mgmt01[1] = 0xffffffff;
  VAR_59->static_thread_mgmt23[0] = 0xffffffff;
  VAR_59->static_thread_mgmt23[1] = 0xffffffff;

  FUNC_8(&VAR_47->srbm_mutex);
  FUNC_5(VAR_47, VAR_47->ring[VAR_51].me,
    VAR_47->ring[VAR_51].pipe,
    VAR_47->ring[VAR_51].queue, 0);


  VAR_52 = FUNC_1(VAR_26);
  VAR_52 &= ~VAR_46;
  FUNC_2(VAR_26, VAR_52);


  VAR_59->queue_state.cp_hqd_pq_doorbell_control =
   FUNC_1(VAR_15);
  if (VAR_53)
   VAR_59->queue_state.cp_hqd_pq_doorbell_control |= VAR_27;
  else
   VAR_59->queue_state.cp_hqd_pq_doorbell_control &= ~VAR_27;
  FUNC_2(VAR_15,
         VAR_59->queue_state.cp_hqd_pq_doorbell_control);


  VAR_59->queue_state.cp_hqd_dequeue_request = 0;
  VAR_59->queue_state.cp_hqd_pq_rptr = 0;
  VAR_59->queue_state.cp_hqd_pq_wptr= 0;
  if (FUNC_1(VAR_10) & 1) {
   FUNC_2(VAR_11, 1);
   for (VAR_50 = 0; VAR_50 < VAR_47->usec_timeout; VAR_50++) {
    if (!(FUNC_1(VAR_10) & 1))
     break;
    FUNC_18(1);
   }
   FUNC_2(VAR_11, VAR_59->queue_state.cp_hqd_dequeue_request);
   FUNC_2(VAR_16, VAR_59->queue_state.cp_hqd_pq_rptr);
   FUNC_2(VAR_19, VAR_59->queue_state.cp_hqd_pq_wptr);
  }


  VAR_59->queue_state.cp_mqd_base_addr = VAR_55 & 0xfffffffc;
  VAR_59->queue_state.cp_mqd_base_addr_hi = FUNC_20(VAR_55);
  FUNC_2(VAR_23, VAR_59->queue_state.cp_mqd_base_addr);
  FUNC_2(VAR_24, VAR_59->queue_state.cp_mqd_base_addr_hi);

  VAR_59->queue_state.cp_mqd_control = FUNC_1(VAR_25);
  VAR_59->queue_state.cp_mqd_control &= ~VAR_34;
  FUNC_2(VAR_25, VAR_59->queue_state.cp_mqd_control);


  VAR_54 = VAR_47->ring[VAR_51].gpu_addr >> 8;
  VAR_59->queue_state.cp_hqd_pq_base = VAR_54;
  VAR_59->queue_state.cp_hqd_pq_base_hi = FUNC_20(VAR_54);
  FUNC_2(VAR_12, VAR_59->queue_state.cp_hqd_pq_base);
  FUNC_2(VAR_13, VAR_59->queue_state.cp_hqd_pq_base_hi);


  VAR_59->queue_state.cp_hqd_pq_control = FUNC_1(VAR_14);
  VAR_59->queue_state.cp_hqd_pq_control &=
   ~(VAR_38 | VAR_44);

  VAR_59->queue_state.cp_hqd_pq_control |=
   FUNC_10(VAR_47->ring[VAR_51].ring_size / 8);
  VAR_59->queue_state.cp_hqd_pq_control |=
   (FUNC_10(VAR_40/8) << 8);



  VAR_59->queue_state.cp_hqd_pq_control &=
   ~(VAR_45 | VAR_43 | VAR_36);
  VAR_59->queue_state.cp_hqd_pq_control |=
   VAR_37 | VAR_32;
  FUNC_2(VAR_14, VAR_59->queue_state.cp_hqd_pq_control);


  if (VAR_49 == 0)
   VAR_57 = VAR_47->wb.gpu_addr + VAR_3;
  else
   VAR_57 = VAR_47->wb.gpu_addr + VAR_4;
  VAR_59->queue_state.cp_hqd_pq_wptr_poll_addr = VAR_57 & 0xfffffffc;
  VAR_59->queue_state.cp_hqd_pq_wptr_poll_addr_hi = FUNC_20(VAR_57) & 0xffff;
  FUNC_2(VAR_20, VAR_59->queue_state.cp_hqd_pq_wptr_poll_addr);
  FUNC_2(VAR_21,
         VAR_59->queue_state.cp_hqd_pq_wptr_poll_addr_hi);


  if (VAR_49 == 0)
   VAR_57 = VAR_47->wb.gpu_addr + VAR_41;
  else
   VAR_57 = VAR_47->wb.gpu_addr + VAR_42;
  VAR_59->queue_state.cp_hqd_pq_rptr_report_addr = VAR_57 & 0xfffffffc;
  VAR_59->queue_state.cp_hqd_pq_rptr_report_addr_hi =
   FUNC_20(VAR_57) & 0xffff;
  FUNC_2(VAR_17,
         VAR_59->queue_state.cp_hqd_pq_rptr_report_addr);
  FUNC_2(VAR_18,
         VAR_59->queue_state.cp_hqd_pq_rptr_report_addr_hi);


  if (VAR_53) {
   VAR_59->queue_state.cp_hqd_pq_doorbell_control =
    FUNC_1(VAR_15);
   VAR_59->queue_state.cp_hqd_pq_doorbell_control &= ~VAR_29;
   VAR_59->queue_state.cp_hqd_pq_doorbell_control |=
    FUNC_0(VAR_47->ring[VAR_51].doorbell_index);
   VAR_59->queue_state.cp_hqd_pq_doorbell_control |= VAR_27;
   VAR_59->queue_state.cp_hqd_pq_doorbell_control &=
    ~(VAR_30 | VAR_28);

  } else {
   VAR_59->queue_state.cp_hqd_pq_doorbell_control = 0;
  }
  FUNC_2(VAR_15,
         VAR_59->queue_state.cp_hqd_pq_doorbell_control);


  VAR_47->ring[VAR_51].wptr = 0;
  VAR_59->queue_state.cp_hqd_pq_wptr = VAR_47->ring[VAR_51].wptr;
  FUNC_2(VAR_19, VAR_59->queue_state.cp_hqd_pq_wptr);
  VAR_59->queue_state.cp_hqd_pq_rptr = FUNC_1(VAR_16);


  VAR_59->queue_state.cp_hqd_vmid = 0;
  FUNC_2(VAR_22, VAR_59->queue_state.cp_hqd_vmid);


  VAR_59->queue_state.cp_hqd_active = 1;
  FUNC_2(VAR_10, VAR_59->queue_state.cp_hqd_active);

  FUNC_5(VAR_47, 0, 0, 0, 0);
  FUNC_9(&VAR_47->srbm_mutex);

  FUNC_13(VAR_47->ring[VAR_51].mqd_obj);
  FUNC_16(VAR_47->ring[VAR_51].mqd_obj);

  VAR_47->ring[VAR_51].ready = 1;
  VAR_48 = FUNC_17(VAR_47, VAR_51, &VAR_47->ring[VAR_51]);
  if (VAR_48)
   VAR_47->ring[VAR_51].ready = 0;
 }

 return 0;
}
