
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl372_state {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct adxl372_state*,int ) ;
 int FUNC_1 (struct adxl372_state*,int ,int,int,int) ;
 int FUNC_2 (struct adxl372_state*,int) ;
 int FUNC_3 (struct adxl372_state*,int ) ;
 int FUNC_4 (struct adxl372_state*,int) ;
 int FUNC_5 (struct adxl372_state*,int ) ;
 int FUNC_6 (struct adxl372_state*,int ) ;
 int FUNC_7 (int ,char*,unsigned int) ;
 int FUNC_8 (int ,int ,unsigned int*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct adxl372_state *VAR_12)
{
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_8(VAR_12->regmap, VAR_2, &VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_13 != VAR_3) {
  FUNC_7(VAR_12->dev, "Invalid chip id %x\n", VAR_13);
  return -VAR_11;
 }





 VAR_14 = FUNC_9(VAR_12->regmap, VAR_8, VAR_9);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_6(VAR_12, VAR_10);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_1(VAR_12, VAR_0,
          1, 1, 1000);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_1(VAR_12, VAR_5,
          1, 1, 100);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_0(VAR_12, VAR_6);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_12, VAR_7);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_3(VAR_12, VAR_1);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_2(VAR_12, 1);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_4(VAR_12, 10000);
 if (VAR_14 < 0)
  return VAR_14;


 return FUNC_6(VAR_12, VAR_4);
}
