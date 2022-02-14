
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma9551_data {int mutex; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mma9551_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
         const struct iio_chan_spec *VAR_5,
         enum iio_event_type VAR_6,
         enum iio_event_direction VAR_7,
         enum iio_event_info VAR_8,
         int VAR_9, int VAR_10)
{
 struct mma9551_data *VAR_11 = FUNC_0(VAR_4);
 int VAR_12;

 switch (VAR_5->type) {
 case 128:
  if (VAR_10 != 0 || VAR_9 < 1 || VAR_9 > 10)
   return -VAR_0;
  FUNC_2(&VAR_11->mutex);
  VAR_12 = FUNC_1(VAR_11->client,
       VAR_1,
       VAR_3,
       VAR_2,
       VAR_9);
  FUNC_3(&VAR_11->mutex);
  return VAR_12;
 default:
  return -VAR_0;
 }
}
