
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int ring_size; void* wptr; int gpu_addr; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct TYPE_3__ {struct amdgpu_ring ring_jpeg; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ) ;
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
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_29)
{
 struct amdgpu_ring *VAR_30 = &VAR_29->vcn.inst->ring_jpeg;
 uint32_t VAR_31;
 int VAR_32 = 0;


 VAR_31 = 1 << VAR_11;
 FUNC_5(FUNC_3(VAR_9, 0, VAR_27), VAR_31);

 FUNC_4(VAR_14, 0,
  VAR_28, VAR_12,
  VAR_13, VAR_32);

 if (VAR_32) {
  FUNC_0("amdgpu: JPEG disable power gating failed\n");
  return VAR_32;
 }


 VAR_31 = FUNC_1(FUNC_3(VAR_9, 0, VAR_19)) & ~0x1;
 FUNC_5(FUNC_3(VAR_9, 0, VAR_19), VAR_31);


 VAR_31 = FUNC_2(VAR_14, 0, VAR_15);
 VAR_31 |= 1 << VAR_2;
 VAR_31 |= 1 << VAR_0;
 VAR_31 |= 4 << VAR_1;
 FUNC_7(VAR_14, 0, VAR_15, VAR_31);

 VAR_31 = FUNC_2(VAR_14, 0, VAR_16);
 VAR_31 &= ~(VAR_5
  | VAR_4
  | VAR_6
  | VAR_3
  | VAR_7);
 FUNC_7(VAR_14, 0, VAR_16, VAR_31);


 FUNC_6(FUNC_3(VAR_9, 0, VAR_18), 0,
  ~VAR_10);


 FUNC_6(FUNC_3(VAR_14, 0, VAR_17),
  VAR_8,
  ~VAR_8);

 FUNC_7(VAR_9, 0, VAR_26, 0);
 FUNC_7(VAR_9, 0, VAR_20, (0x00000001L | 0x00000002L));
 FUNC_7(VAR_9, 0, VAR_25,
  FUNC_8(VAR_30->gpu_addr));
 FUNC_7(VAR_9, 0, VAR_24,
  FUNC_9(VAR_30->gpu_addr));
 FUNC_7(VAR_9, 0, VAR_21, 0);
 FUNC_7(VAR_9, 0, VAR_23, 0);
 FUNC_7(VAR_9, 0, VAR_20, 0x00000002L);
 FUNC_7(VAR_9, 0, VAR_22, VAR_30->ring_size / 4);
 VAR_30->wptr = FUNC_2(VAR_9, 0, VAR_23);

 return 0;
}
