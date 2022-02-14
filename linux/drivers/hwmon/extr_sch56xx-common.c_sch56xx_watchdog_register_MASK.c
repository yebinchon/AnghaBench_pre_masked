
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int timeout; int min_timeout; int max_timeout; int status; struct device* parent; int * ops; TYPE_1__* info; } ;
struct TYPE_4__ {int options; int firmware_version; int identity; } ;
struct sch56xx_watchdog_data {int watchdog_preset; int watchdog_control; int watchdog_output_enable; TYPE_2__ wddev; TYPE_1__ wdinfo; struct mutex* io_lock; int addr; } ;
struct mutex {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sch56xx_watchdog_data*) ;
 struct sch56xx_watchdog_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_11 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,struct sch56xx_watchdog_data*) ;

struct sch56xx_watchdog_data *FUNC_11(struct device *VAR_12,
 u16 VAR_13, u32 VAR_14, struct mutex *VAR_15, int VAR_16)
{
 struct sch56xx_watchdog_data *VAR_17;
 int VAR_18, VAR_19, VAR_20;


 FUNC_2(VAR_15);
 VAR_19 =
  FUNC_6(VAR_13, VAR_1);
 VAR_20 =
  FUNC_6(VAR_13, VAR_2);
 FUNC_3(VAR_15);

 if (VAR_19 < 0)
  return ((void*)0);
 if (VAR_20 < 0)
  return ((void*)0);
 if (VAR_16 && !(VAR_20 & VAR_3)) {
  FUNC_5("Watchdog not enabled by BIOS, not registering\n");
  return ((void*)0);
 }

 VAR_17 = FUNC_1(sizeof(struct sch56xx_watchdog_data), VAR_0);
 if (!VAR_17)
  return ((void*)0);

 VAR_17->addr = VAR_13;
 VAR_17->io_lock = VAR_15;

 FUNC_8(VAR_17->wdinfo.identity, "sch56xx watchdog",
  sizeof(VAR_17->wdinfo.identity));
 VAR_17->wdinfo.firmware_version = VAR_14;
 VAR_17->wdinfo.options = VAR_5 | VAR_7;
 if (!VAR_10)
  VAR_17->wdinfo.options |= VAR_6;

 VAR_17->wddev.info = &VAR_17->wdinfo;
 VAR_17->wddev.ops = &VAR_11;
 VAR_17->wddev.parent = VAR_12;
 VAR_17->wddev.timeout = 60;
 VAR_17->wddev.min_timeout = 1;
 VAR_17->wddev.max_timeout = 255 * 60;
 if (VAR_10)
  FUNC_7(VAR_9, &VAR_17->wddev.status);
 if (VAR_20 & VAR_3)
  FUNC_7(VAR_8, &VAR_17->wddev.status);




 if (VAR_19 & VAR_4)
  VAR_17->watchdog_preset = 60;
 else
  VAR_17->watchdog_preset = 1;

 VAR_17->watchdog_control = VAR_19;
 VAR_17->watchdog_output_enable = VAR_20;

 FUNC_10(&VAR_17->wddev, VAR_17);
 VAR_18 = FUNC_9(&VAR_17->wddev);
 if (VAR_18) {
  FUNC_4("Registering watchdog chardev: %d\n", VAR_18);
  FUNC_0(VAR_17);
  return ((void*)0);
 }

 return VAR_17;
}
