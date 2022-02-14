
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct rcar_gyroadc {scalar_t__ mode; int sample_width; int regs; struct regulator** vref; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; int type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_1 (size_t) ;
 int VAR_5 ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct rcar_gyroadc* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct rcar_gyroadc*,int) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct regulator*) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_6,
     struct iio_chan_spec const *VAR_7,
     int *VAR_8, int *VAR_9, long VAR_10)
{
 struct rcar_gyroadc *VAR_11 = FUNC_4(VAR_6);
 struct regulator *VAR_12;
 unsigned int VAR_13 = FUNC_1(VAR_7->channel);
 unsigned int VAR_14;
 int VAR_15;





 if (VAR_11->mode == VAR_4)
  VAR_12 = VAR_11->vref[0];
 else
  VAR_12 = VAR_11->vref[VAR_7->channel];

 switch (VAR_10) {
 case 130:
  if (VAR_7->type != VAR_3)
   return -VAR_0;


  if (!VAR_12)
   return -VAR_0;

  VAR_15 = FUNC_2(VAR_6);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_5(VAR_11, 1);
  if (VAR_15 < 0) {
   FUNC_3(VAR_6);
   return VAR_15;
  }

  *VAR_8 = FUNC_6(VAR_11->regs + VAR_13);
  *VAR_8 &= FUNC_0(VAR_11->sample_width) - 1;

  VAR_15 = FUNC_5(VAR_11, 0);
  FUNC_3(VAR_6);
  if (VAR_15 < 0)
   return VAR_15;

  return VAR_2;
 case 128:

  if (!VAR_12)
   return -VAR_0;

  VAR_14 = FUNC_7(VAR_12);
  *VAR_8 = VAR_14 / 1000;
  *VAR_9 = 1 << VAR_11->sample_width;

  return VAR_1;
 case 129:
  *VAR_8 = VAR_5;

  return VAR_2;
 default:
  return -VAR_0;
 }
}
