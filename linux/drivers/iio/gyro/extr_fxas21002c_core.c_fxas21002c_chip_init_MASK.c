
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {unsigned int chip_id; int * regmap_fields; int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct fxas21002c_data*,int ) ;
 int FUNC_2 (struct fxas21002c_data*,int) ;
 int FUNC_3 (int ,unsigned int*) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct fxas21002c_data *VAR_5)
{
 struct device *VAR_6 = FUNC_4(VAR_5->regmap);
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5->regmap_fields[VAR_4], &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 != VAR_1 &&
     VAR_7 != VAR_2) {
  FUNC_0(VAR_6, "chip id 0x%02x is not supported\n", VAR_7);
  return -VAR_0;
 }

 VAR_5->chip_id = VAR_7;

 VAR_8 = FUNC_1(VAR_5, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_5, 200);
 if (VAR_8 < 0)
  FUNC_0(VAR_6, "failed to set ODR: %d\n", VAR_8);

 return VAR_8;
}
