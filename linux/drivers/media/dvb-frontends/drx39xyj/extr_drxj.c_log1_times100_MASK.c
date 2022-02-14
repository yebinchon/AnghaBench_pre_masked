
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 static const u8 VAR_1 = 15;
 static const u8 VAR_2 = 5;





 static const u32 VAR_3[] = {
  0,
  290941,
  573196,
  847269,
  1113620,
  1372674,
  1624818,
  1870412,
  2109788,
  2343253,
  2571091,
  2793569,
  3010931,
  3223408,
  3431216,
  3634553,
  3833610,
  4028562,
  4219576,
  4406807,
  4590402,
  4770499,
  4947231,
  5120719,
  5291081,
  5458428,
  5622864,
  5784489,
  5943398,
  6099680,
  6253421,
  6404702,
  6553600,
 };

 u8 VAR_4 = 0;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;

 if (VAR_0 == 0)
  return 0;



 if ((VAR_0 & (((u32) (-1)) << (VAR_1 + 1))) == 0) {
  for (VAR_7 = VAR_1; VAR_7 > 0; VAR_7--) {
   if (VAR_0 & (((u32) 1) << VAR_1))
    break;
   VAR_0 <<= 1;
  }
 } else {
  for (VAR_7 = VAR_1; VAR_7 < 31; VAR_7++) {
   if ((VAR_0 & (((u32) (-1)) << (VAR_1 + 1))) == 0)
    break;
   VAR_0 >>= 1;
  }
 }





 VAR_5 = VAR_7 * ((((u32) 1) << VAR_1) * 200);


 VAR_0 &= ((((u32) 1) << VAR_1) - 1);

 VAR_4 = (u8) (VAR_0 >> (VAR_1 - VAR_2));

 VAR_6 = VAR_0 & ((((u32) 1) << (VAR_1 - VAR_2)) - 1);

 VAR_5 += VAR_3[VAR_4] +
     ((VAR_6 * (VAR_3[VAR_4 + 1] - VAR_3[VAR_4])) >> (VAR_1 - VAR_2));

 VAR_5 /= 108853;
 VAR_8 = (VAR_5 >> 1);

 if (VAR_5 & ((u32)1))
  VAR_8++;

 return VAR_8;

}
