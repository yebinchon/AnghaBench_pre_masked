
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_state {int* thresh_low; int* thresh_high; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 struct max1363_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, enum iio_event_type VAR_4,
 enum iio_event_direction VAR_5, enum iio_event_info VAR_6, int *VAR_7,
 int *VAR_8)
{
 struct max1363_state *VAR_9 = FUNC_0(VAR_2);
 if (VAR_5 == VAR_0)
  *VAR_7 = VAR_9->thresh_low[VAR_3->channel];
 else
  *VAR_7 = VAR_9->thresh_high[VAR_3->channel];
 return VAR_1;
}
