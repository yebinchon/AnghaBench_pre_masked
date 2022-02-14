
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fxas21002c_data *VAR_0)
{
 struct device *VAR_1 = FUNC_2(VAR_0->regmap);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  FUNC_1(VAR_1);

 return VAR_2;
}
