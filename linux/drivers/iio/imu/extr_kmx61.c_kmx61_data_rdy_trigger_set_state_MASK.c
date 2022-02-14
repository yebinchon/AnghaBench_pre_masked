
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kmx61_data {int motion_trig_on; int acc_dready_trig_on; int mag_dready_trig_on; int lock; struct iio_trigger* mag_dready_trig; struct iio_trigger* acc_dready_trig; struct iio_trigger* motion_trig; scalar_t__ ev_enable_state; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct iio_trigger*) ;
 struct kmx61_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct kmx61_data*,int,int ) ;
 int FUNC_3 (struct kmx61_data*,int) ;
 int FUNC_4 (struct kmx61_data*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_trigger *VAR_2,
         bool VAR_3)
{
 int VAR_4 = 0;
 u8 VAR_5;

 struct iio_dev *VAR_6 = FUNC_0(VAR_2);
 struct kmx61_data *VAR_7 = FUNC_1(VAR_6);

 FUNC_5(&VAR_7->lock);

 if (!VAR_3 && VAR_7->ev_enable_state && VAR_7->motion_trig_on) {
  VAR_7->motion_trig_on = 0;
  goto err_unlock;
 }

 if (VAR_7->acc_dready_trig == VAR_2 || VAR_7->motion_trig == VAR_2)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_1;

 VAR_4 = FUNC_2(VAR_7, VAR_3, VAR_5);
 if (VAR_4 < 0)
  goto err_unlock;

 if (VAR_7->acc_dready_trig == VAR_2 || VAR_7->mag_dready_trig == VAR_2)
  VAR_4 = FUNC_4(VAR_7, VAR_3, VAR_5);
 else
  VAR_4 = FUNC_3(VAR_7, VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_7, 0, VAR_5);
  goto err_unlock;
 }

 if (VAR_7->acc_dready_trig == VAR_2)
  VAR_7->acc_dready_trig_on = VAR_3;
 else if (VAR_7->mag_dready_trig == VAR_2)
  VAR_7->mag_dready_trig_on = VAR_3;
 else
  VAR_7->motion_trig_on = VAR_3;
err_unlock:
 FUNC_6(&VAR_7->lock);

 return VAR_4;
}
