
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
 int VAR_3 ;

bool FUNC_1(struct radeon_device *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = FUNC_0(VAR_2);

 if (!(VAR_5 & VAR_1) && !(VAR_6 & VAR_0))
  return 1;

 return 0;
}
