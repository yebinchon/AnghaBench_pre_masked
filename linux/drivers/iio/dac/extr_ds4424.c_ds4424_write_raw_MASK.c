
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ds4424_raw_data {int dx; int bits; int source_bit; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iio_dev*,int ,struct iio_chan_spec const*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6,
        int VAR_7, int VAR_8, long VAR_9)
{
 union ds4424_raw_data VAR_10;

 if (VAR_8 != 0)
  return -VAR_2;

 switch (VAR_9) {
 case 128:
  if (VAR_7 < VAR_4 || VAR_7 > VAR_3)
   return -VAR_2;

  if (VAR_7 > 0) {
   VAR_10.source_bit = VAR_1;
   VAR_10.dx = VAR_7;
  } else {
   VAR_10.source_bit = VAR_0;
   VAR_10.dx = -VAR_7;
  }

  return FUNC_0(VAR_5, VAR_10.bits, VAR_6);

 default:
  return -VAR_2;
 }
}
