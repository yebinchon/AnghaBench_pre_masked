
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct TYPE_3__ {int realbits; int shift; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad5446_state {int cached_val; TYPE_2__* chip_info; int pwr_down; } ;
struct TYPE_4__ {int (* write ) (struct ad5446_state*,int) ;} ;


 int VAR_0 ;

 struct ad5446_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ad5446_state*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
          struct iio_chan_spec const *VAR_2,
          int VAR_3,
          int VAR_4,
          long VAR_5)
{
 struct ad5446_state *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = 0;

 switch (VAR_5) {
 case 128:
  if (VAR_3 >= (1 << VAR_2->scan_type.realbits) || VAR_3 < 0)
   return -VAR_0;

  VAR_3 <<= VAR_2->scan_type.shift;
  FUNC_1(&VAR_1->mlock);
  VAR_6->cached_val = VAR_3;
  if (!VAR_6->pwr_down)
   VAR_7 = VAR_6->chip_info->write(VAR_6, VAR_3);
  FUNC_2(&VAR_1->mlock);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
