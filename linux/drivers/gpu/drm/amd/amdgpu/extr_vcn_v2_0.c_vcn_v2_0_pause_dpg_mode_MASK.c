
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct dpg_pause_state {scalar_t__ fw_based; } ;
struct amdgpu_ring {int gpu_addr; int ring_size; int wptr; } ;
struct TYPE_5__ {scalar_t__ fw_based; } ;
struct TYPE_6__ {TYPE_2__ pause_state; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_3__ vcn; } ;
struct TYPE_4__ {struct amdgpu_ring* ring_enc; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
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
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_20,
    struct dpg_pause_state *VAR_21)
{
 struct amdgpu_ring *VAR_22;
 uint32_t VAR_23 = 0;
 int VAR_24;


 if (VAR_20->vcn.pause_state.fw_based != VAR_21->fw_based) {
  FUNC_0("dpg pause state changed %d -> %d",
   VAR_20->vcn.pause_state.fw_based, VAR_21->fw_based);
  VAR_23 = FUNC_1(VAR_0, 0, VAR_6) &
   (~VAR_1);

  if (VAR_21->fw_based == VAR_5) {
   VAR_24 = 0;
   FUNC_2(VAR_0, 0, VAR_7, 0x1,
    VAR_4, VAR_24);

   if (!VAR_24) {

    VAR_23 |= VAR_2;
    FUNC_3(VAR_0, 0, VAR_6, VAR_23);


    FUNC_2(VAR_0, 0, VAR_6,
        VAR_1,
        VAR_1, VAR_24);


    VAR_22 = &VAR_20->vcn.inst->ring_enc[0];
    FUNC_3(VAR_0, 0, VAR_11, VAR_22->gpu_addr);
    FUNC_3(VAR_0, 0, VAR_9, FUNC_5(VAR_22->gpu_addr));
    FUNC_3(VAR_0, 0, VAR_15, VAR_22->ring_size / 4);
    FUNC_3(VAR_0, 0, VAR_13, FUNC_4(VAR_22->wptr));
    FUNC_3(VAR_0, 0, VAR_17, FUNC_4(VAR_22->wptr));

    VAR_22 = &VAR_20->vcn.inst->ring_enc[1];
    FUNC_3(VAR_0, 0, VAR_12, VAR_22->gpu_addr);
    FUNC_3(VAR_0, 0, VAR_10, FUNC_5(VAR_22->gpu_addr));
    FUNC_3(VAR_0, 0, VAR_16, VAR_22->ring_size / 4);
    FUNC_3(VAR_0, 0, VAR_14, FUNC_4(VAR_22->wptr));
    FUNC_3(VAR_0, 0, VAR_18, FUNC_4(VAR_22->wptr));

    FUNC_3(VAR_0, 0, VAR_8,
        FUNC_1(VAR_0, 0, VAR_19) & 0x7FFFFFFF);

    FUNC_2(VAR_0, 0, VAR_7,
        VAR_3,
        VAR_4, VAR_24);
   }
  } else {

   VAR_23 &= ~VAR_2;
   FUNC_3(VAR_0, 0, VAR_6, VAR_23);
  }
  VAR_20->vcn.pause_state.fw_based = VAR_21->fw_based;
 }

 return 0;
}
