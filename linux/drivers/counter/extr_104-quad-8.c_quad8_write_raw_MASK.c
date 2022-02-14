
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; int* preset; int* ab_enable; int* preset_enable; int* quadrature_scale; int * quadrature_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; int type; } ;


 int VAR_0 ;



 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct quad8_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (unsigned int,int const) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_8,
 struct iio_chan_spec const *VAR_9, int VAR_10, int VAR_11, long VAR_12)
{
 struct quad8_iio *const VAR_13 = FUNC_0(VAR_8);
 const int VAR_14 = VAR_13->base + 2 * VAR_9->channel;
 int VAR_15;
 unsigned int VAR_16;

 switch (VAR_12) {
 case 129:
  if (VAR_9->type == VAR_1)
   return -VAR_0;


  if ((unsigned int)VAR_10 > 0xFFFFFF)
   return -VAR_0;


  FUNC_1(VAR_3 | VAR_5, VAR_14 + 1);


  for (VAR_15 = 0; VAR_15 < 3; VAR_15++)
   FUNC_1(VAR_10 >> (8 * VAR_15), VAR_14);


  FUNC_1(VAR_3 | VAR_4, VAR_14 + 1);


  FUNC_1(VAR_3 | VAR_5, VAR_14 + 1);


  VAR_10 = VAR_13->preset[VAR_9->channel];
  for (VAR_15 = 0; VAR_15 < 3; VAR_15++)
   FUNC_1(VAR_10 >> (8 * VAR_15), VAR_14);


  FUNC_1(VAR_3 | VAR_7, VAR_14 + 1);

  FUNC_1(VAR_3 | VAR_6, VAR_14 + 1);

  return 0;
 case 130:

  if (VAR_10 < 0 || VAR_10 > 1)
   return -VAR_0;

  VAR_13->ab_enable[VAR_9->channel] = VAR_10;

  VAR_16 = VAR_10 | VAR_13->preset_enable[VAR_9->channel] << 1;


  FUNC_1(VAR_2 | VAR_16, VAR_14 + 1);

  return 0;
 case 128:

  if (!VAR_13->quadrature_mode[VAR_9->channel] && (VAR_11 || VAR_10 != 1))
   return -VAR_0;


  if (VAR_10 == 1 && !VAR_11)
   VAR_13->quadrature_scale[VAR_9->channel] = 0;
  else if (!VAR_10)
   switch (VAR_11) {
   case 500000:
    VAR_13->quadrature_scale[VAR_9->channel] = 1;
    break;
   case 250000:
    VAR_13->quadrature_scale[VAR_9->channel] = 2;
    break;
   default:
    return -VAR_0;
   }
  else
   return -VAR_0;

  return 0;
 }

 return -VAR_0;
}
