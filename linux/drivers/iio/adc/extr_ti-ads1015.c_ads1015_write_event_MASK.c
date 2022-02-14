
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_4__ {int realbits; } ;
struct iio_chan_spec {size_t address; TYPE_1__ scan_type; } ;
struct ads1015_data {int* data_rate; int lock; TYPE_3__* thresh_data; TYPE_2__* channel_data; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_6__ {int high_thresh; int low_thresh; int comp_queue; } ;
struct TYPE_5__ {int data_rate; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int* VAR_3 ;
 struct ads1015_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
 const struct iio_chan_spec *VAR_5, enum iio_event_type VAR_6,
 enum iio_event_direction VAR_7, enum iio_event_info VAR_8, int VAR_9,
 int VAR_10)
{
 struct ads1015_data *VAR_11 = FUNC_1(VAR_4);
 int VAR_12 = VAR_5->scan_type.realbits;
 int VAR_13 = 0;
 long long VAR_14;
 int VAR_15;
 int VAR_16;

 FUNC_2(&VAR_11->lock);

 switch (VAR_8) {
 case 128:
  if (VAR_9 >= 1 << (VAR_12 - 1) || VAR_9 < -1 << (VAR_12 - 1)) {
   VAR_13 = -VAR_0;
   break;
  }
  if (VAR_7 == VAR_1)
   VAR_11->thresh_data[VAR_5->address].high_thresh = VAR_9;
  else
   VAR_11->thresh_data[VAR_5->address].low_thresh = VAR_9;
  break;
 case 129:
  VAR_16 = VAR_11->channel_data[VAR_5->address].data_rate;
  VAR_14 = VAR_9 * VAR_2 + VAR_10;

  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_3) - 1; VAR_15++) {
   if (VAR_14 <= VAR_3[VAR_15] *
     VAR_2 / VAR_11->data_rate[VAR_16])
    break;
  }
  VAR_11->thresh_data[VAR_5->address].comp_queue = VAR_15;
  break;
 default:
  VAR_13 = -VAR_0;
  break;
 }

 FUNC_3(&VAR_11->lock);

 return VAR_13;
}
