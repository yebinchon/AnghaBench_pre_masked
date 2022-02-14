
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ieee754dp {int bits; int bexp; } ;
typedef int u64 ;
struct _ieee754_csr {int mx; int sx; int rm; int cx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 union ieee754dp FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 () ;
 struct _ieee754_csr VAR_9 ;
 int FUNC_2 (int ) ;
 union ieee754dp FUNC_3 (union ieee754dp,union ieee754dp) ;
 union ieee754dp FUNC_4 (union ieee754dp,union ieee754dp) ;
 union ieee754dp FUNC_5 () ;
 union ieee754dp FUNC_6 (union ieee754dp,union ieee754dp) ;
 union ieee754dp FUNC_7 (union ieee754dp) ;
 union ieee754dp FUNC_8 (union ieee754dp,union ieee754dp) ;
 unsigned int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

union ieee754dp FUNC_9(union ieee754dp VAR_15)
{
 struct _ieee754_csr VAR_16;
 union ieee754dp VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21;
 VAR_0;

 VAR_4;
 FUNC_1();
 VAR_5;


 switch (VAR_11) {
 case 129:
  return FUNC_7(VAR_15);

 case 130:

  return VAR_15;

 case 128:

  return VAR_15;

 case 132:
  if (VAR_14) {

   FUNC_2(VAR_8);
   return FUNC_5();
  }

  return VAR_15;

 case 133:
  VAR_1;


 case 131:
  if (VAR_14) {

   FUNC_2(VAR_8);
   return FUNC_5();
  }
  break;
 }


 VAR_16 = VAR_9;
 VAR_9.mx &= ~VAR_7;
 VAR_9.sx &= ~VAR_7;
 VAR_9.rm = 135;


 VAR_20 = 0;
 if (VAR_12 > 512) {
  VAR_12 -= 512;
  VAR_20 += 256;
 } else if (VAR_12 < -512) {
  VAR_12 += 512;
  VAR_20 -= 256;
 }

 VAR_15 = FUNC_0(0, VAR_12 + VAR_2, VAR_13 & ~VAR_3);
 VAR_17 = VAR_15;


 VAR_21 = VAR_17.bits >> 32;
 VAR_21 = (VAR_21 >> 1) + 0x1ff80000;
 VAR_21 = VAR_21 - VAR_10[(VAR_21 >> 15) & 31];
 VAR_17.bits = ((u64) VAR_21 << 32) | (VAR_17.bits & 0xffffffff);



 VAR_19 = FUNC_4(VAR_15, VAR_17);
 VAR_17 = FUNC_3(VAR_17, VAR_19);
 VAR_17.bits -= 0x0010000600000000LL;
 VAR_17.bits &= 0xffffffff00000000LL;



 VAR_19 = FUNC_6(VAR_17, VAR_17);
 VAR_18 = VAR_19;
 VAR_19.bexp += 0x001;
 VAR_19 = FUNC_3(VAR_19, VAR_18);
 VAR_18 = FUNC_6(FUNC_8(VAR_15, VAR_18), VAR_17);


 VAR_19 = FUNC_4(VAR_18, FUNC_3(VAR_19, VAR_15));
 VAR_19.bexp += 0x001;
 VAR_17 = FUNC_3(VAR_17, VAR_19);




 VAR_9.rm = VAR_6;
 VAR_9.sx &= ~VAR_7;


 VAR_19 = FUNC_4(VAR_15, VAR_17);

 if (VAR_9.sx & VAR_7 || VAR_19.bits != VAR_17.bits) {

  if (!(VAR_9.sx & VAR_7))

   VAR_19.bits -= 1;


  VAR_16.cx |= VAR_7;
  VAR_16.sx |= VAR_7;

  switch (VAR_16.rm) {
  case 134:
   VAR_17.bits += 1;

  case 135:
   VAR_19.bits += 1;
   break;
  }


  VAR_17 = FUNC_3(VAR_17, VAR_19);


  VAR_20 -= 1;
 }


 VAR_17.bexp += VAR_20;


 VAR_9 = VAR_16;

 return VAR_17;
}
