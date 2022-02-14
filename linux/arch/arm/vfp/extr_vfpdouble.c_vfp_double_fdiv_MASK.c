
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct vfp_double {int sign; int exponent; int significand; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int,int ,scalar_t__,scalar_t__) ;
 struct vfp_double VAR_6 ;
 int FUNC_3 (struct vfp_double*) ;
 int FUNC_4 (int,struct vfp_double*,int ,int ,char*) ;
 int FUNC_5 (struct vfp_double*) ;
 int FUNC_6 (struct vfp_double*) ;
 int FUNC_7 (struct vfp_double*,int ) ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct vfp_double*,struct vfp_double*,struct vfp_double*,int ) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static u32 FUNC_12(int VAR_7, int VAR_8, int VAR_9, u32 VAR_10)
{
 struct vfp_double VAR_11, VAR_12, VAR_13;
 u32 VAR_14 = 0;
 int VAR_15, VAR_16;

 FUNC_7(&VAR_12, FUNC_9(VAR_8));
 FUNC_7(&VAR_13, FUNC_9(VAR_9));

 VAR_11.sign = VAR_12.sign ^ VAR_13.sign;

 VAR_16 = FUNC_6(&VAR_12);
 VAR_15 = FUNC_6(&VAR_13);




 if (VAR_16 & VAR_4)
  goto vdn_nan;




 if (VAR_15 & VAR_4)
  goto vdm_nan;





 if (VAR_15 & VAR_16 & (VAR_3|VAR_5))
  goto invalid;




 if (VAR_16 & VAR_3)
  goto infinity;




 if (VAR_15 & VAR_5)
  goto divzero;




 if (VAR_15 & VAR_3 || VAR_16 & VAR_5)
  goto zero;

 if (VAR_16 & VAR_2)
  FUNC_3(&VAR_12);
 if (VAR_15 & VAR_2)
  FUNC_3(&VAR_13);




 VAR_11.exponent = VAR_12.exponent - VAR_13.exponent + 1023 - 1;
 VAR_13.significand <<= 1;
 if (VAR_13.significand <= (2 * VAR_12.significand)) {
  VAR_12.significand >>= 1;
  VAR_11.exponent++;
 }
 VAR_11.significand = FUNC_8(VAR_12.significand, 0, VAR_13.significand);
 if ((VAR_11.significand & 0x1ff) <= 2) {
  u64 VAR_17, VAR_18, VAR_19, VAR_20;
  FUNC_1(&VAR_17, &VAR_18, VAR_13.significand, VAR_11.significand);
  FUNC_2(&VAR_19, &VAR_20, VAR_12.significand, 0, VAR_17, VAR_18);
  while ((s64)VAR_19 < 0) {
   VAR_11.significand -= 1;
   FUNC_0(&VAR_19, &VAR_20, VAR_19, VAR_20, 0, VAR_13.significand);
  }
  VAR_11.significand |= (VAR_20 != 0);
 }
 return FUNC_4(VAR_7, &VAR_11, VAR_10, 0, "fdiv");

 vdn_nan:
 VAR_14 = FUNC_10(&VAR_11, &VAR_12, &VAR_13, VAR_10);
 pack:
 FUNC_11(FUNC_5(&VAR_11), VAR_7);
 return VAR_14;

 vdm_nan:
 VAR_14 = FUNC_10(&VAR_11, &VAR_13, &VAR_12, VAR_10);
 goto pack;

 zero:
 VAR_11.exponent = 0;
 VAR_11.significand = 0;
 goto pack;

 divzero:
 VAR_14 = VAR_0;
 infinity:
 VAR_11.exponent = 2047;
 VAR_11.significand = 0;
 goto pack;

 invalid:
 FUNC_11(FUNC_5(&VAR_6), VAR_7);
 return VAR_1;
}
