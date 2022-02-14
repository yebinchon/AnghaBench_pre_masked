
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int VAR_4 ;
 struct mma9551_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
        const struct iio_chan_spec *VAR_6,
        enum iio_event_type VAR_7,
        enum iio_event_direction VAR_8,
        enum iio_event_info VAR_9,
        int *VAR_10, int *VAR_11)
{
 struct mma9551_data *VAR_12 = FUNC_0(VAR_5);
 int VAR_13;
 u8 VAR_14;

 switch (VAR_6->type) {
 case 128:
  FUNC_2(&VAR_12->mutex);
  VAR_13 = FUNC_1(VAR_12->client,
            VAR_2,
            VAR_4, &VAR_14);
  FUNC_3(&VAR_12->mutex);
  if (VAR_13 < 0)
   return VAR_13;
  *VAR_10 = VAR_14 & VAR_3;
  *VAR_11 = 0;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
