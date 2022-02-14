
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct bmg160_data {int ev_enable_state; int mutex; scalar_t__ motion_trigger_on; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int FUNC_0 (struct bmg160_data*,int) ;
 int FUNC_1 (struct bmg160_data*,int) ;
 struct bmg160_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0,
         const struct iio_chan_spec *VAR_1,
         enum iio_event_type VAR_2,
         enum iio_event_direction VAR_3,
         int VAR_4)
{
 struct bmg160_data *VAR_5 = FUNC_2(VAR_0);
 int VAR_6;

 if (VAR_4 && VAR_5->ev_enable_state)
  return 0;

 FUNC_3(&VAR_5->mutex);

 if (!VAR_4 && VAR_5->motion_trigger_on) {
  VAR_5->ev_enable_state = 0;
  FUNC_4(&VAR_5->mutex);
  return 0;
 }
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6 < 0) {
  FUNC_4(&VAR_5->mutex);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5, 0);
  FUNC_4(&VAR_5->mutex);
  return VAR_6;
 }

 VAR_5->ev_enable_state = VAR_4;
 FUNC_4(&VAR_5->mutex);

 return 0;
}
