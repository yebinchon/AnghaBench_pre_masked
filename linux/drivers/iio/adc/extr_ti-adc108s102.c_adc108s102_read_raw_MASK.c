
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int type; int address; } ;
struct adc108s102_state {int va_millivolt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adc108s102_state*,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct adc108s102_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
          struct iio_chan_spec const *VAR_5,
          int *VAR_6, int *VAR_7, long VAR_8)
{
 struct adc108s102_state *VAR_9 = FUNC_4(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_2(VAR_4);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_1(VAR_9, VAR_5->address);

  FUNC_3(VAR_4);

  if (VAR_10 < 0)
   return VAR_10;

  *VAR_6 = FUNC_0(VAR_10);

  return VAR_2;
 case 128:
  if (VAR_5->type != VAR_3)
   break;

  *VAR_6 = VAR_9->va_millivolt;
  *VAR_7 = VAR_5->scan_type.realbits;

  return VAR_1;
 default:
  break;
 }

 return -VAR_0;
}
