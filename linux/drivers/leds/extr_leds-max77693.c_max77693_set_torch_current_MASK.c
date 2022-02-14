
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct max77693_led_device {int torch_iout_reg; scalar_t__ iout_joint; int iout_torch_max; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct max77693_led_device*,int,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct max77693_led_device *VAR_6,
    int VAR_7, u32 VAR_8)
{
 struct regmap *VAR_9 = VAR_6->regmap;
 u8 VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12[2];

 FUNC_1(VAR_6, VAR_7, VAR_3, VAR_8,
     VAR_6->iout_torch_max, VAR_12);

 if (VAR_7 == VAR_0 || VAR_6->iout_joint) {
  VAR_10 = FUNC_2(VAR_12[VAR_0]);
  VAR_6->torch_iout_reg &= FUNC_0(VAR_5);
 }
 if (VAR_7 == VAR_1 || VAR_6->iout_joint) {
  VAR_11 = FUNC_2(VAR_12[VAR_1]);
  VAR_6->torch_iout_reg &= FUNC_0(VAR_4);
 }

 VAR_6->torch_iout_reg |= ((VAR_10 << VAR_4) |
    (VAR_11 << VAR_5));

 return FUNC_3(VAR_9, VAR_2,
      VAR_6->torch_iout_reg);
}
