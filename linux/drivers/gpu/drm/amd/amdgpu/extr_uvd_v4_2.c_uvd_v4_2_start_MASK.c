
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct amdgpu_ring {int gpu_addr; int ring_size; void* wptr; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 int VAR_4 ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int) ;
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
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_28)
{
 struct amdgpu_ring *VAR_29 = &VAR_28->uvd.inst->ring;
 uint32_t VAR_30;
 int VAR_31, VAR_32, VAR_33;
 u32 VAR_34;

 u32 VAR_35 = 0;
 u32 VAR_36 = 0;


 FUNC_4(VAR_26, 1<<2, ~(1<<2));

 FUNC_11(VAR_28, 1);
 FUNC_3(VAR_6, 0);


 FUNC_4(VAR_5, 0, ~VAR_0);
 FUNC_7(5);


 FUNC_3(VAR_27, 1 << 9);


 FUNC_4(VAR_11, 0, ~(1 << 1));






 FUNC_3(VAR_10, VAR_35);
 FUNC_3(VAR_19, VAR_36);

 FUNC_3(VAR_7, 0x203108);

 VAR_34 = FUNC_1(VAR_12);
 FUNC_3(VAR_12, VAR_34 | 0x10);

 FUNC_3(VAR_15, 0x40c2040);
 FUNC_3(VAR_16, 0x0);
 FUNC_3(VAR_17, 0x40c2040);
 FUNC_3(VAR_18, 0x0);
 FUNC_3(VAR_13, 0);
 FUNC_3(VAR_14, 0x88);

 FUNC_10(VAR_28);

 VAR_34 = FUNC_2(VAR_4);
 FUNC_5(VAR_4, VAR_34 & (~0x10));


 FUNC_4(VAR_8, 0, ~(1 << 8));

 FUNC_4(VAR_25, 0, ~VAR_1);

 FUNC_4(VAR_25, 0, ~VAR_2);

 FUNC_4(VAR_25, 0, ~VAR_3);

 FUNC_7(10);

 for (VAR_31 = 0; VAR_31 < 10; ++VAR_31) {
  uint32_t VAR_37;
  for (VAR_32 = 0; VAR_32 < 100; ++VAR_32) {
   VAR_37 = FUNC_1(VAR_26);
   if (VAR_37 & 2)
    break;
   FUNC_7(10);
  }
  VAR_33 = 0;
  if (VAR_37 & 2)
   break;

  FUNC_0("UVD not responding, trying to reset the VCPU!!!\n");
  FUNC_4(VAR_25, VAR_3,
    ~VAR_3);
  FUNC_7(10);
  FUNC_4(VAR_25, 0, ~VAR_3);
  FUNC_7(10);
  VAR_33 = -1;
 }

 if (VAR_33) {
  FUNC_0("UVD not responding, giving up!!!\n");
  return VAR_33;
 }


 FUNC_4(VAR_11, 3<<1, ~(3 << 1));

 FUNC_4(VAR_26, 0, ~(1<<2));


 FUNC_3(VAR_21, 0x11010101);


 FUNC_3(VAR_24, 0);


 FUNC_3(VAR_9, FUNC_9(VAR_29->gpu_addr) |
       (0x7 << 16) | (0x1 << 31));


 FUNC_3(VAR_22, 0x0);

 VAR_29->wptr = FUNC_1(VAR_22);
 FUNC_3(VAR_23, FUNC_6(VAR_29->wptr));


 FUNC_3(VAR_20, VAR_29->gpu_addr);


 VAR_30 = FUNC_8(VAR_29->ring_size);
 VAR_30 = (0x1 << 8) | VAR_30;
 FUNC_4(VAR_21, VAR_30, ~0x11f1f);

 return 0;
}
