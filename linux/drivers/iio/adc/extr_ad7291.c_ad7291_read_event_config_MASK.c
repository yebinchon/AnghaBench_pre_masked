
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel; } ;
struct ad7291_chip_info {int c_mask; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 struct ad7291_chip_info* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
        const struct iio_chan_spec *VAR_2,
        enum iio_event_type VAR_3,
        enum iio_event_direction VAR_4)
{
 struct ad7291_chip_info *VAR_5 = FUNC_1(VAR_1);





 switch (VAR_2->type) {
 case 128:
  return !!(VAR_5->c_mask & FUNC_0(15 - VAR_2->channel));
 case 129:

  return 1;
 default:
  return -VAR_0;
 }

}
