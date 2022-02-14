
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vfp_double {int exponent; scalar_t__ sign; int significand; } ;
typedef int s32 ;


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
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,struct vfp_double*) ;
 int FUNC_2 (struct vfp_double*) ;
 int FUNC_3 (struct vfp_double*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static u32 FUNC_6(int VAR_10, int VAR_11, int VAR_12, u32 VAR_13)
{
 struct vfp_double VAR_14;
 u32 VAR_15, VAR_16 = 0;
 int VAR_17 = VAR_13 & VAR_3;
 int VAR_18;

 FUNC_3(&VAR_14, FUNC_4(VAR_12));
 FUNC_1("VDM", &VAR_14);




 VAR_18 = FUNC_2(&VAR_14);
 if (VAR_18 & VAR_8)
  VAR_16 |= VAR_0;

 if (VAR_18 & VAR_9) {
  VAR_15 = 0;
  VAR_16 |= VAR_1;
 } else if (VAR_14.exponent >= 1023 + 32) {
  VAR_15 = 0x7fffffff;
  if (VAR_14.sign)
   VAR_15 = ~VAR_15;
  VAR_16 |= VAR_1;
 } else if (VAR_14.exponent >= 1023 - 1) {
  int VAR_19 = 1023 + 63 - VAR_14.exponent;
  u64 VAR_20, VAR_21 = 0;

  VAR_15 = (VAR_14.significand << 1) >> VAR_19;
  VAR_20 = VAR_14.significand << (65 - VAR_19);

  if (VAR_17 == VAR_5) {
   VAR_21 = 0x8000000000000000ULL;
   if ((VAR_15 & 1) == 0)
    VAR_21 -= 1;
  } else if (VAR_17 == VAR_7) {
   VAR_21 = 0;
  } else if ((VAR_17 == VAR_6) ^ (VAR_14.sign != 0)) {
   VAR_21 = ~0ULL;
  }

  if ((VAR_20 + VAR_21) < VAR_20 && VAR_15 < 0xffffffff)
   VAR_15 += 1;
  if (VAR_15 > 0x7fffffff + (VAR_14.sign != 0)) {
   VAR_15 = 0x7fffffff + (VAR_14.sign != 0);
   VAR_16 |= VAR_1;
  } else if (VAR_20)
   VAR_16 |= VAR_2;

  if (VAR_14.sign)
   VAR_15 = -VAR_15;
 } else {
  VAR_15 = 0;
  if (VAR_14.exponent | VAR_14.significand) {
   VAR_16 |= VAR_2;
   if (VAR_17 == VAR_6 && VAR_14.sign == 0)
    VAR_15 = 1;
   else if (VAR_17 == VAR_4 && VAR_14.sign)
    VAR_15 = -1;
  }
 }

 FUNC_0("VFP: ftosi: d(s%d)=%08x exceptions=%08x\n", VAR_10, VAR_15, VAR_16);

 FUNC_5((s32)VAR_15, VAR_10);

 return VAR_16;
}
