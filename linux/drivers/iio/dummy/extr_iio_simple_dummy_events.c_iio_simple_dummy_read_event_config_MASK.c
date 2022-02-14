
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dummy_state {int event_en; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 struct iio_dummy_state* FUNC_0 (struct iio_dev*) ;

int FUNC_1(struct iio_dev *VAR_0,
           const struct iio_chan_spec *VAR_1,
           enum iio_event_type VAR_2,
           enum iio_event_direction VAR_3)
{
 struct iio_dummy_state *VAR_4 = FUNC_0(VAR_0);

 return VAR_4->event_en;
}
