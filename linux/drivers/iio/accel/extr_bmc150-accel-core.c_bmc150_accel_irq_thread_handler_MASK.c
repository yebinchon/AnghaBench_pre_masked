
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct bmc150_accel_data {int mutex; int regmap; scalar_t__ ev_enable_state; scalar_t__ fifo_mode; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iio_dev*,int ,int) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct device*,char*) ;
 struct bmc150_accel_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct iio_dev *VAR_8 = VAR_7;
 struct bmc150_accel_data *VAR_9 = FUNC_3(VAR_8);
 struct device *VAR_10 = FUNC_6(VAR_9->regmap);
 bool VAR_11 = 0;
 int VAR_12;

 FUNC_4(&VAR_9->mutex);

 if (VAR_9->fifo_mode) {
  VAR_12 = FUNC_0(VAR_8,
      VAR_0, 1);
  if (VAR_12 > 0)
   VAR_11 = 1;
 }

 if (VAR_9->ev_enable_state) {
  VAR_12 = FUNC_1(VAR_8);
  if (VAR_12 > 0)
   VAR_11 = 1;
 }

 if (VAR_11) {
  VAR_12 = FUNC_7(VAR_9->regmap, VAR_3,
       VAR_1 |
       VAR_2);
  if (VAR_12)
   FUNC_2(VAR_10, "Error writing reg_int_rst_latch\n");

  VAR_12 = VAR_4;
 } else {
  VAR_12 = VAR_5;
 }

 FUNC_5(&VAR_9->mutex);

 return VAR_12;
}
