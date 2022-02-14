
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; } ;
struct ads1015_data {int* data_rate; int lock; TYPE_2__* thresh_data; TYPE_1__* channel_data; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_4__ {int high_thresh; int low_thresh; unsigned int comp_queue; } ;
struct TYPE_3__ {int data_rate; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 struct ads1015_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
 const struct iio_chan_spec *VAR_7, enum iio_event_type VAR_8,
 enum iio_event_direction VAR_9, enum iio_event_info VAR_10, int *VAR_11,
 int *VAR_12)
{
 struct ads1015_data *VAR_13 = FUNC_0(VAR_6);
 int VAR_14;
 unsigned int VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_1(&VAR_13->lock);

 switch (VAR_10) {
 case 128:
  *VAR_11 = (VAR_9 == VAR_1) ?
   VAR_13->thresh_data[VAR_7->address].high_thresh :
   VAR_13->thresh_data[VAR_7->address].low_thresh;
  VAR_14 = VAR_2;
  break;
 case 129:
  VAR_17 = VAR_13->channel_data[VAR_7->address].data_rate;
  VAR_15 = VAR_13->thresh_data[VAR_7->address].comp_queue;
  VAR_16 = VAR_5[VAR_15] *
   VAR_4 / VAR_13->data_rate[VAR_17];

  *VAR_11 = VAR_16 / VAR_4;
  *VAR_12 = VAR_16 % VAR_4;
  VAR_14 = VAR_3;
  break;
 default:
  VAR_14 = -VAR_0;
  break;
 }

 FUNC_2(&VAR_13->lock);

 return VAR_14;
}
