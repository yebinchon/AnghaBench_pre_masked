
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; int* ab_enable; int* quadrature_scale; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; int type; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct quad8_iio* FUNC_1 (struct iio_dev*) ;
 unsigned int FUNC_2 (int const) ;
 int FUNC_3 (int,int const) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_10,
 struct iio_chan_spec const *VAR_11, int *VAR_12, int *VAR_13, long VAR_14)
{
 struct quad8_iio *const VAR_15 = FUNC_1(VAR_10);
 const int VAR_16 = VAR_15->base + 2 * VAR_11->channel;
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 switch (VAR_14) {
 case 129:
  if (VAR_11->type == VAR_1) {
   *VAR_12 = !!(FUNC_2(VAR_15->base + VAR_7)
    & FUNC_0(VAR_11->channel));
   return VAR_3;
  }

  VAR_17 = FUNC_2(VAR_16 + 1);
  VAR_18 = VAR_17 & VAR_5;
  VAR_19 = !!(VAR_17 & VAR_6);


  *VAR_12 = (VAR_18 ^ VAR_19) << 24;


  FUNC_3(VAR_4 | VAR_9 | VAR_8,
       VAR_16 + 1);

  for (VAR_20 = 0; VAR_20 < 3; VAR_20++)
   *VAR_12 |= (unsigned int)FUNC_2(VAR_16) << (8 * VAR_20);

  return VAR_3;
 case 130:
  *VAR_12 = VAR_15->ab_enable[VAR_11->channel];
  return VAR_3;
 case 128:
  *VAR_12 = 1;
  *VAR_13 = VAR_15->quadrature_scale[VAR_11->channel];
  return VAR_2;
 }

 return -VAR_0;
}
