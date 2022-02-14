
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_data {int regmap; int dev; int refclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct tc_data *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10 = VAR_6 | VAR_1;

 VAR_9 = FUNC_0(VAR_8->refclk);
 switch (VAR_9) {
 case 38400000:
  VAR_10 |= VAR_5;
  break;
 case 26000000:
  VAR_10 |= VAR_4;
  break;
 case 19200000:
  VAR_10 |= VAR_3;
  break;
 case 13000000:
  VAR_10 |= VAR_2;
  break;
 default:
  FUNC_1(VAR_8->dev, "Invalid refclk rate: %lu Hz\n", VAR_9);
  return -VAR_0;
 }

 return FUNC_2(VAR_8->regmap, VAR_7, VAR_10);
}
