
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad7780_state {long long int_vref_mv; unsigned int gain; int filter_gpio; int odr; int gain_gpio; struct ad7780_chip_info* chip_info; } ;
struct TYPE_3__ {int realbits; } ;
struct TYPE_4__ {TYPE_1__ scan_type; } ;
struct ad7780_chip_info {TYPE_2__ channel; int is_ad778x; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (unsigned long long,unsigned int) ;
 int VAR_2 ;


 int * VAR_3 ;
 int FUNC_2 (int ,int) ;
 struct ad7780_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int VAR_6,
       int VAR_7,
       long VAR_8)
{
 struct ad7780_state *VAR_9 = FUNC_3(VAR_4);
 const struct ad7780_chip_info *VAR_10 = VAR_9->chip_info;
 unsigned long long VAR_11;
 unsigned int VAR_12, VAR_13;

 if (!VAR_10->is_ad778x)
  return -VAR_2;

 switch (VAR_8) {
 case 128:
  if (VAR_6 != 0)
   return -VAR_2;

  VAR_11 = VAR_9->int_vref_mv * 1000000LL;
  VAR_12 = 1 << (VAR_10->channel.scan_type.realbits - 1);
  VAR_13 = FUNC_1(VAR_11, VAR_12);
  VAR_13 = FUNC_0(VAR_13, VAR_7);
  VAR_9->gain = VAR_13;
  if (VAR_13 < VAR_1)
   VAR_13 = 0;
  else
   VAR_13 = 1;
  FUNC_2(VAR_9->gain_gpio, VAR_13);
  break;
 case 129:
  if (1000*VAR_6 + VAR_7/1000 < VAR_0)
   VAR_6 = 0;
  else
   VAR_6 = 1;
  VAR_9->odr = VAR_3[VAR_6];
  FUNC_2(VAR_9->filter_gpio, VAR_6);
  break;
 default:
  break;
 }

 return 0;
}
