
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*,int,int,int,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
        const struct iio_chan_spec *VAR_2,
        enum iio_event_type VAR_3,
        enum iio_event_direction VAR_4,
        enum iio_event_info VAR_5,
        int *VAR_6, int *VAR_7)
{
 int VAR_8;

 switch (VAR_5) {
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7);
 case 129:
  VAR_8 = FUNC_1(FUNC_0(VAR_1),
         VAR_2->type, VAR_7);
  *VAR_6 = *VAR_7 / 1000000;
  *VAR_7 = *VAR_7 % 1000000;
  return VAR_8;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
