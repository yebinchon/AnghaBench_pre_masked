
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int) ;

int FUNC_4(struct radeon_device *VAR_0, bool VAR_1)
{
 u32 VAR_2;

 if (VAR_1) {
  FUNC_2(VAR_0);
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  FUNC_3(VAR_0, 1);

 FUNC_1(VAR_0, VAR_2);

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  FUNC_2(VAR_0);

 FUNC_3(VAR_0, 0);

 return 0;
}
