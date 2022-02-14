
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct resource {int dummy; } ;
struct macgpio_softc {int sc_gpios; } ;
struct macgpio_devinfo {scalar_t__ gpio_num; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,struct resource*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 struct macgpio_devinfo* FUNC_3 (int ) ;
 struct macgpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
      struct resource *VAR_6)
{
 struct macgpio_softc *VAR_7;
 struct macgpio_devinfo *VAR_8;
 u_char VAR_9;

 VAR_7 = FUNC_4(VAR_2);
 VAR_8 = FUNC_3(VAR_3);

 if (VAR_4 != VAR_1)
  return VAR_0;

 if (VAR_8->gpio_num >= 0) {
  VAR_9 = FUNC_1(VAR_7->sc_gpios,VAR_8->gpio_num);
  VAR_9 |= 0x80;
  FUNC_2(VAR_7->sc_gpios,VAR_8->gpio_num,VAR_9);
 }

 return (FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6));
}
