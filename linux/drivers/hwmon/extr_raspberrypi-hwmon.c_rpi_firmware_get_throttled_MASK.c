
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int value ;
typedef int u32 ;
struct rpi_hwmon_data {int last_throttled; TYPE_1__* hwmon_dev; int fw; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_5(struct rpi_hwmon_data *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;


 VAR_5 = 0xffff;

 VAR_6 = FUNC_3(VAR_2->fw, VAR_0,
        &VAR_5, sizeof(VAR_5));
 if (VAR_6) {
  FUNC_1(VAR_2->hwmon_dev, "Failed to get throttled (%d)\n",
        VAR_6);
  return;
 }

 VAR_3 = VAR_5 & VAR_1;
 VAR_4 = VAR_2->last_throttled & VAR_1;
 VAR_2->last_throttled = VAR_5;

 if (VAR_3 == VAR_4)
  return;

 if (VAR_3)
  FUNC_0(VAR_2->hwmon_dev, "Undervoltage detected!\n");
 else
  FUNC_2(VAR_2->hwmon_dev, "Voltage normalised\n");

 FUNC_4(&VAR_2->hwmon_dev->kobj, ((void*)0), "in0_lcrit_alarm");
}
