
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct bmc150_accel_data {int slope_thres; int slope_dur; scalar_t__ ev_enable_state; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 struct bmc150_accel_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_4,
        const struct iio_chan_spec *VAR_5,
        enum iio_event_type VAR_6,
        enum iio_event_direction VAR_7,
        enum iio_event_info VAR_8,
        int VAR_9, int VAR_10)
{
 struct bmc150_accel_data *VAR_11 = FUNC_0(VAR_4);

 if (VAR_11->ev_enable_state)
  return -VAR_2;

 switch (VAR_8) {
 case 128:
  VAR_11->slope_thres = VAR_9 & VAR_1;
  break;
 case 129:
  VAR_11->slope_dur = VAR_9 & VAR_0;
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
