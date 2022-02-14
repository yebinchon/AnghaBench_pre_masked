
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;

void FUNC_5(struct radeon_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  FUNC_0("Failed to load MC firmware!\n");
 FUNC_1(VAR_0);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
}
