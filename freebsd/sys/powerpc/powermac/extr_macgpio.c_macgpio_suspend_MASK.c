
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macgpio_softc {int sc_gpios; void** sc_saved_extint_gpios; void** sc_saved_gpios; void** sc_saved_gpio_levels; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,scalar_t__) ;
 void* FUNC_1 (int ,int ) ;
 struct macgpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6)
{
 struct macgpio_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6);
 VAR_7->sc_saved_gpio_levels[0] = FUNC_1(VAR_7->sc_gpios, VAR_4);
 VAR_7->sc_saved_gpio_levels[1] = FUNC_1(VAR_7->sc_gpios, VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_7->sc_saved_gpios[VAR_8] = FUNC_0(VAR_7->sc_gpios, VAR_0 + VAR_8);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_7->sc_saved_extint_gpios[VAR_8] = FUNC_0(VAR_7->sc_gpios, VAR_2 + VAR_8);

 return (0);
}
