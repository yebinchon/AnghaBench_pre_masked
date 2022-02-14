
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_1(struct radeon_device *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = FUNC_0(VAR_1);

 if (!(VAR_4 & VAR_0) && (0x20100 <= VAR_5))
  return 1;

 return 0;
}
