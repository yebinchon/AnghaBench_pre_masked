
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmx61_data {int ev_enable_state; int lock; scalar_t__ motion_trig_on; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 struct kmx61_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct kmx61_data*,int,int ) ;
 int FUNC_2 (struct kmx61_data*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
        const struct iio_chan_spec *VAR_2,
        enum iio_event_type VAR_3,
        enum iio_event_direction VAR_4,
        int VAR_5)
{
 struct kmx61_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = 0;

 if (VAR_5 && VAR_6->ev_enable_state)
  return 0;

 FUNC_3(&VAR_6->lock);

 if (!VAR_5 && VAR_6->motion_trig_on) {
  VAR_6->ev_enable_state = 0;
  goto err_unlock;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_0);
 if (VAR_7 < 0)
  goto err_unlock;

 VAR_7 = FUNC_2(VAR_6, VAR_5);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6, 0, VAR_0);
  goto err_unlock;
 }

 VAR_6->ev_enable_state = VAR_5;

err_unlock:
 FUNC_4(&VAR_6->lock);

 return VAR_7;
}
