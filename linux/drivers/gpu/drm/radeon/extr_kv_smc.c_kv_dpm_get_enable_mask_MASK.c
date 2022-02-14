
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct radeon_device*,int ) ;

int FUNC_2(struct radeon_device *VAR_2, u32 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);

 if (VAR_4 == 0)
  *VAR_3 = FUNC_0(VAR_1);

 return VAR_4;
}
