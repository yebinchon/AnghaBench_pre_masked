
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct max77693_led_device {scalar_t__ iout_joint; int iout_flash_max; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct max77693_led_device*,int,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct max77693_led_device *VAR_6,
     int VAR_7,
     u32 VAR_8)
{
 struct regmap *VAR_9 = VAR_6->regmap;
 u8 VAR_10, VAR_11;
 u32 VAR_12[2];
 int VAR_13 = -VAR_0;

 FUNC_0(VAR_6, VAR_7, VAR_1, VAR_8,
     VAR_6->iout_flash_max, VAR_12);

 if (VAR_7 == VAR_2 || VAR_6->iout_joint) {
  VAR_10 = FUNC_1(VAR_12[VAR_2]);
  VAR_13 = FUNC_2(VAR_9, VAR_4,
       VAR_10);
  if (VAR_13 < 0)
   return VAR_13;
 }
 if (VAR_7 == VAR_3 || VAR_6->iout_joint) {
  VAR_11 = FUNC_1(VAR_12[VAR_3]);
  VAR_13 = FUNC_2(VAR_9, VAR_5,
       VAR_11);
 }

 return VAR_13;
}
