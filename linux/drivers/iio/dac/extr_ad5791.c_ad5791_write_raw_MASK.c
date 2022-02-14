
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {int address; TYPE_1__ scan_type; } ;
struct ad5791_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

 int FUNC_1 (struct ad5791_state*,int ,int) ;
 struct ad5791_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3,
       int VAR_4,
       long VAR_5)
{
 struct ad5791_state *VAR_6 = FUNC_2(VAR_1);

 switch (VAR_5) {
 case 128:
  VAR_3 &= FUNC_0(VAR_2->scan_type.realbits - 1, 0);
  VAR_3 <<= VAR_2->scan_type.shift;

  return FUNC_1(VAR_6, VAR_2->address, VAR_3);

 default:
  return -VAR_0;
 }
}
