
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct radeon_device *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0xFFF;
 u32 VAR_9;

 switch (VAR_4) {
 case 0:
  VAR_6 = VAR_0;
  VAR_7 = 16;
  break;
 case 1:
  VAR_6 = VAR_0;
  VAR_7 = 0;
  break;
 case 2:
  VAR_6 = VAR_1;
  VAR_7 = 16;
  break;
 case 3:
  VAR_6 = VAR_1;
  VAR_7 = 0;
  break;
 case 4:
  VAR_6 = VAR_2;
  VAR_7 = 16;
  break;
 case 7:
  VAR_6 = VAR_2;
  VAR_7 = 0;
  break;
 default:
  break;
 }

 VAR_9 = FUNC_0(VAR_6);
 VAR_9 &= ~(VAR_8 << VAR_7);
 VAR_9 |= (VAR_5 << VAR_7);
 FUNC_1(VAR_6, VAR_9);
}
