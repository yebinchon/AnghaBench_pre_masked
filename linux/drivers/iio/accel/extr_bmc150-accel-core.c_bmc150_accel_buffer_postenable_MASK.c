
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {scalar_t__ currentmode; } ;
struct bmc150_accel_data {int mutex; scalar_t__ fifo_mode; int watermark; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bmc150_accel_data*) ;
 int FUNC_1 (struct bmc150_accel_data*,int ,int) ;
 struct bmc150_accel_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3)
{
 struct bmc150_accel_data *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;

 if (VAR_3->currentmode == VAR_2)
  return FUNC_3(VAR_3);

 FUNC_4(&VAR_4->mutex);

 if (!VAR_4->watermark)
  goto out;

 VAR_5 = FUNC_1(VAR_4, VAR_1,
      1);
 if (VAR_5)
  goto out;

 VAR_4->fifo_mode = VAR_0;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {
  VAR_4->fifo_mode = 0;
  FUNC_1(VAR_4, VAR_1,
        0);
 }

out:
 FUNC_5(&VAR_4->mutex);

 return VAR_5;
}
