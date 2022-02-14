
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_softc {int sc_cpu_diode_scale; int sc_cpu_volt_scale; int sc_cpu_volt_offset; int sc_cpu_curr_scale; int sc_cpu_curr_offset; int sc_slots_pow_scale; int sc_slots_pow_offset; int sc_cpu_diode_offset; } ;
struct smu_sensor {int reg; int type; int dev; } ;
struct smu_cmd {int len; int* data; int cmd; } ;
typedef int int64_t ;
typedef int device_t ;


 int VAR_0 ;




 struct smu_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct smu_cmd*,int) ;

__attribute__((used)) static int
FUNC_2(struct smu_sensor *VAR_1)
{
 device_t VAR_2 = VAR_1->dev;
 struct smu_cmd VAR_3;
 struct smu_softc *VAR_4;
 int64_t VAR_5;
 int VAR_6;

 VAR_3.cmd = VAR_0;
 VAR_3.len = 1;
 VAR_3.data[0] = VAR_1->reg;
 VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_2, &VAR_3, 1);
 if (VAR_6 != 0)
  return (-1);

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = (VAR_3.data[0] << 8) | VAR_3.data[1];

 switch (VAR_1->type) {
 case 129:
  VAR_5 *= VAR_4->sc_cpu_diode_scale;
  VAR_5 >>= 3;
  VAR_5 += ((int64_t)VAR_4->sc_cpu_diode_offset) << 9;
  VAR_5 <<= 1;


  VAR_5 = 10*(VAR_5 >> 16) + ((10*(VAR_5 & 0xffff)) >> 16) + 2731;
  break;
 case 128:
  VAR_5 *= VAR_4->sc_cpu_volt_scale;
  VAR_5 += VAR_4->sc_cpu_volt_offset;
  VAR_5 <<= 4;


  VAR_5 *= 15625;
  VAR_5 /= 1024;
  VAR_5 /= 1000;
  break;
 case 131:
  VAR_5 *= VAR_4->sc_cpu_curr_scale;
  VAR_5 += VAR_4->sc_cpu_curr_offset;
  VAR_5 <<= 4;


  VAR_5 *= 15625;
  VAR_5 /= 1024;
  VAR_5 /= 1000;
  break;
 case 130:
  VAR_5 *= VAR_4->sc_slots_pow_scale;
  VAR_5 += VAR_4->sc_slots_pow_offset;
  VAR_5 <<= 4;


  VAR_5 *= 15625;
  VAR_5 /= 1024;
  VAR_5 /= 1000;
  break;
 }

 return (VAR_5);
}
