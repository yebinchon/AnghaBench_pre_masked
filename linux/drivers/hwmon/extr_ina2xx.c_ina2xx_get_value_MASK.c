
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ina2xx_data {unsigned int power_lsb_uW; int current_lsb_uA; TYPE_1__* config; } ;
typedef int s16 ;
struct TYPE_2__ {int shunt_div; unsigned int bus_voltage_shift; unsigned int bus_voltage_lsb; } ;


 int FUNC_0 (int,int) ;





 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ina2xx_data *VAR_0, u8 VAR_1,
       unsigned int VAR_2)
{
 int VAR_3;

 switch (VAR_1) {
 case 128:

  VAR_3 = FUNC_0((s16)VAR_2, VAR_0->config->shunt_div);
  break;
 case 132:
  VAR_3 = (VAR_2 >> VAR_0->config->bus_voltage_shift)
    * VAR_0->config->bus_voltage_lsb;
  VAR_3 = FUNC_0(VAR_3, 1000);
  break;
 case 129:
  VAR_3 = VAR_2 * VAR_0->power_lsb_uW;
  break;
 case 130:

  VAR_3 = (s16)VAR_2 * VAR_0->current_lsb_uA;
  VAR_3 = FUNC_0(VAR_3, 1000);
  break;
 case 131:
  VAR_3 = VAR_2;
  break;
 default:

  FUNC_1(1);
  VAR_3 = 0;
  break;
 }

 return VAR_3;
}
