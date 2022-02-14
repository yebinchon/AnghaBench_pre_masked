
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ address; } ;
struct ads1015_data {scalar_t__ event_channel; int lock; int comp_mode; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;


 struct ads1015_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, enum iio_event_type VAR_4,
 enum iio_event_direction VAR_5)
{
 struct ads1015_data *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = 0;

 FUNC_1(&VAR_6->lock);
 if (VAR_6->event_channel == VAR_3->address) {
  switch (VAR_5) {
  case 128:
   VAR_7 = 1;
   break;
  case 129:
   VAR_7 = (VAR_6->comp_mode == VAR_0);
   break;
  default:
   VAR_7 = -VAR_1;
   break;
  }
 }
 FUNC_2(&VAR_6->lock);

 return VAR_7;
}
