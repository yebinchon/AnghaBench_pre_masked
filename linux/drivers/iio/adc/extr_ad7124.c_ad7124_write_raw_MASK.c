
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_3__ {int realbits; } ;
struct iio_chan_spec {size_t address; TYPE_1__ scan_type; } ;
struct ad7124_state {TYPE_2__* channel_config; } ;
struct TYPE_4__ {long long vref_mv; int bipolar; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;


 int FUNC_1 (struct ad7124_state*,size_t,unsigned int) ;
 int FUNC_2 (struct ad7124_state*,size_t,int) ;
 struct ad7124_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3, int VAR_4, long VAR_5)
{
 struct ad7124_state *VAR_6 = FUNC_3(VAR_1);
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

 switch (VAR_5) {
 case 129:
  if (VAR_4 != 0)
   return -VAR_0;

  return FUNC_2(VAR_6, VAR_2->address, VAR_3);
 case 128:
  if (VAR_3 != 0)
   return -VAR_0;

  if (VAR_6->channel_config[VAR_2->address].bipolar)
   VAR_9 = 1 << (VAR_2->scan_type.realbits - 1);
  else
   VAR_9 = 1 << VAR_2->scan_type.realbits;

  VAR_10 = VAR_6->channel_config[VAR_2->address].vref_mv * 1000000LL;
  VAR_7 = FUNC_0(VAR_10, VAR_9);
  VAR_8 = FUNC_0(VAR_7, VAR_4);

  return FUNC_1(VAR_6, VAR_2->address, VAR_8);
 default:
  return -VAR_0;
 }
}
