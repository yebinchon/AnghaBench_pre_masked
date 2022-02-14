
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_3,
        u32 VAR_4, const u8 *VAR_5,
        u32 VAR_6)
{
 u32 VAR_7, VAR_8;

 if (VAR_6 % 4)
  return -VAR_0;

 if (VAR_4 < VAR_1) {
  VAR_7 = VAR_1 - VAR_4;

  if (VAR_7 > VAR_6)
   return 0;

  VAR_6 -= VAR_7;
  VAR_5 += VAR_7;
  VAR_4 = VAR_1;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8 += 4) {

  VAR_7 = (VAR_5[VAR_8] << 24) | (VAR_5[VAR_8 + 1] << 16) | (VAR_5[VAR_8 + 2] << 8) | VAR_5[VAR_8 + 3];

  FUNC_0(VAR_2 + VAR_8, VAR_7);
 }

 return 0;
}
