
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {int address; TYPE_1__ scan_type; } ;
struct ad5504_state {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct ad5504_state*,int ,int) ;
 struct ad5504_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
          struct iio_chan_spec const *VAR_2,
          int VAR_3,
          int VAR_4,
          long VAR_5)
{
 struct ad5504_state *VAR_6 = FUNC_1(VAR_1);

 switch (VAR_5) {
 case 128:
  if (VAR_3 >= (1 << VAR_2->scan_type.realbits) || VAR_3 < 0)
   return -VAR_0;

  return FUNC_0(VAR_6, VAR_2->address, VAR_3);
 default:
  return -VAR_0;
 }
}
