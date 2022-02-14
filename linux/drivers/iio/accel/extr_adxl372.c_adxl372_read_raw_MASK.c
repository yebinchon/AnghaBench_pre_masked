
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct adxl372_state {size_t odr; size_t bw; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (struct adxl372_state*,int ) ;
 int* VAR_5 ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct adxl372_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7,
       int *VAR_8, int *VAR_9, long VAR_10)
{
 struct adxl372_state *VAR_11 = FUNC_3(VAR_6);
 int VAR_12;

 switch (VAR_10) {
 case 130:
  VAR_12 = FUNC_1(VAR_6);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_0(VAR_11, VAR_7->address);
  FUNC_2(VAR_6);
  if (VAR_12 < 0)
   return VAR_12;

  *VAR_8 = FUNC_4(VAR_12 >> VAR_7->scan_type.shift,
         VAR_7->scan_type.realbits - 1);
  return VAR_2;
 case 128:
  *VAR_8 = 0;
  *VAR_9 = VAR_0;
  return VAR_3;
 case 129:
  *VAR_8 = VAR_5[VAR_11->odr];
  return VAR_2;
 case 131:
  *VAR_8 = VAR_4[VAR_11->bw];
  return VAR_2;
 }

 return -VAR_1;
}
