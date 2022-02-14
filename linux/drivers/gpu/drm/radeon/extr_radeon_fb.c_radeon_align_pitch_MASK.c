
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;

int FUNC_1(struct radeon_device *VAR_0, int VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4 = VAR_1;
 int VAR_5 = (FUNC_0(VAR_0)) || VAR_3;
 int VAR_6 = 0;

 switch (VAR_2) {
 case 1:
  VAR_6 = VAR_5 ? 255 : 127;
  break;
 case 2:
  VAR_6 = VAR_5 ? 127 : 31;
  break;
 case 3:
 case 4:
  VAR_6 = VAR_5 ? 63 : 15;
  break;
 }

 VAR_4 += VAR_6;
 VAR_4 &= ~VAR_6;
 return VAR_4 * VAR_2;
}
