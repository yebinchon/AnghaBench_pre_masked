
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptn5150_info {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct ptn5150_info *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_8->regmap, VAR_1, &VAR_9);
 if (VAR_12) {
  FUNC_0(VAR_8->dev, "failed to read DEVICE_ID %d\n", VAR_12);
  return -VAR_0;
 }

 VAR_10 = ((VAR_9 & VAR_2) >>
    VAR_3);
 VAR_11 = ((VAR_9 & VAR_4) >>
    VAR_5);

 FUNC_1(VAR_8->dev, "Device type: version: 0x%x, vendor: 0x%x\n",
       VAR_11, VAR_10);


 VAR_12 = FUNC_2(VAR_8->regmap, VAR_7, &VAR_9);
 if (VAR_12) {
  FUNC_0(VAR_8->dev,
   "failed to read PTN5150_REG_INT_STATUS %d\n",
   VAR_12);
  return -VAR_0;
 }

 VAR_12 = FUNC_2(VAR_8->regmap, VAR_6, &VAR_9);
 if (VAR_12) {
  FUNC_0(VAR_8->dev,
   "failed to read PTN5150_REG_INT_REG_STATUS %d\n", VAR_12);
  return -VAR_0;
 }

 return 0;
}
