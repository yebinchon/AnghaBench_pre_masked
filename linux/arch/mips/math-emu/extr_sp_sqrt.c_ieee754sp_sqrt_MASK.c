
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ieee754sp {int bits; } ;
struct TYPE_2__ {int rm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int ) ;
 union ieee754sp FUNC_2 () ;
 union ieee754sp FUNC_3 (union ieee754sp) ;
 int VAR_6 ;
 int VAR_7 ;

union ieee754sp FUNC_4(union ieee754sp VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;
 VAR_0;



 VAR_1;
 FUNC_0();
 VAR_2;


 switch (VAR_6) {
 case 129:
  return FUNC_3(VAR_8);

 case 130:

  return VAR_8;

 case 128:

  return VAR_8;

 case 132:
  if (VAR_7) {

   FUNC_1(VAR_4);
   return FUNC_2();
  }

  return VAR_8;

 case 133:
 case 131:
  if (VAR_7) {

   FUNC_1(VAR_4);
   return FUNC_2();
  }
  break;
 }

 VAR_9 = VAR_8.bits;


 VAR_12 = (VAR_9 >> 23);
 if (VAR_12 == 0) {
  for (VAR_14 = 0; (VAR_9 & 0x00800000) == 0; VAR_14++)
   VAR_9 <<= 1;
  VAR_12 -= VAR_14 - 1;
 }
 VAR_12 -= 127;
 VAR_9 = (VAR_9 & 0x007fffff) | 0x00800000;
 if (VAR_12 & 1)
  VAR_9 += VAR_9;
 VAR_12 >>= 1;


 VAR_9 += VAR_9;
 VAR_10 = 0;
 VAR_11 = 0;
 VAR_15 = 0x01000000;

 while (VAR_15 != 0) {
  VAR_13 = VAR_10 + VAR_15;
  if (VAR_13 <= VAR_9) {
   VAR_10 = VAR_13 + VAR_15;
   VAR_9 -= VAR_13;
   VAR_11 += VAR_15;
  }
  VAR_9 += VAR_9;
  VAR_15 >>= 1;
 }

 if (VAR_9 != 0) {
  FUNC_1(VAR_3);
  switch (VAR_5.rm) {
  case 134:
   VAR_11 += 2;
   break;
  case 135:
   VAR_11 += (VAR_11 & 1);
   break;
  }
 }
 VAR_9 = (VAR_11 >> 1) + 0x3f000000;
 VAR_9 += (VAR_12 << 23);
 VAR_8.bits = VAR_9;
 return VAR_8;
}
