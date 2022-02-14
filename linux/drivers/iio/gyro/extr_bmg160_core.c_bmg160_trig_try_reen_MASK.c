
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct bmg160_data {int regmap; scalar_t__ dready_trigger_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct bmg160_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_trigger *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_2(VAR_3);
 struct bmg160_data *VAR_5 = FUNC_1(VAR_4);
 struct device *VAR_6 = FUNC_3(VAR_5->regmap);
 int VAR_7;


 if (VAR_5->dready_trigger_on)
  return 0;


 VAR_7 = FUNC_4(VAR_5->regmap, VAR_2,
      VAR_0 |
      VAR_1);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6, "Error writing reg_rst_latch\n");
  return VAR_7;
 }

 return 0;
}
