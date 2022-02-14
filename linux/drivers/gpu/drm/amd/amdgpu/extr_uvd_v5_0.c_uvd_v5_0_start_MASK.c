
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {void* wptr; void* gpu_addr; int ring_size; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int ,int) ;
 void* FUNC_2 (int ) ;
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
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int) ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_40)
{
 struct amdgpu_ring *VAR_41 = &VAR_40->uvd.inst->ring;
 uint32_t VAR_42, VAR_43;
 uint32_t VAR_44;
 uint32_t VAR_45;
 int VAR_46, VAR_47, VAR_48;


 FUNC_4(VAR_31, 0, ~(1 << 2));


 VAR_44 = 0;
 VAR_45 = 0;

 FUNC_9(VAR_40);


 FUNC_4(VAR_23, 0, ~(1 << 1));


 FUNC_4(VAR_19, 1 << 8, ~(1 << 8));
 FUNC_6(1);


 FUNC_3(VAR_37, VAR_12 |
  VAR_16 | VAR_11 |
  VAR_14 | VAR_9 |
  VAR_10 | VAR_15 |
  VAR_13);
 FUNC_6(5);


 FUNC_4(VAR_17, 0, ~VAR_6);
 FUNC_6(5);


 FUNC_3(VAR_18, 0x40 | (1 << 8) | (1 << 13) |
        (1 << 21) | (1 << 9) | (1 << 20));






 FUNC_3(VAR_22, VAR_44);
 FUNC_3(VAR_30, VAR_45);

 FUNC_3(VAR_26, 0x40c2040);
 FUNC_3(VAR_27, 0x0);
 FUNC_3(VAR_28, 0x40c2040);
 FUNC_3(VAR_29, 0x0);
 FUNC_3(VAR_24, 0);
 FUNC_3(VAR_25, 0x88);


 FUNC_3(VAR_37, VAR_16);
 FUNC_6(5);


 FUNC_3(VAR_39, 1 << 9);


 FUNC_4(VAR_19, 0, ~(1 << 8));


 FUNC_3(VAR_37, 0);
 FUNC_6(10);

 for (VAR_46 = 0; VAR_46 < 10; ++VAR_46) {
  uint32_t VAR_49;
  for (VAR_47 = 0; VAR_47 < 100; ++VAR_47) {
   VAR_49 = FUNC_2(VAR_38);
   if (VAR_49 & 2)
    break;
   FUNC_6(10);
  }
  VAR_48 = 0;
  if (VAR_49 & 2)
   break;

  FUNC_0("UVD not responding, trying to reset the VCPU!!!\n");
  FUNC_4(VAR_37, VAR_16,
    ~VAR_16);
  FUNC_6(10);
  FUNC_4(VAR_37, 0, ~VAR_16);
  FUNC_6(10);
  VAR_48 = -1;
 }

 if (VAR_48) {
  FUNC_0("UVD not responding, giving up!!!\n");
  return VAR_48;
 }

 FUNC_4(VAR_23, 3 << 1, ~(3 << 1));


 FUNC_4(VAR_38, 0, ~(2 << 1));

 VAR_42 = FUNC_7(VAR_41->ring_size);
 VAR_43 = 0;
 VAR_43 = FUNC_1(VAR_43, VAR_7, VAR_1, VAR_42);
 VAR_43 = FUNC_1(VAR_43, VAR_7, VAR_0, 1);
 VAR_43 = FUNC_1(VAR_43, VAR_7, VAR_2, 1);
 VAR_43 = FUNC_1(VAR_43, VAR_7, VAR_5, 0);
 VAR_43 = FUNC_1(VAR_43, VAR_7, VAR_3, 1);
 VAR_43 = FUNC_1(VAR_43, VAR_7, VAR_4, 1);

 FUNC_3(VAR_32, VAR_43);


 FUNC_3(VAR_36, 0);


 FUNC_3(VAR_34, (FUNC_8(VAR_41->gpu_addr) >> 2));


 FUNC_3(VAR_21,
   FUNC_5(VAR_41->gpu_addr));
 FUNC_3(VAR_20,
   FUNC_8(VAR_41->gpu_addr));


 FUNC_3(VAR_33, 0);

 VAR_41->wptr = FUNC_2(VAR_33);
 FUNC_3(VAR_35, FUNC_5(VAR_41->wptr));

 FUNC_4(VAR_32, 0, ~VAR_8);

 return 0;
}
