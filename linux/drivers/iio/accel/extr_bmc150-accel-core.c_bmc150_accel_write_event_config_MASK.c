
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct bmc150_accel_data {int ev_enable_state; int mutex; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int FUNC_0 (struct bmc150_accel_data*,int ,int) ;
 struct bmc150_accel_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
        const struct iio_chan_spec *VAR_2,
        enum iio_event_type VAR_3,
        enum iio_event_direction VAR_4,
        int VAR_5)
{
 struct bmc150_accel_data *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 if (VAR_5 == VAR_6->ev_enable_state)
  return 0;

 FUNC_2(&VAR_6->mutex);

 VAR_7 = FUNC_0(VAR_6, VAR_0,
      VAR_5);
 if (VAR_7 < 0) {
  FUNC_3(&VAR_6->mutex);
  return VAR_7;
 }

 VAR_6->ev_enable_state = VAR_5;
 FUNC_3(&VAR_6->mutex);

 return 0;
}
