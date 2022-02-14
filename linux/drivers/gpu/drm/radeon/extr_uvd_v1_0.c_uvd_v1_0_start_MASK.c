
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct radeon_ring {int gpu_addr; int wptr; int ring_size; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ) ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

int FUNC_7(struct radeon_device *VAR_33)
{
 struct radeon_ring *VAR_34 = &VAR_33->ring[VAR_5];
 uint32_t VAR_35;
 int VAR_36, VAR_37, VAR_38;


 u32 VAR_39 = 0;
 u32 VAR_40 = 0;


 FUNC_2(VAR_10, 0);


 FUNC_3(VAR_15, 0, ~(1 << 1));


 FUNC_3(VAR_12, 1 << 8, ~(1 << 8));
 FUNC_3(VAR_28, 1 << 3, ~(1 << 3));
 FUNC_4(1);


 FUNC_2(VAR_29, VAR_3 | VAR_32 |
        VAR_2 | VAR_6 | VAR_0 |
        VAR_1 | VAR_9 | VAR_4);
 FUNC_4(5);


 FUNC_3(VAR_8, 0, ~VAR_7);
 FUNC_4(5);


 FUNC_2(VAR_11, 0x40 | (1 << 8) | (1 << 13) |
        (1 << 21) | (1 << 9) | (1 << 20));






 FUNC_2(VAR_14, VAR_39);
 FUNC_2(VAR_22, VAR_40);

 FUNC_2(VAR_18, 0x40c2040);
 FUNC_2(VAR_19, 0x0);
 FUNC_2(VAR_20, 0x40c2040);
 FUNC_2(VAR_21, 0x0);
 FUNC_2(VAR_16, 0);
 FUNC_2(VAR_17, 0x88);


 FUNC_2(VAR_29, VAR_32);
 FUNC_4(5);


 FUNC_2(VAR_31, 1 << 9);


 FUNC_3(VAR_12, 0, ~(1 << 8));

 FUNC_3(VAR_28, 0, ~(1 << 3));


 FUNC_2(VAR_29, 0);
 FUNC_4(10);

 for (VAR_36 = 0; VAR_36 < 10; ++VAR_36) {
  uint32_t VAR_41;
  for (VAR_37 = 0; VAR_37 < 100; ++VAR_37) {
   VAR_41 = FUNC_1(VAR_30);
   if (VAR_41 & 2)
    break;
   FUNC_4(10);
  }
  VAR_38 = 0;
  if (VAR_41 & 2)
   break;

  FUNC_0("UVD not responding, trying to reset the VCPU!!!\n");
  FUNC_3(VAR_29, VAR_32, ~VAR_32);
  FUNC_4(10);
  FUNC_3(VAR_29, 0, ~VAR_32);
  FUNC_4(10);
  VAR_38 = -1;
 }

 if (VAR_38) {
  FUNC_0("UVD not responding, giving up!!!\n");
  return VAR_38;
 }


 FUNC_3(VAR_15, 3<<1, ~(3 << 1));


 FUNC_2(VAR_24, 0x11010101);


 FUNC_2(VAR_27, 0);


 FUNC_2(VAR_13, FUNC_6(VAR_34->gpu_addr) |
       (0x7 << 16) | (0x1 << 31));


 FUNC_2(VAR_25, 0x0);

 VAR_34->wptr = FUNC_1(VAR_25);
 FUNC_2(VAR_26, VAR_34->wptr);


 FUNC_2(VAR_23, VAR_34->gpu_addr);


 VAR_35 = FUNC_5(VAR_34->ring_size);
 VAR_35 = (0x1 << 8) | VAR_35;
 FUNC_3(VAR_24, VAR_35, ~0x11f1f);

 return 0;
}
