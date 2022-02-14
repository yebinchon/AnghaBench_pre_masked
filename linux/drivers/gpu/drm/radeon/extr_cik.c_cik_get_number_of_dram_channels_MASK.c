
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

__attribute__((used)) static u32 FUNC_1(struct radeon_device *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0);

 switch ((VAR_4 & VAR_1) >> VAR_2) {
 case 0:
 default:
  return 1;
 case 1:
  return 2;
 case 2:
  return 4;
 case 3:
  return 8;
 case 4:
  return 3;
 case 5:
  return 6;
 case 6:
  return 10;
 case 7:
  return 12;
 case 8:
  return 16;
 }
}
