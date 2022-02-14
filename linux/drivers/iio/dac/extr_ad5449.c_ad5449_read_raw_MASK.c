
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_bulk_data {int consumer; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {size_t address; size_t channel; TYPE_1__ scan_type; } ;
struct ad5449 {int* dac_cache; struct regulator_bulk_data* vref_reg; int has_sdo; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iio_dev*,int ,int*) ;
 struct ad5449* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
 struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ad5449 *VAR_8 = FUNC_2(VAR_3);
 struct regulator_bulk_data *VAR_9;
 int VAR_10;
 int VAR_11;

 switch (VAR_7) {
 case 129:
  if (VAR_8->has_sdo) {
   VAR_11 = FUNC_1(VAR_3,
    FUNC_0(VAR_4->address), VAR_5);
   if (VAR_11)
    return VAR_11;
   *VAR_5 &= 0xfff;
  } else {
   *VAR_5 = VAR_8->dac_cache[VAR_4->address];
  }

  return VAR_2;
 case 128:
  VAR_9 = &VAR_8->vref_reg[VAR_4->channel];
  VAR_10 = FUNC_3(VAR_9->consumer);
  if (VAR_10 < 0)
   return VAR_10;

  *VAR_5 = VAR_10 / 1000;
  *VAR_6 = VAR_4->scan_type.realbits;

  return VAR_1;
 default:
  break;
 }

 return -VAR_0;
}
