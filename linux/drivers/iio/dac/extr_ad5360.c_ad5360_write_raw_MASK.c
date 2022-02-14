
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; int shift; } ;
struct iio_chan_spec {int channel; TYPE_1__ scan_type; int address; } ;
struct ad5360_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;




 unsigned int FUNC_1 (struct ad5360_state*,int ) ;
 int FUNC_2 (struct iio_dev*,int ,int ,int,int ) ;
 struct ad5360_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
          struct iio_chan_spec const *VAR_6,
          int VAR_7,
          int VAR_8,
          long VAR_9)
{
 struct ad5360_state *VAR_10 = FUNC_3(VAR_5);
 int VAR_11 = (1 << VAR_6->scan_type.realbits);
 unsigned int VAR_12;

 switch (VAR_9) {
 case 128:
  if (VAR_7 >= VAR_11 || VAR_7 < 0)
   return -VAR_4;

  return FUNC_2(VAR_5, VAR_1,
     VAR_6->address, VAR_7, VAR_6->scan_type.shift);

 case 131:
  if (VAR_7 >= VAR_11 || VAR_7 < 0)
   return -VAR_4;

  return FUNC_2(VAR_5, VAR_3,
     VAR_6->address, VAR_7, VAR_6->scan_type.shift);

 case 130:
  if (VAR_7 >= VAR_11 || VAR_7 < 0)
   return -VAR_4;

  return FUNC_2(VAR_5, VAR_2,
     VAR_6->address, VAR_7, VAR_6->scan_type.shift);

 case 129:
  if (VAR_7 <= -VAR_11 || VAR_7 > 0)
   return -VAR_4;

  VAR_7 = -VAR_7;




  VAR_7 >>= (VAR_6->scan_type.realbits - 14);




  VAR_12 = FUNC_1(VAR_10, VAR_6->channel);
  return FUNC_2(VAR_5, VAR_0,
     FUNC_0(VAR_12), VAR_7, 0);
 default:
  break;
 }

 return -VAR_4;
}
