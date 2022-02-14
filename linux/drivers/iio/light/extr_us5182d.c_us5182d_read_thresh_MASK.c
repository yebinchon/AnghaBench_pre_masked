
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us5182d_data {int px_high_th; int px_low_th; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 int VAR_1 ;
 struct us5182d_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, enum iio_event_type VAR_4,
 enum iio_event_direction VAR_5, enum iio_event_info VAR_6, int *VAR_7,
 int *VAR_8)
{
 struct us5182d_data *VAR_9 = FUNC_0(VAR_2);

 switch (VAR_5) {
 case 128:
  FUNC_1(&VAR_9->lock);
  *VAR_7 = VAR_9->px_high_th;
  FUNC_2(&VAR_9->lock);
  break;
 case 129:
  FUNC_1(&VAR_9->lock);
  *VAR_7 = VAR_9->px_low_th;
  FUNC_2(&VAR_9->lock);
  break;
 default:
  return -VAR_0;
 }

 return VAR_1;
}
