
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct maxim_thermocouple_data {TYPE_1__* chip; int spi; } ;
struct TYPE_4__ {int shift; scalar_t__ realbits; } ;
struct iio_chan_spec {int address; TYPE_2__ scan_type; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_3__ {unsigned int read_size; int status_bit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,void*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct maxim_thermocouple_data *VAR_1,
       struct iio_chan_spec const *VAR_2, int *VAR_3)
{
 unsigned int VAR_4 = VAR_1->chip->read_size;
 unsigned int VAR_5 = VAR_2->scan_type.shift + (VAR_2->address * 8);
 __be16 VAR_6;
 __be32 VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 2:
  VAR_8 = FUNC_3(VAR_1->spi, (void *)&VAR_6, VAR_4);
  *VAR_3 = FUNC_0(VAR_6);
  break;
 case 4:
  VAR_8 = FUNC_3(VAR_1->spi, (void *)&VAR_7, VAR_4);
  *VAR_3 = FUNC_1(VAR_7);
  break;
 default:
  VAR_8 = -VAR_0;
 }

 if (VAR_8)
  return VAR_8;


 if (*VAR_3 & VAR_1->chip->status_bit)
  return -VAR_0;

 *VAR_3 = FUNC_2(*VAR_3 >> VAR_5, VAR_2->scan_type.realbits - 1);

 return 0;
}
