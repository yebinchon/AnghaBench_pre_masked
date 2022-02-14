
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_3__ {int realbits; } ;
struct iio_chan_spec {size_t address; TYPE_1__ scan_type; } ;
struct ad7124_state {TYPE_2__* channel_config; int sd; } ;
struct TYPE_4__ {int ain; int pga_bits; int vref_mv; int odr; int bipolar; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 struct ad7124_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ad7124_state *VAR_8 = FUNC_4(VAR_3);
 int VAR_9, VAR_10;

 switch (VAR_7) {
 case 130:
  VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(&VAR_8->sd,
          FUNC_0(VAR_4->address), 2,
          VAR_8->channel_config[VAR_4->address].ain |
          FUNC_1(0));
  if (VAR_10 < 0)
   return VAR_10;

  return VAR_2;
 case 128:
  VAR_9 = VAR_8->channel_config[VAR_4->address].pga_bits;
  *VAR_5 = VAR_8->channel_config[VAR_4->address].vref_mv;
  if (VAR_8->channel_config[VAR_4->address].bipolar)
   *VAR_6 = VAR_4->scan_type.realbits - 1 + VAR_9;
  else
   *VAR_6 = VAR_4->scan_type.realbits + VAR_9;

  return VAR_1;
 case 131:
  if (VAR_8->channel_config[VAR_4->address].bipolar)
   *VAR_5 = -(1 << (VAR_4->scan_type.realbits - 1));
  else
   *VAR_5 = 0;

  return VAR_2;
 case 129:
  *VAR_5 = VAR_8->channel_config[VAR_4->address].odr;

  return VAR_2;
 default:
  return -VAR_0;
 }
}
