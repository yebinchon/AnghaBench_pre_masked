
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct device {int dummy; } ;
struct bmc150_accel_trigger {struct bmc150_accel_data* data; } ;
struct bmc150_accel_data {int mutex; int regmap; struct bmc150_accel_trigger* triggers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 struct bmc150_accel_trigger* FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iio_trigger *VAR_4)
{
 struct bmc150_accel_trigger *VAR_5 = FUNC_1(VAR_4);
 struct bmc150_accel_data *VAR_6 = VAR_5->data;
 struct device *VAR_7 = FUNC_4(VAR_6->regmap);
 int VAR_8;


 if (VAR_5 == &VAR_5->data->triggers[VAR_3])
  return 0;

 FUNC_2(&VAR_6->mutex);

 VAR_8 = FUNC_5(VAR_6->regmap, VAR_2,
      VAR_0 |
      VAR_1);
 FUNC_3(&VAR_6->mutex);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7, "Error writing reg_int_rst_latch\n");
  return VAR_8;
 }

 return 0;
}
