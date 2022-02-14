
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int,int) ;

int FUNC_3(struct radeon_device *VAR_2,
    u32 VAR_3,
    const u8 *VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if ((VAR_3 + VAR_5) > VAR_6)
  return -VAR_0;

 VAR_10 = VAR_3;
 VAR_12 = VAR_10 & 3;


 if (VAR_12 != 0) {
  VAR_10 -= VAR_12;

  VAR_7 = FUNC_2(VAR_2, VAR_10, VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_9 = FUNC_0(VAR_1);

  VAR_8 = 0;
  VAR_14 = 0;
  VAR_13 = 4;
  while (VAR_13 > 0) {
   if (VAR_12 > 0) {
    VAR_14 = (VAR_14 << 8) | 0xff;
    VAR_12--;
   } else if (VAR_5 > 0) {
    VAR_8 = (VAR_8 << 8) + *VAR_4++;
    VAR_5--;
    VAR_14 <<= 8;
   } else {
    VAR_8 <<= 8;
    VAR_14 = (VAR_14 << 8) | 0xff;
   }
   VAR_13--;
  }

  VAR_8 |= VAR_9 & VAR_14;

  VAR_7 = FUNC_2(VAR_2, VAR_10, VAR_6);
  if (VAR_7)
   return VAR_7;

  FUNC_1(VAR_1, VAR_8);

  VAR_10 += 4;
 }

 while (VAR_5 >= 4) {

  VAR_8 = (VAR_4[0] << 24) + (VAR_4[1] << 16) + (VAR_4[2] << 8) + VAR_4[3];

  VAR_7 = FUNC_2(VAR_2, VAR_10, VAR_6);
  if (VAR_7)
   return VAR_7;

  FUNC_1(VAR_1, VAR_8);

  VAR_4 += 4;
  VAR_5 -= 4;
  VAR_10 += 4;
 }


 if (VAR_5 > 0) {
  VAR_8 = 0;

  VAR_7 = FUNC_2(VAR_2, VAR_10, VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_9= FUNC_0(VAR_1);

  VAR_11 = 8 * (4 - VAR_5);

  while (VAR_5 > 0) {

   VAR_8 = (VAR_8 << 8) + *VAR_4++;
   VAR_5--;
  }

  VAR_8 <<= VAR_11;

  VAR_8 |= (VAR_9 & ~((~0UL) << VAR_11));

  VAR_7 = FUNC_2(VAR_2, VAR_10, VAR_6);
  if (VAR_7)
   return VAR_7;

  FUNC_1(VAR_1, VAR_8);
 }
 return 0;
}
