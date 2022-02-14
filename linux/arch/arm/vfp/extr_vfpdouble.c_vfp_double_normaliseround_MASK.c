
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vfp_double {int exponent; int significand; scalar_t__ sign; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,struct vfp_double*) ;
 int FUNC_3 (struct vfp_double*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;

u32 FUNC_6(int VAR_8, struct vfp_double *VAR_9, u32 VAR_10, u32 VAR_11, const char *VAR_12)
{
 u64 VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 u32 VAR_18;

 FUNC_2("pack: in", VAR_9);




 if (VAR_9->exponent == 2047 && (VAR_9->significand == 0 || VAR_11))
  goto pack;




 if (VAR_9->significand == 0) {
  VAR_9->exponent = 0;
  goto pack;
 }

 VAR_15 = VAR_9->exponent;
 VAR_13 = VAR_9->significand;

 VAR_16 = 32 - FUNC_0(VAR_13 >> 32);
 if (VAR_16 == 32)
  VAR_16 = 64 - FUNC_0(VAR_13);
 if (VAR_16) {
  VAR_15 -= VAR_16;
  VAR_13 <<= VAR_16;
 }
 VAR_17 = VAR_15 < 0;
 if (VAR_17) {
  VAR_13 = FUNC_5(VAR_13, -VAR_15);
  VAR_15 = 0;





  if (!(VAR_13 & ((1ULL << (VAR_7 + 1)) - 1)))
   VAR_17 = 0;
 }




 VAR_14 = 0;
 VAR_18 = VAR_10 & VAR_2;

 if (VAR_18 == VAR_3) {
  VAR_14 = 1ULL << VAR_7;
  if ((VAR_13 & (1ULL << (VAR_7 + 1))) == 0)
   VAR_14 -= 1;
 } else if (VAR_18 == VAR_5) {
  VAR_14 = 0;
 } else if ((VAR_18 == VAR_4) ^ (VAR_9->sign != 0))
  VAR_14 = (1ULL << (VAR_7 + 1)) - 1;

 FUNC_1("VFP: rounding increment = 0x%08llx\n", VAR_14);




 if ((VAR_13 + VAR_14) < VAR_13) {
  VAR_15 += 1;
  VAR_13 = (VAR_13 >> 1) | (VAR_13 & 1);
  VAR_14 >>= 1;





 }





 if (VAR_13 & ((1 << (VAR_7 + 1)) - 1))
  VAR_11 |= VAR_0;




 VAR_13 += VAR_14;




 if (VAR_15 >= 2046) {
  VAR_11 |= VAR_1 | VAR_0;
  if (VAR_14 == 0) {
   VAR_9->exponent = 2045;
   VAR_9->significand = 0x7fffffffffffffffULL;
  } else {
   VAR_9->exponent = 2047;
   VAR_9->significand = 0;
  }
 } else {
  if (VAR_13 >> (VAR_7 + 1) == 0)
   VAR_15 = 0;
  if (VAR_15 || VAR_13 > 0x8000000000000000ULL)
   VAR_17 = 0;
  if (VAR_17)
   VAR_11 |= VAR_6;
  VAR_9->exponent = VAR_15;
  VAR_9->significand = VAR_13 >> 1;
 }

 pack:
 FUNC_2("pack: final", VAR_9);
 {
  s64 VAR_19 = FUNC_3(VAR_9);
  FUNC_1("VFP: %s: d(d%d)=%016llx exceptions=%08x\n", VAR_12,
    VAR_8, VAR_19, VAR_11);
  FUNC_4(VAR_19, VAR_8);
 }
 return VAR_11;
}
