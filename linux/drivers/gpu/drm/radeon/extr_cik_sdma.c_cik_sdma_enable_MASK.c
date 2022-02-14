
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;

void FUNC_5(struct radeon_device *VAR_4, bool VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5 == 0) {
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  if (VAR_8 == 0)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_2;
  VAR_6 = FUNC_0(VAR_0 + VAR_7);
  if (VAR_5)
   VAR_6 &= ~VAR_3;
  else
   VAR_6 |= VAR_3;
  FUNC_1(VAR_0 + VAR_7, VAR_6);
 }

 FUNC_2(VAR_4, VAR_5);
}
