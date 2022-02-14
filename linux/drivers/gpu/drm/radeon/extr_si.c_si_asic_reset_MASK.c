
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,scalar_t__) ;

int FUNC_4(struct radeon_device *VAR_1, bool VAR_2)
{
 u32 VAR_3;

 if (VAR_2) {
  FUNC_2(VAR_1);
  return 0;
 }

 VAR_3 = FUNC_1(VAR_1);

 if (VAR_3)
  FUNC_0(VAR_1, 1);


 FUNC_3(VAR_1, VAR_3);

 VAR_3 = FUNC_1(VAR_1);


 if (VAR_3 && VAR_0)
  FUNC_2(VAR_1);

 VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3)
  FUNC_0(VAR_1, 0);

 return 0;
}
