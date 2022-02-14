
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int type ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct smusat_softc {int sc_nsensors; struct smu_sensor* sc_sensors; scalar_t__ sc_last_update; } ;
struct TYPE_2__ {char zone; char* name; int target_temp; int max_temp; int (* read ) (struct pmac_therm*) ;} ;
struct smu_sensor {char reg; scalar_t__ type; TYPE_1__ therm; int dev; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int,int ,char*,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 struct smusat_softc* FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (char) ;
 struct smu_sensor* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (char*,char*,char*,char const*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 char FUNC_16 (char) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_13)
{
 phandle_t VAR_14;
 struct smu_sensor *VAR_15;
 struct smusat_softc *VAR_16;
 struct sysctl_oid *VAR_17;
 struct sysctl_ctx_list *VAR_18;
 char VAR_19[32];
 int VAR_20;

 VAR_16 = FUNC_5(VAR_13);
 VAR_16->sc_nsensors = 0;
 VAR_16->sc_last_update = 0;

 for (VAR_14 = FUNC_0(FUNC_11(VAR_13)); VAR_14 != 0;
     VAR_14 = FUNC_2(VAR_14))
  VAR_16->sc_nsensors++;

 if (VAR_16->sc_nsensors == 0) {
  FUNC_8(VAR_13, "WARNING: No sensors detected!\n");
  return (-1);
 }

 VAR_16->sc_sensors = FUNC_10(VAR_16->sc_nsensors * sizeof(struct smu_sensor),
     VAR_3, VAR_4 | VAR_5);

 VAR_15 = VAR_16->sc_sensors;
 VAR_16->sc_nsensors = 0;

 VAR_18 = FUNC_6(VAR_13);
 VAR_17 = FUNC_7(VAR_13);

 for (VAR_14 = FUNC_0(FUNC_11(VAR_13)); VAR_14 != 0;
     VAR_14 = FUNC_2(VAR_14)) {
  char VAR_21[40], VAR_22[40];
  const char *VAR_23;

  VAR_15->dev = VAR_13;
  VAR_15->reg = 0;
  FUNC_1(VAR_14, "reg", &VAR_15->reg, sizeof(VAR_15->reg));
  if (VAR_15->reg < 0x30)
   continue;
  VAR_15->reg -= 0x30;

  FUNC_1(VAR_14, "zone", &VAR_15->therm.zone, sizeof(int));
  FUNC_1(VAR_14, "location", VAR_15->therm.name,
      sizeof(VAR_15->therm.name));

  FUNC_1(VAR_14, "device_type", VAR_19, sizeof(VAR_19));

  if (FUNC_14(VAR_19, "current-sensor") == 0) {
   VAR_15->type = VAR_7;
   VAR_23 = "mA";
  } else if (FUNC_14(VAR_19, "temp-sensor") == 0) {
   VAR_15->type = VAR_9;
   VAR_23 = "C";
  } else if (FUNC_14(VAR_19, "voltage-sensor") == 0) {
   VAR_15->type = VAR_10;
   VAR_23 = "mV";
  } else if (FUNC_14(VAR_19, "power-sensor") == 0) {
   VAR_15->type = VAR_8;
   VAR_23 = "mW";
  } else {
   continue;
  }

  for (VAR_20 = 0; VAR_20 < FUNC_15(VAR_15->therm.name); VAR_20++) {
   VAR_21[VAR_20] = FUNC_16(VAR_15->therm.name[VAR_20]);
   if (FUNC_9(VAR_21[VAR_20]))
    VAR_21[VAR_20] = '_';
  }
  VAR_21[VAR_20] = 0;

  FUNC_13(VAR_22,"%s (%s)", VAR_15->therm.name, VAR_23);
  FUNC_3(VAR_18, FUNC_4(VAR_17), VAR_6,
      VAR_21, VAR_2 | VAR_1 | VAR_0, VAR_13,
      VAR_16->sc_nsensors, VAR_12,
      (VAR_15->type == VAR_9) ? "IK" : "I", VAR_22);

  if (VAR_15->type == VAR_9) {

   VAR_15->therm.target_temp = 500 + 2731;
   VAR_15->therm.max_temp = 900 + 2731;
   VAR_15->therm.read =
       (int (*)(struct pmac_therm *))VAR_11;
   FUNC_12(&VAR_15->therm);
  }

  VAR_15++;
  VAR_16->sc_nsensors++;
 }

 return (0);
}
