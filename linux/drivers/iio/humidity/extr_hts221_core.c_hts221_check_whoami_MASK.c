
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts221_hw {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct hts221_hw *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3->regmap, VAR_1, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev, "failed to read whoami register\n");
  return VAR_4;
 }

 if (VAR_5 != VAR_2) {
  FUNC_0(VAR_3->dev, "wrong whoami {%02x vs %02x}\n",
   VAR_5, VAR_2);
  return -VAR_0;
 }

 return 0;
}
