
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_3)
{
 u32 VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_2) & VAR_0;
 VAR_4 >>= VAR_1;

 switch (VAR_4) {
 case 133:
  return 1;
 case 130:
  return 2;
 case 129:
  return 4;
 case 128:
  return 8;
 case 132:

  return 12;
 case 134:
 case 131:
 default:
  return 16;
 }
}
