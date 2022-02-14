
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbled_softc {int * sc_led; int sc_ledpin; int * sc_gpio; } ;
typedef int phandle_t ;
typedef int gp ;
typedef int device_t ;
typedef int cell_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int) ;
 struct rbled_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ,struct rbled_softc*,char*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct rbled_softc *VAR_3;
 phandle_t VAR_4;
 cell_t VAR_5[2];

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_5(VAR_2);

 if (FUNC_1(VAR_4, "user_led", VAR_5, sizeof(VAR_5)) <= 0)
  return (VAR_0);

 VAR_3->sc_gpio = FUNC_0(VAR_5[0]);
 if (VAR_3->sc_gpio == ((void*)0)) {
  FUNC_3(VAR_2, "No GPIO resource found!\n");
  return (VAR_0);
 }
 VAR_3->sc_ledpin = VAR_5[1];

 VAR_3->sc_led = FUNC_4(VAR_1, VAR_3, "user_led");

 if (VAR_3->sc_led == ((void*)0))
  return (VAR_0);

 return (0);
}
