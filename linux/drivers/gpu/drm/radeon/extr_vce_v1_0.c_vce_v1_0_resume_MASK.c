
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int gpu_addr; int keyselect; } ;
struct radeon_device {TYPE_1__ vce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct radeon_device*) ;

int FUNC_5(struct radeon_device *VAR_29)
{
 uint64_t VAR_30 = VAR_29->vce.gpu_addr;
 uint32_t VAR_31;
 int VAR_32;

 FUNC_2(VAR_3, 0, ~(1 << 16));
 FUNC_2(VAR_17, 0x1FF000, ~0xFF9FF000);
 FUNC_2(VAR_18, 0x3F, ~0x3F);
 FUNC_1(VAR_4, 0);

 FUNC_2(VAR_12, 0x4, ~0x4);

 FUNC_1(VAR_10, 0x00398000);
 FUNC_2(VAR_9, 0x0, ~0x1);
 FUNC_1(VAR_14, 0);
 FUNC_1(VAR_15, 0);
 FUNC_1(VAR_16, 0);

 FUNC_1(VAR_28, VAR_2);

 VAR_30 += 256;
 VAR_31 = VAR_20;
 FUNC_1(VAR_22, VAR_30 & 0x7fffffff);
 FUNC_1(VAR_25, VAR_31);

 VAR_30 += VAR_31;
 VAR_31 = VAR_21;
 FUNC_1(VAR_23, VAR_30 & 0x7fffffff);
 FUNC_1(VAR_26, VAR_31);

 VAR_30 += VAR_31;
 VAR_31 = VAR_19;
 FUNC_1(VAR_24, VAR_30 & 0x7fffffff);
 FUNC_1(VAR_27, VAR_31);

 FUNC_2(VAR_11, 0x0, ~0x100);

 FUNC_1(VAR_13, VAR_29->vce.keyselect);

 for (VAR_32 = 0; VAR_32 < 10; ++VAR_32) {
  FUNC_3(10);
  if (FUNC_0(VAR_5) & VAR_7)
   break;
 }

 if (VAR_32 == 10)
  return -VAR_1;

 if (!(FUNC_0(VAR_5) & VAR_8))
  return -VAR_0;

 for (VAR_32 = 0; VAR_32 < 10; ++VAR_32) {
  FUNC_3(10);
  if (!(FUNC_0(VAR_5) & VAR_6))
   break;
 }

 if (VAR_32 == 10)
  return -VAR_1;

 FUNC_4(VAR_29);

 return 0;
}
