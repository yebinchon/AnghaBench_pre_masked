
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct epic_softc {void* sc_led_dev_power; void* sc_led_dev_alert; int sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct epic_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct epic_softc*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct epic_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_6 (int ,struct epic_softc*,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 struct epic_softc *VAR_7;

 VAR_7 = FUNC_4(VAR_6);
 if (FUNC_2(VAR_6, VAR_5, VAR_7->sc_res)) {
  FUNC_5(VAR_6, "failed to allocate resources\n");
  FUNC_3(VAR_6, VAR_5, VAR_7->sc_res);
  return (VAR_0);
 }

 FUNC_1(VAR_7);

 if (VAR_2)
  FUNC_5(VAR_6, "version 0x%x\n",
      FUNC_0(VAR_7, VAR_1));

 VAR_7->sc_led_dev_alert = FUNC_6(VAR_3, VAR_7, "alert");
 VAR_7->sc_led_dev_power = FUNC_6(VAR_4, VAR_7, "power");

 return (0);
}
