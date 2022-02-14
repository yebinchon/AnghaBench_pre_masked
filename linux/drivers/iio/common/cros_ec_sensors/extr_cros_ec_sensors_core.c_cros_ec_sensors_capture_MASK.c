
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; int * active_scan_mask; int scan_bytes; } ;
struct cros_ec_sensors_core_state {int (* read_ec_sensors_data ) (struct iio_dev*,int ,int *) ;int cmd_lock; scalar_t__ samples; } ;
typedef int s16 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct cros_ec_sensors_core_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iio_dev*,int ,int *) ;

irqreturn_t FUNC_8(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct cros_ec_sensors_core_state *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 FUNC_5(&VAR_5->cmd_lock);


 FUNC_4(VAR_5->samples, 0, VAR_4->scan_bytes);


 VAR_6 = VAR_5->read_ec_sensors_data(VAR_4,
           *(VAR_4->active_scan_mask),
           (s16 *)VAR_5->samples);
 if (VAR_6 < 0)
  goto done;

 FUNC_2(VAR_4, VAR_5->samples,
        FUNC_0(VAR_4));

done:




 FUNC_3(VAR_4->trig);

 FUNC_6(&VAR_5->cmd_lock);

 return VAR_0;
}
