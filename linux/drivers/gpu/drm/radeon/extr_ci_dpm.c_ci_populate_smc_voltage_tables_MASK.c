
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
typedef int SMU7_Discrete_DpmTable ;


 int FUNC_0 (struct radeon_device*,int *) ;
 int FUNC_1 (struct radeon_device*,int *) ;
 int FUNC_2 (struct radeon_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_0,
       SMU7_Discrete_DpmTable *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
