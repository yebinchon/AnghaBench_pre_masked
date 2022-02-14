
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmpe_adc {TYPE_1__* stmpe; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct TYPE_2__ {int mod_12b; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;

 struct stmpe_adc* FUNC_0 (struct iio_dev*) ;
 long FUNC_1 (struct stmpe_adc*,struct iio_chan_spec const*,int*) ;
 long FUNC_2 (struct stmpe_adc*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
     struct iio_chan_spec const *VAR_4,
     int *VAR_5,
     int *VAR_6,
     long VAR_7)
{
 struct stmpe_adc *VAR_8 = FUNC_0(VAR_3);
 long VAR_9;

 switch (VAR_7) {
 case 131:
 case 132:

  switch (VAR_4->type) {
  case 128:
   VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5);
   break;

  case 129:
   VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5);
   break;
  default:
   return -VAR_0;
  }

  if (VAR_9 < 0)
   return VAR_9;

  return VAR_2;

 case 130:
  *VAR_5 = 3300;
  *VAR_6 = VAR_8->stmpe->mod_12b ? 12 : 10;
  return VAR_1;

 default:
  break;
 }

 return -VAR_0;
}
