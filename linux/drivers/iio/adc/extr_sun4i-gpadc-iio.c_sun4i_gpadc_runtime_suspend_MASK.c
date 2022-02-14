
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_gpadc_iio {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct sun4i_gpadc_iio* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 struct sun4i_gpadc_iio *VAR_3 = FUNC_1(FUNC_0(VAR_2));


 FUNC_2(VAR_3->regmap, VAR_0, 0);

 FUNC_2(VAR_3->regmap, VAR_1, 0);

 return 0;
}
