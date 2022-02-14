
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxcjk1013_data {int motion_trigger_on; int dready_trigger_on; int mutex; struct iio_trigger* motion_trig; scalar_t__ ev_enable_state; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 struct kxcjk1013_data* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (struct kxcjk1013_data*,int) ;
 int FUNC_3 (struct kxcjk1013_data*,int) ;
 int FUNC_4 (struct kxcjk1013_data*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_trigger *VAR_0,
      bool VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_1(VAR_0);
 struct kxcjk1013_data *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_5(&VAR_3->mutex);

 if (!VAR_1 && VAR_3->ev_enable_state && VAR_3->motion_trigger_on) {
  VAR_3->motion_trigger_on = 0;
  FUNC_6(&VAR_3->mutex);
  return 0;
 }

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_6(&VAR_3->mutex);
  return VAR_4;
 }
 if (VAR_3->motion_trig == VAR_0)
  VAR_4 = FUNC_3(VAR_3, VAR_1);
 else
  VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_2(VAR_3, 0);
  FUNC_6(&VAR_3->mutex);
  return VAR_4;
 }
 if (VAR_3->motion_trig == VAR_0)
  VAR_3->motion_trigger_on = VAR_1;
 else
  VAR_3->dready_trigger_on = VAR_1;

 FUNC_6(&VAR_3->mutex);

 return 0;
}
