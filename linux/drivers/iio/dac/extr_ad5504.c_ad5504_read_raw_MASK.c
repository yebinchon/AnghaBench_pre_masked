
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct ad5504_state {int vref_mv; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ad5504_state*,int ) ;
 struct ad5504_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5,
      int *VAR_6,
      long VAR_7)
{
 struct ad5504_state *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 129:
  VAR_9 = FUNC_0(VAR_8, VAR_4->address);
  if (VAR_9 < 0)
   return VAR_9;

  *VAR_5 = VAR_9;

  return VAR_2;
 case 128:
  *VAR_5 = VAR_8->vref_mv;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 }
 return -VAR_0;
}
