
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ms5611_state {int lock; TYPE_2__* pressure_osr; TYPE_1__* temp_osr; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int const type; } ;
typedef int s32 ;
struct TYPE_4__ {scalar_t__ rate; } ;
struct TYPE_3__ {scalar_t__ rate; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 struct ms5611_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6, long VAR_7)
{
 int VAR_8;
 s32 VAR_9, VAR_10;
 struct ms5611_state *VAR_11 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 131:
  FUNC_2(&VAR_11->lock);
  VAR_8 = FUNC_1(VAR_3,
          &VAR_9, &VAR_10);
  FUNC_3(&VAR_11->lock);
  if (VAR_8 < 0)
   return VAR_8;

  switch (VAR_4->type) {
  case 128:
   *VAR_5 = VAR_9 * 10;
   return VAR_1;
  case 129:
   *VAR_5 = VAR_10 / 1000;
   *VAR_6 = (VAR_10 % 1000) * 1000;
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 130:
  switch (VAR_4->type) {
  case 128:
   *VAR_5 = 10;
   return VAR_1;
  case 129:
   *VAR_5 = 0;
   *VAR_6 = 1000;
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 132:
  if (VAR_4->type != 128 && VAR_4->type != 129)
   break;
  FUNC_2(&VAR_11->lock);
  if (VAR_4->type == 128)
   *VAR_5 = (int)VAR_11->temp_osr->rate;
  else
   *VAR_5 = (int)VAR_11->pressure_osr->rate;
  FUNC_3(&VAR_11->lock);
  return VAR_1;
 }

 return -VAR_0;
}
