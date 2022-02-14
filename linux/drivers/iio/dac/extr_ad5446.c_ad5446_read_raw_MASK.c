
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad5446_state {int cached_val; int vref_mv; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct ad5446_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5,
      int *VAR_6,
      long VAR_7)
{
 struct ad5446_state *VAR_8 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 129:
  *VAR_5 = VAR_8->cached_val;
  return VAR_2;
 case 128:
  *VAR_5 = VAR_8->vref_mv;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 }
 return -VAR_0;
}
