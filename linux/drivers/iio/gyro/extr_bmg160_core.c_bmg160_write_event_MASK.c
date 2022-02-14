
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct bmg160_data {int slope_thres; int ev_enable_state; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct bmg160_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
         const struct iio_chan_spec *VAR_4,
         enum iio_event_type VAR_5,
         enum iio_event_direction VAR_6,
         enum iio_event_info VAR_7,
         int VAR_8, int VAR_9)
{
 struct bmg160_data *VAR_10 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 128:
  if (VAR_10->ev_enable_state)
   return -VAR_1;
  VAR_10->slope_thres &= ~VAR_0;
  VAR_10->slope_thres |= (VAR_8 & VAR_0);
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
