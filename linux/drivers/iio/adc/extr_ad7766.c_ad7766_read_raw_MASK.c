
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad7766 {TYPE_2__* chip_info; int mclk; TYPE_3__* reg; } ;
struct TYPE_6__ {struct regulator* consumer; } ;
struct TYPE_5__ {int decimation_factor; } ;


 size_t VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct ad7766* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct regulator*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
 const struct iio_chan_spec *VAR_5, int *VAR_6, int *VAR_7, long VAR_8)
{
 struct ad7766 *VAR_9 = FUNC_1(VAR_4);
 struct regulator *VAR_10 = VAR_9->reg[VAR_0].consumer;
 int VAR_11;

 switch (VAR_8) {
 case 128:
  VAR_11 = FUNC_2(VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
  *VAR_6 = VAR_11 / 1000;
  *VAR_7 = VAR_5->scan_type.realbits;
  return VAR_2;
 case 129:
  *VAR_6 = FUNC_0(VAR_9->mclk) /
   VAR_9->chip_info->decimation_factor;
  return VAR_3;
 }
 return -VAR_1;
}
