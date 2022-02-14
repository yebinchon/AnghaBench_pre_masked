
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma9551_data {int mutex; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel2; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;

 struct mma9551_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
          const struct iio_chan_spec *VAR_2,
          enum iio_event_type VAR_3,
          enum iio_event_direction VAR_4,
          int VAR_5)
{
 struct mma9551_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 switch (VAR_2->type) {
 case 128:
  FUNC_2(&VAR_6->mutex);
  VAR_7 = FUNC_1(VAR_1,
       VAR_2->channel2, VAR_5);
  FUNC_3(&VAR_6->mutex);
  return VAR_7;
 default:
  return -VAR_0;
 }
}
