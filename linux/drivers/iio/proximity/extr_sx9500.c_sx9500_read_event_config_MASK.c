
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int* event_enabled; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; size_t channel; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sx9500_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_4,
        const struct iio_chan_spec *VAR_5,
        enum iio_event_type VAR_6,
        enum iio_event_direction VAR_7)
{
 struct sx9500_data *VAR_8 = FUNC_0(VAR_4);

 if (VAR_5->type != VAR_3 || VAR_6 != VAR_2 ||
     VAR_7 != VAR_1)
  return -VAR_0;

 return VAR_8->event_enabled[VAR_5->channel];
}
