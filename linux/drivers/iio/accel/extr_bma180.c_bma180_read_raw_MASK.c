
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {int type; TYPE_1__ scan_type; int scan_index; } ;
struct bma180_data {int bw; int scale; int mutex; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bma180_data*,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct bma180_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
  struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6,
  long VAR_7)
{
 struct bma180_data *VAR_8 = FUNC_3(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 130:
  VAR_9 = FUNC_1(VAR_3);
  if (VAR_9)
   return VAR_9;

  FUNC_4(&VAR_8->mutex);
  VAR_9 = FUNC_0(VAR_8, VAR_4->scan_index);
  FUNC_5(&VAR_8->mutex);
  FUNC_2(VAR_3);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_5 = FUNC_6(VAR_9 >> VAR_4->scan_type.shift,
   VAR_4->scan_type.realbits - 1);
  return VAR_1;
 case 132:
  *VAR_5 = VAR_8->bw;
  return VAR_1;
 case 129:
  switch (VAR_4->type) {
  case 133:
   *VAR_5 = 0;
   *VAR_6 = VAR_8->scale;
   return VAR_2;
  case 128:
   *VAR_5 = 500;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 131:
  *VAR_5 = 48;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
