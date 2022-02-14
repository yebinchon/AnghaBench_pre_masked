
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; int shift; } ;
struct iio_chan_spec {size_t address; TYPE_1__ scan_type; } ;
struct ad5449 {int* dac_cache; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;

 int FUNC_1 (struct iio_dev*,int ,int) ;
 struct ad5449* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
 struct iio_chan_spec const *VAR_2, int VAR_3, int VAR_4, long VAR_5)
{
 struct ad5449 *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  if (VAR_3 < 0 || VAR_3 >= (1 << VAR_2->scan_type.realbits))
   return -VAR_0;

  VAR_7 = FUNC_1(VAR_1,
   FUNC_0(VAR_2->address),
   VAR_3 << VAR_2->scan_type.shift);
  if (VAR_7 == 0)
   VAR_6->dac_cache[VAR_2->address] = VAR_3;
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
