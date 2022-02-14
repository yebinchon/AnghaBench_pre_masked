
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max77693_led_device {scalar_t__ iout_joint; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int*,int,int,int) ;
 scalar_t__ FUNC_1 (struct max77693_led_device*,int) ;

__attribute__((used)) static void FUNC_2(struct max77693_led_device *VAR_2,
     u32 *VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7;

 if (VAR_2->iout_joint) {
  if (VAR_3[VAR_0] > VAR_4) {
   VAR_3[VAR_0] /= 2;
   VAR_3[VAR_1] = VAR_3[VAR_0];
  } else {
   VAR_3[VAR_0] = VAR_4;
   VAR_3[VAR_1] = 0;
   return;
  }
 }

 for (VAR_7 = VAR_0; VAR_7 <= VAR_1; ++VAR_7)
  if (FUNC_1(VAR_2, VAR_7))
   FUNC_0(&VAR_3[VAR_7], VAR_4, VAR_5, VAR_6);
  else
   VAR_3[VAR_7] = 0;
}
