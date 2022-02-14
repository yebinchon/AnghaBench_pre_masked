
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma9553_event {int enabled; } ;
struct mma9553_data {int mutex; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 struct mma9553_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mma9553_data*) ;
 struct mma9553_event* FUNC_3 (struct mma9553_data*,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
          const struct iio_chan_spec *VAR_2,
          enum iio_event_type VAR_3,
          enum iio_event_direction VAR_4, int VAR_5)
{
 struct mma9553_data *VAR_6 = FUNC_0(VAR_1);
 struct mma9553_event *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6, VAR_2->type, VAR_2->channel2, VAR_4);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_7->enabled == VAR_5)
  return 0;

 FUNC_4(&VAR_6->mutex);

 VAR_8 = FUNC_1(VAR_6->client, VAR_5);
 if (VAR_8 < 0)
  goto err_out;
 VAR_7->enabled = VAR_5;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 < 0)
  goto err_conf_gpio;

 FUNC_5(&VAR_6->mutex);

 return 0;

err_conf_gpio:
 if (VAR_5) {
  VAR_7->enabled = 0;
  FUNC_1(VAR_6->client, 0);
 }
err_out:
 FUNC_5(&VAR_6->mutex);
 return VAR_8;
}
