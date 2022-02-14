
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_1)
{
 u32 VAR_2;


 VAR_2 = FUNC_0(VAR_0);
 if ((VAR_2 & 0xF0000000) == 0xB0000000)
  return 1;
 return 0;
}
