
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {char sign; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct ad7266_state {unsigned long vref_mv; int mode; int range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ad7266_state*,int*,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ad7266_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
 struct iio_chan_spec const *VAR_6, int *VAR_7, int *VAR_8, long VAR_9)
{
 struct ad7266_state *VAR_10 = FUNC_3(VAR_5);
 unsigned long VAR_11;
 int VAR_12;

 switch (VAR_9) {
 case 129:
  VAR_12 = FUNC_1(VAR_5);
  if (VAR_12)
   return VAR_12;
  VAR_12 = FUNC_0(VAR_10, VAR_7, VAR_6->address);
  FUNC_2(VAR_5);

  *VAR_7 = (*VAR_7 >> 2) & 0xfff;
  if (VAR_6->scan_type.sign == 's')
   *VAR_7 = FUNC_4(*VAR_7, 11);

  return VAR_4;
 case 128:
  VAR_11 = VAR_10->vref_mv;
  if (VAR_10->mode == VAR_0)
   VAR_11 *= 2;
  if (VAR_10->range == VAR_1)
   VAR_11 *= 2;

  *VAR_7 = VAR_11;
  *VAR_8 = VAR_6->scan_type.realbits;
  return VAR_3;
 case 130:
  if (VAR_10->range == VAR_1 &&
   VAR_10->mode != VAR_0)
   *VAR_7 = 2048;
  else
   *VAR_7 = 0;
  return VAR_4;
 }
 return -VAR_2;
}
