
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_4__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_2__ scan_type; int address; } ;
struct ad7887_state {TYPE_1__* chip_info; int reg; } ;
struct TYPE_3__ {int int_vref_mv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ad7887_state*,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad7887_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5,
      int *VAR_6,
      long VAR_7)
{
 int VAR_8;
 struct ad7887_state *VAR_9 = FUNC_4(VAR_3);

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_2(VAR_3);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_1(VAR_9, VAR_4->address);
  FUNC_3(VAR_3);

  if (VAR_8 < 0)
   return VAR_8;
  *VAR_5 = VAR_8 >> VAR_4->scan_type.shift;
  *VAR_5 &= FUNC_0(VAR_4->scan_type.realbits - 1, 0);
  return VAR_2;
 case 128:
  if (VAR_9->reg) {
   *VAR_5 = FUNC_5(VAR_9->reg);
   if (*VAR_5 < 0)
    return *VAR_5;
   *VAR_5 /= 1000;
  } else {
   *VAR_5 = VAR_9->chip_info->int_vref_mv;
  }

  *VAR_6 = VAR_4->scan_type.realbits;

  return VAR_1;
 }
 return -VAR_0;
}
