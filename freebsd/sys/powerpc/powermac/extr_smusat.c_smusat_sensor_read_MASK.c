
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smusat_softc {int sc_last_update; int* sc_cache; } ;
struct smu_sensor {int reg; int type; int dev; } ;
typedef int device_t ;


 int VAR_0 ;




 struct smusat_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct smu_sensor *VAR_2)
{
 int VAR_3, VAR_4;
 device_t VAR_5;
 struct smusat_softc *VAR_6;

 VAR_5 = VAR_2->dev;
 VAR_6 = FUNC_0(VAR_5);
 VAR_4 = 0;

 if (VAR_1 - VAR_6->sc_last_update > 1)
  VAR_4 = FUNC_1(VAR_5);
 if (VAR_4)
  return (-VAR_4);

 VAR_3 = (VAR_6->sc_cache[VAR_2->reg*2] << 8) +
     VAR_6->sc_cache[VAR_2->reg*2 + 1];
 if (VAR_3 == 0xffff) {
  VAR_6->sc_last_update = 0;
  return (-VAR_0);
 }

 switch (VAR_2->type) {
 case 129:

  VAR_3 <<= 10;

  VAR_3 = 10*(VAR_3 >> 16) + ((10*(VAR_3 & 0xffff)) >> 16) + 2731;
  break;
 case 128:

  VAR_3 <<= 4;

  VAR_3 >>= 16;
  break;
 case 131:

  VAR_3 <<= 8;

  VAR_3 >>= 16;
  break;
 case 130:

  break;
 }

 return (VAR_3);
}
