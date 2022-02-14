
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct macgpio_softc {int sc_gpios; } ;
struct macgpio_devinfo {scalar_t__ gpio_num; } ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 struct macgpio_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct macgpio_softc* FUNC_3 (int ) ;

void
FUNC_4(device_t VAR_0, uint8_t VAR_1)
{
 struct macgpio_softc *VAR_2;
 struct macgpio_devinfo *VAR_3;

 VAR_2 = FUNC_3(FUNC_2(VAR_0));
 VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->gpio_num < 0)
  return;

 FUNC_0(VAR_2->sc_gpios,VAR_3->gpio_num,VAR_1);
}
