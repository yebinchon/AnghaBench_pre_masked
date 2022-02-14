
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct dpg_pause_state {scalar_t__ fw_based; scalar_t__ jpeg; } ;
struct amdgpu_ring {int gpu_addr; int ring_size; int wptr; } ;
struct TYPE_4__ {scalar_t__ fw_based; scalar_t__ jpeg; } ;
struct TYPE_6__ {TYPE_1__ pause_state; TYPE_2__* inst; } ;
struct amdgpu_device {TYPE_3__ vcn; } ;
struct TYPE_5__ {struct amdgpu_ring ring_dec; struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int,int) ;
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
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int) ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_32,
    struct dpg_pause_state *VAR_33)
{
 int VAR_34;
 uint32_t VAR_35 = 0;
 uint32_t VAR_36 = 0;
 struct amdgpu_ring *VAR_37;


 if (VAR_32->vcn.pause_state.fw_based != VAR_33->fw_based) {
  FUNC_0("dpg pause state changed %d:%d -> %d:%d",
   VAR_32->vcn.pause_state.fw_based, VAR_32->vcn.pause_state.jpeg,
   VAR_33->fw_based, VAR_33->jpeg);

  VAR_35 = FUNC_1(VAR_0, 0, VAR_12) &
   (~VAR_3);

  if (VAR_33->fw_based == VAR_11) {
   VAR_34 = 0;

   if (!(VAR_35 & VAR_1))
    FUNC_2(VAR_0, 0, VAR_19,
         VAR_10,
         VAR_9, VAR_34);

   if (!VAR_34) {

    VAR_35 |= VAR_4;
    FUNC_3(VAR_0, 0, VAR_12, VAR_35);
    FUNC_2(VAR_0, 0, VAR_12,
         VAR_3,
         VAR_3, VAR_34);


    VAR_37 = &VAR_32->vcn.inst->ring_enc[0];
    FUNC_3(VAR_0, 0, VAR_23, VAR_37->gpu_addr);
    FUNC_3(VAR_0, 0, VAR_21, FUNC_5(VAR_37->gpu_addr));
    FUNC_3(VAR_0, 0, VAR_27, VAR_37->ring_size / 4);
    FUNC_3(VAR_0, 0, VAR_25, FUNC_4(VAR_37->wptr));
    FUNC_3(VAR_0, 0, VAR_29, FUNC_4(VAR_37->wptr));

    VAR_37 = &VAR_32->vcn.inst->ring_enc[1];
    FUNC_3(VAR_0, 0, VAR_24, VAR_37->gpu_addr);
    FUNC_3(VAR_0, 0, VAR_22, FUNC_5(VAR_37->gpu_addr));
    FUNC_3(VAR_0, 0, VAR_28, VAR_37->ring_size / 4);
    FUNC_3(VAR_0, 0, VAR_26, FUNC_4(VAR_37->wptr));
    FUNC_3(VAR_0, 0, VAR_30, FUNC_4(VAR_37->wptr));

    VAR_37 = &VAR_32->vcn.inst->ring_dec;
    FUNC_3(VAR_0, 0, VAR_20,
         FUNC_1(VAR_0, 0, VAR_31) & 0x7FFFFFFF);
    FUNC_2(VAR_0, 0, VAR_19,
         VAR_7,
         VAR_9, VAR_34);
   }
  } else {

   VAR_35 &= ~VAR_4;
   FUNC_3(VAR_0, 0, VAR_12, VAR_35);
  }
  VAR_32->vcn.pause_state.fw_based = VAR_33->fw_based;
 }


 if (VAR_32->vcn.pause_state.jpeg != VAR_33->jpeg) {
  FUNC_0("dpg pause state changed %d:%d -> %d:%d",
   VAR_32->vcn.pause_state.fw_based, VAR_32->vcn.pause_state.jpeg,
   VAR_33->fw_based, VAR_33->jpeg);

  VAR_35 = FUNC_1(VAR_0, 0, VAR_12) &
   (~VAR_1);

  if (VAR_33->jpeg == VAR_11) {
   VAR_34 = 0;

   if (!(VAR_35 & VAR_3))
    FUNC_2(VAR_0, 0, VAR_19,
         VAR_10,
         VAR_9, VAR_34);

   if (!VAR_34) {

    VAR_36 = FUNC_1(VAR_0, 0, VAR_19);
    VAR_36 |= VAR_8;
    FUNC_3(VAR_0, 0, VAR_19, VAR_36);


    VAR_35 |= VAR_2;
    FUNC_3(VAR_0, 0, VAR_12, VAR_35);
    FUNC_2(VAR_0, 0, VAR_12,
       VAR_1,
       VAR_1, VAR_34);


    VAR_37 = &VAR_32->vcn.inst->ring_jpeg;
    FUNC_3(VAR_0, 0, VAR_18, 0);
    FUNC_3(VAR_0, 0, VAR_13,
       VAR_5 |
       VAR_6);
    FUNC_3(VAR_0, 0, VAR_17,
       FUNC_4(VAR_37->gpu_addr));
    FUNC_3(VAR_0, 0, VAR_16,
       FUNC_5(VAR_37->gpu_addr));
    FUNC_3(VAR_0, 0, VAR_14, VAR_37->wptr);
    FUNC_3(VAR_0, 0, VAR_15, VAR_37->wptr);
    FUNC_3(VAR_0, 0, VAR_13,
       VAR_6);

    VAR_37 = &VAR_32->vcn.inst->ring_dec;
    FUNC_3(VAR_0, 0, VAR_20,
         FUNC_1(VAR_0, 0, VAR_31) & 0x7FFFFFFF);
    FUNC_2(VAR_0, 0, VAR_19,
         VAR_7,
         VAR_9, VAR_34);
   }
  } else {

   VAR_35 &= ~VAR_2;
   FUNC_3(VAR_0, 0, VAR_12, VAR_35);
  }
  VAR_32->vcn.pause_state.jpeg = VAR_33->jpeg;
 }

 return 0;
}
