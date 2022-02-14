
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_7__ {scalar_t__ ac_status; int mainbat_percent; int mainbat_voltage; int mainbat_status; } ;
struct TYPE_8__ {scalar_t__ charge_mode; int flags; int dev; TYPE_3__ battstat; TYPE_2__* machinfo; scalar_t__ charge_start_time; } ;
struct TYPE_6__ {int (* read_devdata ) (int ) ;TYPE_1__* bat_levels_noac; int batfull_irq; } ;
struct TYPE_5__ {int voltage; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_11 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;
 int VAR_12 ;
 TYPE_4__ VAR_13 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_11(struct work_struct *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19;

 if (!VAR_13.machinfo)
  return;

 VAR_13.battstat.ac_status = (VAR_13.machinfo->read_devdata(VAR_10) ? VAR_1 : VAR_0);


 if (!VAR_13.machinfo->batfull_irq && (VAR_13.charge_mode == VAR_5)
   && FUNC_10(VAR_11, VAR_13.charge_start_time + VAR_9))
  FUNC_6(&VAR_14, 0);

 for (VAR_19 = 0; VAR_19 < 5; VAR_19++) {
  VAR_16 = VAR_13.machinfo->read_devdata(VAR_8);
  if (VAR_16 > 0)
   break;
 }
 if (VAR_16 <= 0) {
  VAR_16 = VAR_13.machinfo->bat_levels_noac[0].voltage;
  FUNC_3(VAR_13.dev, "Warning: Cannot read main battery!\n");
 }

 VAR_16 = FUNC_7(VAR_16);
 VAR_18 = FUNC_4(VAR_16);
 VAR_17 = FUNC_5(VAR_16);



 if ((VAR_13.battstat.ac_status == VAR_1)
     || (VAR_18 == VAR_3)
     || VAR_17 <= VAR_13.battstat.mainbat_percent) {
  VAR_13.battstat.mainbat_voltage = VAR_16;
  VAR_13.battstat.mainbat_status = VAR_18;
  VAR_13.battstat.mainbat_percent = VAR_17;
 }

 FUNC_1(VAR_13.dev, "Battery: voltage: %d, status: %d, percentage: %d, time: %ld\n", VAR_16,
   VAR_13.battstat.mainbat_status, VAR_13.battstat.mainbat_percent, VAR_11);


 if ((VAR_13.battstat.ac_status != VAR_1)
      && (VAR_13.battstat.mainbat_status == VAR_2)
      && !(VAR_13.flags & VAR_6)) {
  VAR_13.flags |= VAR_6;
  FUNC_2(VAR_13.dev, "Fatal Off\n");
  FUNC_0(VAR_4);
 }

 FUNC_6(&VAR_12, VAR_7);
}
