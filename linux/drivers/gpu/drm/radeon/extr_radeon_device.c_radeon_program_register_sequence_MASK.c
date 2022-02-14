
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct radeon_device *VAR_0,
          const u32 *VAR_1,
          const u32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 if (VAR_2 % 3)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 +=3) {
  VAR_4 = VAR_1[VAR_7 + 0];
  VAR_5 = VAR_1[VAR_7 + 1];
  VAR_6 = VAR_1[VAR_7 + 2];

  if (VAR_5 == 0xffffffff) {
   VAR_3 = VAR_6;
  } else {
   VAR_3 = FUNC_0(VAR_4);
   VAR_3 &= ~VAR_5;
   VAR_3 |= VAR_6;
  }
  FUNC_1(VAR_4, VAR_3);
 }
}
