
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ina2xx_chip_info {int avg; int int_time_vshunt; int int_time_vbus; int shunt_resistor_uohm; int pga_gain_vshunt; int range_vbus; TYPE_1__* config; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
typedef int s16 ;
struct TYPE_2__ {int bus_voltage_shift; int shunt_voltage_lsb; int bus_voltage_lsb; int power_lsb_factor; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_1 (struct ina2xx_chip_info*) ;
 struct ina2xx_chip_info* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6, int *VAR_7, long VAR_8)
{
 int VAR_9;
 struct ina2xx_chip_info *VAR_10 = FUNC_2(VAR_4);
 unsigned int VAR_11;

 switch (VAR_8) {
 case 134:
  VAR_9 = FUNC_4(VAR_10->regmap, VAR_5->address, &VAR_11);
  if (VAR_9)
   return VAR_9;

  if (FUNC_3(VAR_5->address))
   *VAR_6 = (s16) VAR_11;
  else
   *VAR_6 = VAR_11;

  if (VAR_5->address == 131)
   *VAR_6 >>= VAR_10->config->bus_voltage_shift;

  return VAR_2;

 case 135:
  *VAR_6 = VAR_10->avg;
  return VAR_2;

 case 136:
  *VAR_6 = 0;
  if (VAR_5->address == 128)
   *VAR_7 = VAR_10->int_time_vshunt;
  else
   *VAR_7 = VAR_10->int_time_vbus;

  return VAR_3;

 case 133:




  *VAR_6 = FUNC_0(1000000, FUNC_1(VAR_10));

  return VAR_2;

 case 132:
  switch (VAR_5->address) {
  case 128:

   *VAR_6 = VAR_10->config->shunt_voltage_lsb;
   *VAR_7 = 1000000;
   return VAR_1;

  case 131:

   *VAR_6 = VAR_10->config->bus_voltage_lsb;
   *VAR_7 = 1000;
   return VAR_1;

  case 130:





   *VAR_6 = VAR_10->config->shunt_voltage_lsb;
   *VAR_7 = VAR_10->shunt_resistor_uohm;
   return VAR_1;

  case 129:





   *VAR_6 = VAR_10->config->power_lsb_factor *
          VAR_10->config->shunt_voltage_lsb;
   *VAR_7 = VAR_10->shunt_resistor_uohm;
   return VAR_1;
  }
  return -VAR_0;

 case 137:
  switch (VAR_5->address) {
  case 128:
   *VAR_6 = VAR_10->pga_gain_vshunt;
   *VAR_7 = 1000;
   return VAR_1;

  case 131:
   *VAR_6 = VAR_10->range_vbus == 32 ? 1 : 2;
   return VAR_2;
  }
  return -VAR_0;
 }

 return -VAR_0;
}
