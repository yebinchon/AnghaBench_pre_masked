
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct smu_softc {int sc_nfans; struct smu_fan* sc_fans; } ;
struct TYPE_2__ {int (* read ) (struct pmac_fan*) ;int (* set ) (struct pmac_fan*,int) ;int * name; int max_rpm; int min_rpm; } ;
struct smu_fan {scalar_t__ type; TYPE_1__ fan; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 scalar_t__ VAR_11 ;
 struct smu_softc* FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int *,scalar_t__) ;
 scalar_t__ FUNC_8 (char) ;
 struct smu_fan* FUNC_9 (int,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (int *) ;
 char FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(device_t VAR_16, phandle_t VAR_17)
{
 struct smu_fan *VAR_18;
 struct smu_softc *VAR_19;
 struct sysctl_oid *VAR_20, *VAR_21;
 struct sysctl_ctx_list *VAR_22;
 char VAR_23[32];
 int VAR_24, VAR_25;

 VAR_19 = FUNC_4(VAR_16);


 VAR_19->sc_nfans = FUNC_11(VAR_16);
 if (VAR_19->sc_nfans == 0)
  return;


 VAR_19->sc_fans = FUNC_9(VAR_19->sc_nfans * sizeof(struct smu_fan), VAR_4,
     VAR_5 | VAR_6);


 FUNC_11(VAR_16);


 for (VAR_24 = 0; VAR_24 < VAR_19->sc_nfans; VAR_24++)
  FUNC_10(&VAR_19->sc_fans[VAR_24].fan);

 VAR_22 = FUNC_5(VAR_16);
 VAR_21 = FUNC_1(VAR_22,
     FUNC_3(FUNC_6(VAR_16)), VAR_7, "fans",
     VAR_1, 0, "SMU Fan Information");


 for (VAR_24 = 0; VAR_24 < VAR_19->sc_nfans; VAR_24++) {
  VAR_18 = &VAR_19->sc_fans[VAR_24];
  for (VAR_25 = 0; VAR_25 < FUNC_12(VAR_18->fan.name); VAR_25++) {
   VAR_23[VAR_25] = FUNC_13(VAR_18->fan.name[VAR_25]);
   if (FUNC_8(VAR_23[VAR_25]))
    VAR_23[VAR_25] = '_';
  }
  VAR_23[VAR_25] = 0;
  if (VAR_18->type == VAR_8) {
   VAR_20 = FUNC_1(VAR_22,
           FUNC_3(VAR_21),
           VAR_7, VAR_23,
           VAR_1, 0, "Fan Information");
   FUNC_0(VAR_22, FUNC_3(VAR_20), VAR_7,
           "minrpm", VAR_1,
           &VAR_18->fan.min_rpm, 0,
           "Minimum allowed RPM");
   FUNC_0(VAR_22, FUNC_3(VAR_20), VAR_7,
           "maxrpm", VAR_1,
           &VAR_18->fan.max_rpm, 0,
           "Maximum allowed RPM");
   FUNC_2(VAR_22, FUNC_3(VAR_20), VAR_7,
     "rpm",VAR_3 | VAR_2 |
     VAR_0, VAR_16, VAR_24,
     VAR_15, "I", "Fan RPM");

   VAR_18->fan.read = (int (*)(struct pmac_fan *))VAR_12;
   VAR_18->fan.set = (int (*)(struct pmac_fan *, int))VAR_14;

  } else {
   VAR_20 = FUNC_1(VAR_22,
           FUNC_3(VAR_21),
           VAR_7, VAR_23,
           VAR_1, 0, "Fan Information");
   FUNC_0(VAR_22, FUNC_3(VAR_20), VAR_7,
           "minpwm", VAR_1,
           &VAR_18->fan.min_rpm, 0,
           "Minimum allowed PWM in %");
   FUNC_0(VAR_22, FUNC_3(VAR_20), VAR_7,
           "maxpwm", VAR_1,
           &VAR_18->fan.max_rpm, 0,
           "Maximum allowed PWM in %");
   FUNC_2(VAR_22, FUNC_3(VAR_20), VAR_7,
     "pwm",VAR_3 | VAR_2 |
     VAR_0, VAR_16,
     VAR_9 | VAR_24,
     VAR_15, "I", "Fan PWM in %");
   FUNC_2(VAR_22, FUNC_3(VAR_20), VAR_7,
     "rpm",VAR_3 | VAR_1 |
     VAR_0, VAR_16,
     VAR_10 | VAR_24,
     VAR_15, "I", "Fan RPM");
   VAR_18->fan.read = ((void*)0);
   VAR_18->fan.set = (int (*)(struct pmac_fan *, int))VAR_13;

  }
  if (VAR_11)
   FUNC_7(VAR_16, "Fan: %s type: %d\n",
          VAR_18->fan.name, VAR_18->type);
 }
}
