
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qoriq_gpio_softc {int sc_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct qoriq_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, uint32_t VAR_3, unsigned int *VAR_4)
{
 struct qoriq_gpio_softc *VAR_5 = FUNC_2(VAR_2);

 if (!FUNC_0(VAR_3))
  return (VAR_0);

 *VAR_4 = (FUNC_1(VAR_5->sc_mem, VAR_1) >> (31 - VAR_3)) & 1;

 return (0);
}
