
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_madc_data {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct twl4030_madc_data *VAR_4, int VAR_5)
{
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3,
         &VAR_6, VAR_0);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "unable to read madc ctrl1 reg 0x%X\n",
   VAR_0);
  return VAR_7;
 }
 if (VAR_5)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_0);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "unable to write madc ctrl1 reg 0x%X\n",
   VAR_0);
  return VAR_7;
 }

 return 0;
}
