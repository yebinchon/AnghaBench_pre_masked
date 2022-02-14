
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vfp_double {scalar_t__ sign; int exponent; int significand; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*,int,int,int,int) ;
 int FUNC_1 (int*,int*,int,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int*,int,int ,int,int) ;
 struct vfp_double VAR_6 ;
 int FUNC_4 (char*,struct vfp_double*) ;
 int FUNC_5 (struct vfp_double*) ;
 int FUNC_6 (int,struct vfp_double*,int,int ,char*) ;
 int FUNC_7 (struct vfp_double*) ;
 int FUNC_8 (struct vfp_double*) ;
 int FUNC_9 (struct vfp_double*,int ) ;
 scalar_t__ FUNC_10 (int,int ,int) ;
 scalar_t__ FUNC_11 (int,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct vfp_double*,struct vfp_double*,int *,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static u32 FUNC_16(int VAR_7, int VAR_8, int VAR_9, u32 VAR_10)
{
 struct vfp_double VAR_11, VAR_12;
 int VAR_13, VAR_14;

 FUNC_9(&VAR_11, FUNC_12(VAR_9));
 VAR_14 = FUNC_8(&VAR_11);
 if (VAR_14 & (VAR_4|VAR_3)) {
  struct vfp_double *VAR_15 = &VAR_12;

  if (VAR_14 & VAR_4)
   VAR_13 = FUNC_13(VAR_15, &VAR_11, ((void*)0), VAR_10);
  else if (VAR_11.sign == 0) {
 sqrt_copy:
   VAR_15 = &VAR_11;
   VAR_13 = 0;
  } else {
 sqrt_invalid:
   VAR_15 = &VAR_6;
   VAR_13 = VAR_0;
  }
  FUNC_14(FUNC_7(VAR_15), VAR_7);
  return VAR_13;
 }




 if (VAR_14 & VAR_5)
  goto sqrt_copy;




 if (VAR_14 & VAR_1)
  FUNC_5(&VAR_11);




 if (VAR_11.sign)
  goto sqrt_invalid;

 FUNC_4("sqrt", &VAR_11);




 VAR_12.sign = 0;
 VAR_12.exponent = ((VAR_11.exponent - 1023) >> 1) + 1023;
 VAR_12.significand = (u64)FUNC_11(VAR_11.exponent, VAR_11.significand >> 32) << 31;

 FUNC_4("sqrt estimate1", &VAR_12);

 VAR_11.significand >>= 1 + (VAR_11.exponent & 1);
 VAR_12.significand += 2 + FUNC_10(VAR_11.significand, 0, VAR_12.significand);

 FUNC_4("sqrt estimate2", &VAR_12);




 if ((VAR_12.significand & VAR_2) <= 5) {
  if (VAR_12.significand < 2) {
   VAR_12.significand = ~0ULL;
  } else {
   u64 VAR_16, VAR_17, VAR_18, VAR_19;
   VAR_11.significand <<= 2;
   FUNC_1(&VAR_16, &VAR_17, VAR_12.significand, VAR_12.significand);
   FUNC_3(&VAR_18, &VAR_19, VAR_11.significand, 0, VAR_16, VAR_17);
   while ((s64)VAR_18 < 0) {
    VAR_12.significand -= 1;
    FUNC_2(&VAR_16, &VAR_17, VAR_12.significand);
    VAR_17 |= 1;
    FUNC_0(&VAR_18, &VAR_19, VAR_18, VAR_19, VAR_16, VAR_17);
   }
   VAR_12.significand |= (VAR_18 | VAR_19) != 0;
  }
 }
 VAR_12.significand = FUNC_15(VAR_12.significand, 1);

 return FUNC_6(VAR_7, &VAR_12, VAR_10, 0, "fsqrt");
}
