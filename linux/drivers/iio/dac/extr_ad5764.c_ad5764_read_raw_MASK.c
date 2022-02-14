
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int channel; int address; } ;
struct ad5764_state {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ad5764_state*,int ) ;
 int FUNC_4 (struct iio_dev*,unsigned int,int*) ;
 struct ad5764_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
 struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ad5764_state *VAR_8 = FUNC_5(VAR_3);
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;

 switch (VAR_7) {
 case 129:
  VAR_9 = FUNC_0(VAR_4->address);
  VAR_11 = FUNC_4(VAR_3, VAR_9, VAR_5);
  if (VAR_11 < 0)
   return VAR_11;
  *VAR_5 >>= VAR_4->scan_type.shift;
  return VAR_2;
 case 132:
  VAR_9 = FUNC_2(VAR_4->address);
  VAR_11 = FUNC_4(VAR_3, VAR_9, VAR_5);
  if (VAR_11 < 0)
   return VAR_11;
  *VAR_5 = FUNC_6(*VAR_5, 7);
  return VAR_2;
 case 131:
  VAR_9 = FUNC_1(VAR_4->address);
  VAR_11 = FUNC_4(VAR_3, VAR_9, VAR_5);
  if (VAR_11 < 0)
   return VAR_11;
  *VAR_5 = FUNC_6(*VAR_5, 5);
  return VAR_2;
 case 128:

  VAR_10 = FUNC_3(VAR_8, VAR_4->channel);
  if (VAR_10 < 0)
   return VAR_10;

  *VAR_5 = VAR_10 * 4 / 1000;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 case 130:
  *VAR_5 = -(1 << VAR_4->scan_type.realbits) / 2;
  return VAR_2;
 }

 return -VAR_0;
}
