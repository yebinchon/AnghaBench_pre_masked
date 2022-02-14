
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int type ;
struct fcu_softc {TYPE_2__* sc_fans; int sc_dev; } ;
typedef int phandle_t ;
typedef int location ;
typedef int id ;
typedef int device_t ;
struct TYPE_3__ {int zone; int min_rpm; int max_rpm; int (* read ) (struct pmac_fan*) ;int (* set ) (struct pmac_fan*,int) ;int default_rpm; int name; } ;
struct TYPE_4__ {scalar_t__ type; int id; TYPE_1__ fan; int setpoint; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct fcu_softc* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 phandle_t VAR_6;
 struct fcu_softc *VAR_7;
 u_int VAR_8[12];
 char VAR_9[144];
 char VAR_10[96];
 int VAR_11 = 0, VAR_12, VAR_13 = 0, VAR_14, VAR_15 = 0;

 VAR_7 = FUNC_1(VAR_5);

 VAR_6 = FUNC_3(VAR_5);


 VAR_14 = FUNC_0(VAR_6, "hwctrl-location", VAR_9,
         sizeof(VAR_9));
 while (VAR_13 < VAR_14) {
  if (VAR_7->sc_fans != ((void*)0)) {
   FUNC_5(VAR_7->sc_fans[VAR_11].fan.name, VAR_9 + VAR_13);
  }
  VAR_15 = FUNC_6(VAR_9 + VAR_13) + 1;
  VAR_13 += VAR_15;
  VAR_11++;
 }
 if (VAR_7->sc_fans == ((void*)0))
  return (VAR_11);


 VAR_13 = 0;
 VAR_11 = 0;
 VAR_15 = 0;
 VAR_14 = FUNC_0(VAR_6, "hwctrl-type", VAR_10, sizeof(VAR_10));
 while (VAR_13 < VAR_14) {
  if (FUNC_4(VAR_10 + VAR_13, "fan-rpm") == 0)
   VAR_7->sc_fans[VAR_11].type = VAR_1;
  else
   VAR_7->sc_fans[VAR_11].type = VAR_0;
  VAR_15 = FUNC_6(VAR_10 + VAR_13) + 1;
  VAR_13 += VAR_15;
  VAR_11++;
 }


 VAR_14 = FUNC_0(VAR_6, "hwctrl-id", VAR_8, sizeof(VAR_8));
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_7->sc_fans[VAR_12].id = ((VAR_8[VAR_12] >> 8) & 0x0f) % 8;


 VAR_14 = FUNC_0(VAR_6, "hwctrl-zone", VAR_8, sizeof(VAR_8));
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_7->sc_fans[VAR_12].fan.zone = VAR_8[VAR_12];


 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_7->sc_fans[VAR_12].dev = VAR_7->sc_dev;
  if (VAR_7->sc_fans[VAR_12].type == VAR_1) {
   VAR_7->sc_fans[VAR_12].fan.min_rpm = 4800 >> VAR_4;
   VAR_7->sc_fans[VAR_12].fan.max_rpm = 56000 >> VAR_4;
   VAR_7->sc_fans[VAR_12].setpoint =
       FUNC_2(&VAR_7->sc_fans[VAR_12]);
   VAR_7->sc_fans[VAR_12].fan.read =
       (int (*)(struct pmac_fan *))(FUNC_2);
   VAR_7->sc_fans[VAR_12].fan.set =
       (int (*)(struct pmac_fan *, int))(VAR_3);
  } else {
   VAR_7->sc_fans[VAR_12].fan.min_rpm = 30;
   VAR_7->sc_fans[VAR_12].fan.max_rpm = 100;
   VAR_7->sc_fans[VAR_12].fan.read = ((void*)0);
   VAR_7->sc_fans[VAR_12].fan.set =
       (int (*)(struct pmac_fan *, int))(VAR_2);
  }
  VAR_7->sc_fans[VAR_12].fan.default_rpm = VAR_7->sc_fans[VAR_12].fan.max_rpm;
 }

 return (VAR_11);
}
