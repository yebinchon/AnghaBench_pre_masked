
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct bmg160_data {int motion_trigger_on; int dready_trigger_on; int mutex; struct iio_trigger* motion_trig; scalar_t__ ev_enable_state; } ;


 int FUNC_0 (struct bmg160_data*,int) ;
 int FUNC_1 (struct bmg160_data*,int) ;
 int FUNC_2 (struct bmg160_data*,int) ;
 struct bmg160_data* FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct iio_trigger*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_trigger *VAR_0,
          bool VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_4(VAR_0);
 struct bmg160_data *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_5(&VAR_3->mutex);

 if (!VAR_1 && VAR_3->ev_enable_state && VAR_3->motion_trigger_on) {
  VAR_3->motion_trigger_on = 0;
  FUNC_6(&VAR_3->mutex);
  return 0;
 }





 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_6(&VAR_3->mutex);
  return VAR_4;
 }
 if (VAR_3->motion_trig == VAR_0)
  VAR_4 = FUNC_1(VAR_3, VAR_1);
 else
  VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3, 0);
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
