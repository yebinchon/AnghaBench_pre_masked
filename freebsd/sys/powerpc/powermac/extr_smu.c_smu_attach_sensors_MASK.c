
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int type ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct smu_softc {int sc_nsensors; struct smu_sensor* sc_sensors; } ;
struct TYPE_2__ {char zone; char* name; int target_temp; int max_temp; int (* read ) (struct pmac_therm*) ;} ;
struct smu_sensor {scalar_t__ type; char reg; TYPE_1__ therm; int dev; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct sysctl_oid* FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int,int ,char*,char*) ;
 int FUNC_5 (struct sysctl_oid*) ;
 struct smu_softc* FUNC_6 (int ) ;
 struct sysctl_ctx_list* FUNC_7 (int ) ;
 struct sysctl_oid* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (char) ;
 struct smu_sensor* FUNC_11 (int,int ,int) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (char*,char*,char*,char const*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 char FUNC_16 (char) ;

__attribute__((used)) static void
FUNC_17(device_t VAR_13, phandle_t VAR_14)
{
 struct smu_sensor *VAR_15;
 struct smu_softc *VAR_16;
 struct sysctl_oid *VAR_17;
 struct sysctl_ctx_list *VAR_18;
 phandle_t VAR_19;
 char VAR_20[32];
 int VAR_21;

 VAR_16 = FUNC_6(VAR_13);
 VAR_16->sc_nsensors = 0;

 for (VAR_19 = FUNC_0(VAR_14); VAR_19 != 0; VAR_19 = FUNC_2(VAR_19))
  VAR_16->sc_nsensors++;

 if (VAR_16->sc_nsensors == 0) {
  FUNC_9(VAR_13, "WARNING: No sensors detected!\n");
  return;
 }

 VAR_16->sc_sensors = FUNC_11(VAR_16->sc_nsensors * sizeof(struct smu_sensor),
     VAR_3, VAR_4 | VAR_5);

 VAR_15 = VAR_16->sc_sensors;
 VAR_16->sc_nsensors = 0;

 VAR_18 = FUNC_7(VAR_13);
 VAR_17 = FUNC_3(VAR_18,
     FUNC_5(FUNC_8(VAR_13)), VAR_6, "sensors",
     VAR_1, 0, "SMU Sensor Information");

 for (VAR_19 = FUNC_0(VAR_14); VAR_19 != 0; VAR_19 = FUNC_2(VAR_19)) {
  char VAR_22[40], VAR_23[40];
  const char *VAR_24;

  VAR_15->dev = VAR_13;
  FUNC_1(VAR_19, "device_type", VAR_20, sizeof(VAR_20));

  if (FUNC_14(VAR_20, "current-sensor") == 0) {
   VAR_15->type = VAR_7;
   VAR_24 = "mA";
  } else if (FUNC_14(VAR_20, "temp-sensor") == 0) {
   VAR_15->type = VAR_9;
   VAR_24 = "C";
  } else if (FUNC_14(VAR_20, "voltage-sensor") == 0) {
   VAR_15->type = VAR_10;
   VAR_24 = "mV";
  } else if (FUNC_14(VAR_20, "power-sensor") == 0) {
   VAR_15->type = VAR_8;
   VAR_24 = "mW";
  } else {
   continue;
  }

  FUNC_1(VAR_19, "reg", &VAR_15->reg, sizeof(cell_t));
  FUNC_1(VAR_19, "zone", &VAR_15->therm.zone, sizeof(int));
  FUNC_1(VAR_19, "location", VAR_15->therm.name,
      sizeof(VAR_15->therm.name));

  for (VAR_21 = 0; VAR_21 < FUNC_15(VAR_15->therm.name); VAR_21++) {
   VAR_22[VAR_21] = FUNC_16(VAR_15->therm.name[VAR_21]);
   if (FUNC_10(VAR_22[VAR_21]))
    VAR_22[VAR_21] = '_';
  }
  VAR_22[VAR_21] = 0;

  FUNC_13(VAR_23,"%s (%s)", VAR_15->therm.name, VAR_24);

  FUNC_4(VAR_18, FUNC_5(VAR_17), VAR_6,
      VAR_22, VAR_2 | VAR_1 | VAR_0,
      VAR_13, VAR_16->sc_nsensors, VAR_12,
      (VAR_15->type == VAR_9) ? "IK" : "I", VAR_23);

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
}
