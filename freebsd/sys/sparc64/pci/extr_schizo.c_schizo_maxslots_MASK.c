
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct schizo_softc {scalar_t__ sc_mode; scalar_t__ sc_half; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct schizo_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2)
{
 struct schizo_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->sc_mode == VAR_1)
  return (VAR_3->sc_half == 0 ? 4 : 6);


 return (VAR_0);
}
