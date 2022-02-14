
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
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct twl4030_madc_data *VAR_4,
           int VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;
 u8 VAR_9;

 VAR_7 = FUNC_1(VAR_3,
         &VAR_9, VAR_0);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "unable to read BCICTL1 reg 0x%X",
   VAR_0);
  return VAR_7;
 }

 VAR_8 = VAR_5 ? VAR_1 : VAR_2;
 if (VAR_6)
  VAR_9 |= VAR_8;
 else
  VAR_9 &= ~VAR_8;

 VAR_7 = FUNC_2(VAR_3,
          VAR_9, VAR_0);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "unable to write BCICTL1 reg 0x%X\n",
   VAR_0);
  return VAR_7;
 }

 return 0;
}
