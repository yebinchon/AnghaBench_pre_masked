
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29018_chip {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct isl29018_chip *VAR_5, int VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 struct device *VAR_10 = FUNC_3(VAR_5->regmap);


 VAR_7 = FUNC_5(VAR_5->regmap, VAR_2,
         VAR_6 << VAR_0);
 if (VAR_7) {
  FUNC_0(VAR_10,
   "Error in setting operating mode err %d\n", VAR_7);
  return VAR_7;
 }
 FUNC_2(VAR_1);
 VAR_7 = FUNC_4(VAR_5->regmap, VAR_3, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_0(VAR_10,
   "Error in reading LSB DATA with err %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_5->regmap, VAR_4, &VAR_9);
 if (VAR_7 < 0) {
  FUNC_0(VAR_10,
   "Error in reading MSB DATA with error %d\n", VAR_7);
  return VAR_7;
 }
 FUNC_1(VAR_10, "MSB 0x%x and LSB 0x%x\n", VAR_9, VAR_8);

 return (VAR_9 << 8) | VAR_8;
}
