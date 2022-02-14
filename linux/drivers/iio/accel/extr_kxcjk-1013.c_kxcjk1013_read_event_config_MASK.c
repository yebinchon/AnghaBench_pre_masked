
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxcjk1013_data {int ev_enable_state; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 struct kxcjk1013_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
       const struct iio_chan_spec *VAR_1,
       enum iio_event_type VAR_2,
       enum iio_event_direction VAR_3)
{
 struct kxcjk1013_data *VAR_4 = FUNC_0(VAR_0);

 return VAR_4->ev_enable_state;
}
