
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma9553_event {int enabled; } ;
struct mma9553_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 struct mma9553_data* FUNC_0 (struct iio_dev*) ;
 struct mma9553_event* FUNC_1 (struct mma9553_data*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
         const struct iio_chan_spec *VAR_2,
         enum iio_event_type VAR_3,
         enum iio_event_direction VAR_4)
{
 struct mma9553_data *VAR_5 = FUNC_0(VAR_1);
 struct mma9553_event *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_2->type, VAR_2->channel2, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 return VAR_6->enabled;
}
