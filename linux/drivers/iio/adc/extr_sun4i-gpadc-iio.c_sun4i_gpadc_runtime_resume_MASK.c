
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_gpadc_iio {int regmap; TYPE_1__* data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int tp_mode_en; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device*) ;
 struct sun4i_gpadc_iio* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_6)
{
 struct sun4i_gpadc_iio *VAR_7 = FUNC_6(FUNC_5(VAR_6));


 FUNC_7(VAR_7->regmap, VAR_0,
       FUNC_0(2) |
       FUNC_1(7) |
       FUNC_2(63));
 FUNC_7(VAR_7->regmap, VAR_1, VAR_7->data->tp_mode_en);
 FUNC_7(VAR_7->regmap, VAR_2,
       VAR_3 |
       FUNC_3(1));

 FUNC_7(VAR_7->regmap, VAR_4,
       VAR_5 |
       FUNC_4(800));

 return 0;
}
