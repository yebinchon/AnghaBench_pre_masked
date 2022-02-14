
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_8__ {int realbits; } ;
struct iio_chan_spec {TYPE_4__ scan_type; } ;
struct ad7476_state {TYPE_3__* chip_info; int reg; } ;
struct TYPE_7__ {int int_vref_uv; TYPE_2__* channel; } ;
struct TYPE_5__ {int shift; int realbits; } ;
struct TYPE_6__ {TYPE_1__ scan_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ad7476_state*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad7476_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5,
      int *VAR_6,
      long VAR_7)
{
 int VAR_8;
 struct ad7476_state *VAR_9 = FUNC_4(VAR_3);
 int VAR_10;

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_2(VAR_3);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_1(VAR_9);
  FUNC_3(VAR_3);

  if (VAR_8 < 0)
   return VAR_8;
  *VAR_5 = (VAR_8 >> VAR_9->chip_info->channel[0].scan_type.shift) &
   FUNC_0(VAR_9->chip_info->channel[0].scan_type.realbits - 1, 0);
  return VAR_2;
 case 128:
  if (!VAR_9->chip_info->int_vref_uv) {
   VAR_10 = FUNC_5(VAR_9->reg);
   if (VAR_10 < 0)
    return VAR_10;
  } else {
   VAR_10 = VAR_9->chip_info->int_vref_uv;
  }
  *VAR_5 = VAR_10 / 1000;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 }
 return -VAR_0;
}
