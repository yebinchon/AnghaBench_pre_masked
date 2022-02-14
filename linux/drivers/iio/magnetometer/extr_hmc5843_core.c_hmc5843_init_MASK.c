
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct hmc5843_data {int dev; int regmap; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hmc5843_data*,int ) ;
 int FUNC_3 (struct hmc5843_data*,int ) ;
 int FUNC_4 (struct hmc5843_data*,int ) ;
 int FUNC_5 (struct hmc5843_data*,int ) ;
 int FUNC_6 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct hmc5843_data *VAR_6)
{
 int VAR_7;
 u8 VAR_8[3];

 VAR_7 = FUNC_6(VAR_6->regmap, VAR_1,
          VAR_8, FUNC_0(VAR_8));
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_8[0] != 'H' || VAR_8[1] != '4' || VAR_8[2] != '3') {
  FUNC_1(VAR_6->dev, "no HMC5843/5883/5883L/5983 sensor\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_5(VAR_6, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_4(VAR_6, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 return FUNC_3(VAR_6, VAR_3);
}
