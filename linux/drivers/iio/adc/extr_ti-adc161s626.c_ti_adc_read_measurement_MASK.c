
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_adc_data {int read_size; int shift; int spi; } ;
struct TYPE_2__ {scalar_t__ realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,void*,int) ;

__attribute__((used)) static int FUNC_4(struct ti_adc_data *VAR_1,
       struct iio_chan_spec const *VAR_2, int *VAR_3)
{
 int VAR_4;

 switch (VAR_1->read_size) {
 case 2: {
  __be16 VAR_5;

  VAR_4 = FUNC_3(VAR_1->spi, (void *) &VAR_5, 2);
  if (VAR_4)
   return VAR_4;

  *VAR_3 = FUNC_0(VAR_5);
  break;
 }
 case 3: {
  __be32 VAR_6;

  VAR_4 = FUNC_3(VAR_1->spi, (void *) &VAR_6, 3);
  if (VAR_4)
   return VAR_4;

  *VAR_3 = FUNC_1(VAR_6) >> 8;
  break;
 }
 default:
  return -VAR_0;
 }

 *VAR_3 = FUNC_2(*VAR_3 >> VAR_1->shift, VAR_2->scan_type.realbits - 1);

 return 0;
}
