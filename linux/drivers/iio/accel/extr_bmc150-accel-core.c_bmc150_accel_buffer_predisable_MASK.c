
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {scalar_t__ currentmode; } ;
struct bmc150_accel_data {int mutex; scalar_t__ fifo_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iio_dev*,int ,int) ;
 int FUNC_1 (struct bmc150_accel_data*) ;
 int FUNC_2 (struct bmc150_accel_data*,int ,int) ;
 struct bmc150_accel_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3)
{
 struct bmc150_accel_data *VAR_4 = FUNC_3(VAR_3);

 if (VAR_3->currentmode == VAR_2)
  return FUNC_4(VAR_3);

 FUNC_5(&VAR_4->mutex);

 if (!VAR_4->fifo_mode)
  goto out;

 FUNC_2(VAR_4, VAR_1, 0);
 FUNC_0(VAR_3, VAR_0, 0);
 VAR_4->fifo_mode = 0;
 FUNC_1(VAR_4);

out:
 FUNC_6(&VAR_4->mutex);

 return 0;
}
