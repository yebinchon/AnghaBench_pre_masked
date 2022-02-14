
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmi160_data {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bmi160_data*,int ,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct bmi160_data *VAR_9, bool VAR_10)
{
 int VAR_11;
 unsigned int VAR_12;
 struct device *VAR_13 = FUNC_2(VAR_9->regmap);

 VAR_11 = FUNC_4(VAR_9->regmap, VAR_5, VAR_2);
 if (VAR_11)
  return VAR_11;

 FUNC_5(VAR_7, VAR_7 + 1);





 if (VAR_10) {
  VAR_11 = FUNC_3(VAR_9->regmap, VAR_6, &VAR_12);
  if (VAR_11)
   return VAR_11;
 }

 VAR_11 = FUNC_3(VAR_9->regmap, VAR_4, &VAR_12);
 if (VAR_11) {
  FUNC_1(VAR_13, "Error reading chip id\n");
  return VAR_11;
 }
 if (VAR_12 != VAR_1) {
  FUNC_1(VAR_13, "Wrong chip id, got %x expected %x\n",
   VAR_12, VAR_1);
  return -VAR_8;
 }

 VAR_11 = FUNC_0(VAR_9, VAR_0, 1);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_3, 1);
 if (VAR_11)
  return VAR_11;

 return 0;
}
