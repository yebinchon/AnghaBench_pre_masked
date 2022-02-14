
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct macgpio_softc {int sc_gpios; } ;
struct macgpio_devinfo {scalar_t__ gpio_num; } ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__) ;
 struct macgpio_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct macgpio_softc* FUNC_3 (int ) ;

uint8_t
FUNC_4(device_t VAR_0)
{
 struct macgpio_softc *VAR_1;
 struct macgpio_devinfo *VAR_2;

 VAR_1 = FUNC_3(FUNC_2(VAR_0));
 VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->gpio_num < 0)
  return (0);

 return (FUNC_0(VAR_1->sc_gpios,VAR_2->gpio_num));
}
