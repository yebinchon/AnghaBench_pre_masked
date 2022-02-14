
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int channel; int address; } ;
struct ad5360_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ad5360_state*,int ) ;
 unsigned int FUNC_2 (struct ad5360_state*,int ) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 struct ad5360_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_7,
      struct iio_chan_spec const *VAR_8,
      int *VAR_9,
      int *VAR_10,
      long VAR_11)
{
 struct ad5360_state *VAR_12 = FUNC_4(VAR_7);
 unsigned int VAR_13;
 int VAR_14;
 int VAR_15;

 switch (VAR_11) {
 case 129:
  VAR_15 = FUNC_3(VAR_7, VAR_3,
   VAR_8->address);
  if (VAR_15 < 0)
   return VAR_15;
  *VAR_9 = VAR_15 >> VAR_8->scan_type.shift;
  return VAR_6;
 case 128:
  VAR_14 = FUNC_1(VAR_12, VAR_8->channel);
  if (VAR_14 < 0)
   return VAR_14;


  *VAR_9 = VAR_14 * 4 / 1000;
  *VAR_10 = VAR_8->scan_type.realbits;
  return VAR_5;
 case 132:
  VAR_15 = FUNC_3(VAR_7, VAR_1,
   VAR_8->address);
  if (VAR_15 < 0)
   return VAR_15;
  *VAR_9 = VAR_15;
  return VAR_6;
 case 131:
  VAR_15 = FUNC_3(VAR_7, VAR_0,
   VAR_8->address);
  if (VAR_15 < 0)
   return VAR_15;
  *VAR_9 = VAR_15;
  return VAR_6;
 case 130:
  VAR_13 = FUNC_2(VAR_12, VAR_8->channel);
  VAR_15 = FUNC_3(VAR_7, VAR_2,
   FUNC_0(VAR_13));
  if (VAR_15 < 0)
   return VAR_15;

  VAR_15 <<= (VAR_8->scan_type.realbits - 14);
  *VAR_9 = -VAR_15;
  return VAR_6;
 }

 return -VAR_4;
}
