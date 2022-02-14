
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int type ;
struct smu_softc {struct smu_fan* sc_fans; } ;
struct TYPE_2__ {char min_rpm; char max_rpm; char zone; char default_rpm; char* name; } ;
struct smu_fan {scalar_t__ type; char reg; int rpm; int setpoint; TYPE_1__ fan; scalar_t__ old_style; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;
typedef int cell_t ;


 int FUNC_0 (int ,char*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct smu_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct smu_fan*,int *,int *) ;
 int FUNC_3 (struct smu_fan*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2, phandle_t VAR_3, int VAR_4)
{
 struct smu_fan *VAR_5;
 struct smu_softc *VAR_6;
 char VAR_7[32];

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = &VAR_6->sc_fans[VAR_4];

 FUNC_0(VAR_3, "device_type", VAR_7, sizeof(VAR_7));

 if (FUNC_4(VAR_7, "fan-rpm-control") == 0)
  VAR_5->type = VAR_1;
 else
  VAR_5->type = VAR_0;

 VAR_5->dev = VAR_2;
 VAR_5->old_style = 0;
 FUNC_0(VAR_3, "reg", &VAR_5->reg,
     sizeof(cell_t));
 FUNC_0(VAR_3, "min-value", &VAR_5->fan.min_rpm,
     sizeof(int));
 FUNC_0(VAR_3, "max-value", &VAR_5->fan.max_rpm,
     sizeof(int));
 FUNC_0(VAR_3, "zone", &VAR_5->fan.zone,
     sizeof(int));

 if (FUNC_0(VAR_3, "unmanaged-value",
         &VAR_5->fan.default_rpm,
         sizeof(int)) != sizeof(int))
  VAR_5->fan.default_rpm = VAR_5->fan.max_rpm;

 FUNC_0(VAR_3, "location", VAR_5->fan.name,
     sizeof(VAR_5->fan.name));

 if (VAR_5->type == VAR_1)
  VAR_5->setpoint = FUNC_3(VAR_5);
 else
  FUNC_2(VAR_5, &VAR_5->setpoint, &VAR_5->rpm);
}
