
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qoriq_gpio_softc {int sc_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qoriq_gpio_softc*) ;
 int FUNC_1 (struct qoriq_gpio_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct qoriq_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, uint32_t VAR_3)
{
 struct qoriq_gpio_softc *VAR_4 = FUNC_5(VAR_2);
 uint32_t VAR_5;

 if (!FUNC_2(VAR_3))
  return (VAR_0);

 FUNC_0(VAR_4);

 VAR_5 = FUNC_3(VAR_4->sc_mem, VAR_1);
 VAR_5 ^= (1 << (31 - VAR_3));
 FUNC_4(VAR_4->sc_mem, VAR_1, VAR_5);

 FUNC_1(VAR_4);

 return (0);
}
