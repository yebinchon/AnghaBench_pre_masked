
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; int shift; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;


 int VAR_0 ;



 unsigned int FUNC_0 (struct iio_chan_spec const*,long) ;
 int FUNC_1 (struct iio_dev*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
 struct iio_chan_spec const *VAR_2, int VAR_3, int VAR_4, long VAR_5)
{
 const int VAR_6 = (1 << VAR_2->scan_type.realbits);
 unsigned int VAR_7;

 switch (VAR_5) {
 case 128:
  if (VAR_3 >= VAR_6 || VAR_3 < 0)
   return -VAR_0;
  VAR_3 <<= VAR_2->scan_type.shift;
  break;
 case 130:
  if (VAR_3 >= 128 || VAR_3 < -128)
   return -VAR_0;
  break;
 case 129:
  if (VAR_3 >= 32 || VAR_3 < -32)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_5);
 return FUNC_1(VAR_1, VAR_7, (u16)VAR_3);
}
