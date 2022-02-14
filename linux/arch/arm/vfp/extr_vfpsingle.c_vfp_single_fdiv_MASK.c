
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vfp_single {int sign; int exponent; int significand; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vfp_single*,struct vfp_single*,struct vfp_single*,int ) ;
 int FUNC_4 (int ,int) ;
 struct vfp_single VAR_6 ;
 int FUNC_5 (struct vfp_single*) ;
 int FUNC_6 (int,struct vfp_single*,int ,int ,char*) ;
 int FUNC_7 (struct vfp_single*) ;
 int FUNC_8 (struct vfp_single*) ;
 int FUNC_9 (struct vfp_single*,int ) ;

__attribute__((used)) static u32 FUNC_10(int VAR_7, int VAR_8, s32 VAR_9, u32 VAR_10)
{
 struct vfp_single VAR_11, VAR_12, VAR_13;
 u32 VAR_14 = 0;
 s32 VAR_15 = FUNC_2(VAR_8);
 int VAR_16, VAR_17;

 FUNC_1("VFP: s%u = %08x\n", VAR_8, VAR_15);

 FUNC_9(&VAR_12, VAR_15);
 FUNC_9(&VAR_13, VAR_9);

 VAR_11.sign = VAR_12.sign ^ VAR_13.sign;

 VAR_17 = FUNC_8(&VAR_12);
 VAR_16 = FUNC_8(&VAR_13);




 if (VAR_17 & VAR_4)
  goto vsn_nan;




 if (VAR_16 & VAR_4)
  goto vsm_nan;





 if (VAR_16 & VAR_17 & (VAR_3|VAR_5))
  goto invalid;




 if (VAR_17 & VAR_3)
  goto infinity;




 if (VAR_16 & VAR_5)
  goto divzero;




 if (VAR_16 & VAR_3 || VAR_17 & VAR_5)
  goto zero;

 if (VAR_17 & VAR_2)
  FUNC_5(&VAR_12);
 if (VAR_16 & VAR_2)
  FUNC_5(&VAR_13);




 VAR_11.exponent = VAR_12.exponent - VAR_13.exponent + 127 - 1;
 VAR_13.significand <<= 1;
 if (VAR_13.significand <= (2 * VAR_12.significand)) {
  VAR_12.significand >>= 1;
  VAR_11.exponent++;
 }
 {
  u64 VAR_18 = (u64)VAR_12.significand << 32;
  FUNC_0(VAR_18, VAR_13.significand);
  VAR_11.significand = VAR_18;
 }
 if ((VAR_11.significand & 0x3f) == 0)
  VAR_11.significand |= ((u64)VAR_13.significand * VAR_11.significand != (u64)VAR_12.significand << 32);

 return FUNC_6(VAR_7, &VAR_11, VAR_10, 0, "fdiv");

 vsn_nan:
 VAR_14 = FUNC_3(&VAR_11, &VAR_12, &VAR_13, VAR_10);
 pack:
 FUNC_4(FUNC_7(&VAR_11), VAR_7);
 return VAR_14;

 vsm_nan:
 VAR_14 = FUNC_3(&VAR_11, &VAR_13, &VAR_12, VAR_10);
 goto pack;

 zero:
 VAR_11.exponent = 0;
 VAR_11.significand = 0;
 goto pack;

 divzero:
 VAR_14 = VAR_0;
 infinity:
 VAR_11.exponent = 255;
 VAR_11.significand = 0;
 goto pack;

 invalid:
 FUNC_4(FUNC_7(&VAR_6), VAR_7);
 return VAR_1;
}
