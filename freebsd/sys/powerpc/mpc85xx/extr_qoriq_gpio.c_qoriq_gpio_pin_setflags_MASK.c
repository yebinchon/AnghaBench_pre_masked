
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qoriq_gpio_softc {int sc_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qoriq_gpio_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qoriq_gpio_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct qoriq_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
 struct qoriq_gpio_softc *VAR_9 = FUNC_5(VAR_6);
 uint32_t VAR_10;

 if (!FUNC_2(VAR_7))
  return (VAR_0);

 if ((VAR_8 & (VAR_3 | VAR_5)) ==
     (VAR_3 | VAR_5))
  return (VAR_0);

 FUNC_0(VAR_9);
 if (VAR_8 & VAR_3) {
  VAR_10 = FUNC_3(VAR_9->sc_mem, VAR_1);
  VAR_10 &= ~(1 << (31 - VAR_7));
  FUNC_4(VAR_9->sc_mem, VAR_1, VAR_10);
 }
 else if (VAR_8 & VAR_5) {
  VAR_10 = FUNC_3(VAR_9->sc_mem, VAR_1);
  VAR_10 |= (1 << (31 - VAR_7));
  FUNC_4(VAR_9->sc_mem, VAR_1, VAR_10);
  VAR_10 = FUNC_3(VAR_9->sc_mem, VAR_2);
  if (VAR_8 & VAR_4)
   VAR_10 |= (1 << (31 - VAR_7));
  else
   VAR_10 &= ~(1 << (31 - VAR_7));
  FUNC_4(VAR_9->sc_mem, VAR_2, VAR_10);
 }
 FUNC_1(VAR_9);
 return (0);
}
