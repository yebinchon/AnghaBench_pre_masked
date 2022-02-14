
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int* event_enabled; int mutex; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; size_t channel; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sx9500_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sx9500_data*,size_t) ;
 int FUNC_4 (struct sx9500_data*) ;
 int FUNC_5 (struct sx9500_data*,size_t) ;
 int FUNC_6 (struct sx9500_data*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_4,
         const struct iio_chan_spec *VAR_5,
         enum iio_event_type VAR_6,
         enum iio_event_direction VAR_7,
         int VAR_8)
{
 struct sx9500_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 if (VAR_5->type != VAR_3 || VAR_6 != VAR_2 ||
     VAR_7 != VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_9->mutex);

 if (VAR_8 == 1) {
  VAR_10 = FUNC_5(VAR_9, VAR_5->channel);
  if (VAR_10 < 0)
   goto out_unlock;
  VAR_10 = FUNC_6(VAR_9);
  if (VAR_10 < 0)
   goto out_undo_chan;
 } else {
  VAR_10 = FUNC_3(VAR_9, VAR_5->channel);
  if (VAR_10 < 0)
   goto out_unlock;
  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10 < 0)
   goto out_undo_chan;
 }

 VAR_9->event_enabled[VAR_5->channel] = VAR_8;
 goto out_unlock;

out_undo_chan:
 if (VAR_8 == 1)
  FUNC_3(VAR_9, VAR_5->channel);
 else
  FUNC_5(VAR_9, VAR_5->channel);
out_unlock:
 FUNC_2(&VAR_9->mutex);
 return VAR_10;
}
