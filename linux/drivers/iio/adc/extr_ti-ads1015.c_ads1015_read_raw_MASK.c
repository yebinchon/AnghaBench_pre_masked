
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_3__ {int shift; int realbits; } ;
struct iio_chan_spec {size_t address; TYPE_1__ scan_type; } ;
struct ads1015_data {size_t event_channel; int* data_rate; int lock; TYPE_2__* channel_data; } ;
struct TYPE_4__ {int pga; int data_rate; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ads1015_data*) ;
 int* VAR_4 ;
 int FUNC_1 (struct ads1015_data*,size_t,int*) ;
 int FUNC_2 (struct ads1015_data*,int) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ads1015_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6, int *VAR_7,
       int *VAR_8, long VAR_9)
{
 int VAR_10, VAR_11;
 struct ads1015_data *VAR_12 = FUNC_5(VAR_5);

 FUNC_6(&VAR_12->lock);
 switch (VAR_9) {
 case 130: {
  int VAR_13 = VAR_6->scan_type.shift;

  VAR_10 = FUNC_3(VAR_5);
  if (VAR_10)
   break;

  if (FUNC_0(VAR_12) &&
    VAR_12->event_channel != VAR_6->address) {
   VAR_10 = -VAR_0;
   goto release_direct;
  }

  VAR_10 = FUNC_2(VAR_12, 1);
  if (VAR_10 < 0)
   goto release_direct;

  VAR_10 = FUNC_1(VAR_12, VAR_6->address, VAR_7);
  if (VAR_10 < 0) {
   FUNC_2(VAR_12, 0);
   goto release_direct;
  }

  *VAR_7 = FUNC_8(*VAR_7 >> VAR_13, 15 - VAR_13);

  VAR_10 = FUNC_2(VAR_12, 0);
  if (VAR_10 < 0)
   goto release_direct;

  VAR_10 = VAR_3;
release_direct:
  FUNC_4(VAR_5);
  break;
 }
 case 128:
  VAR_11 = VAR_12->channel_data[VAR_6->address].pga;
  *VAR_7 = VAR_4[VAR_11];
  *VAR_8 = VAR_6->scan_type.realbits - 1;
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_11 = VAR_12->channel_data[VAR_6->address].data_rate;
  *VAR_7 = VAR_12->data_rate[VAR_11];
  VAR_10 = VAR_3;
  break;
 default:
  VAR_10 = -VAR_1;
  break;
 }
 FUNC_7(&VAR_12->lock);

 return VAR_10;
}
