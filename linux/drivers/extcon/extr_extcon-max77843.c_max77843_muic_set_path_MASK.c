
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct max77843_muic_info {int dev; struct max77693_dev* max77843; } ;
struct max77693_dev {int regmap_muic; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct max77843_muic_info *VAR_7,
  u8 VAR_8, bool VAR_9, bool VAR_10)
{
 struct max77693_dev *VAR_11 = VAR_7->max77843;
 int VAR_12 = 0;
 unsigned int VAR_13, VAR_14;

 if (VAR_9)
  VAR_13 = VAR_8;
 else
  VAR_13 = VAR_2;
 if (VAR_10) {

  VAR_13 |= VAR_1;
 }

 VAR_12 = FUNC_2(VAR_11->regmap_muic,
   VAR_5,
   VAR_0 |
    VAR_1,
   VAR_13);
 if (VAR_12 < 0) {
  FUNC_1(VAR_7->dev, "Cannot switch MUIC port\n");
  return VAR_12;
 }

 if (VAR_9)
  VAR_14 = VAR_3;
 else
  VAR_14 = VAR_4;

 VAR_12 = FUNC_2(VAR_11->regmap_muic,
   VAR_6,
   VAR_4 |
   VAR_3, VAR_14);
 if (VAR_12 < 0) {
  FUNC_1(VAR_7->dev, "Cannot update lowpower mode\n");
  return VAR_12;
 }

 FUNC_0(VAR_7->dev,
  "CONTROL1 : 0x%02x, CONTROL2 : 0x%02x, state : %s\n",
  VAR_13, VAR_14, VAR_9 ? "attached" : "detached");

 return 0;
}
