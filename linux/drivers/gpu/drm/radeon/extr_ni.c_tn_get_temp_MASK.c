
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

int FUNC_1(struct radeon_device *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0) & 0x7ff;
 int VAR_3 = (VAR_2 / 8) - 49;

 return VAR_3 * 1000;
}
