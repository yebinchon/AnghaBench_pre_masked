
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sch5627_data {int control; int update_lock; int addr; int watchdog; int * hwmon_dev; int last_battery; } ;
struct TYPE_5__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct sch5627_data* FUNC_2 (TYPE_1__*,int,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int VAR_15 ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct sch5627_data*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int,int,...) ;
 int VAR_16 ;
 int FUNC_9 (struct sch5627_data*) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_1__*,int ,int,int *,int) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_17)
{
 struct sch5627_data *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_18 = FUNC_2(&VAR_17->dev, sizeof(struct sch5627_data),
       VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_18->addr = FUNC_5(VAR_17, VAR_4, 0)->start;
 FUNC_4(&VAR_18->update_lock);
 FUNC_6(VAR_17, VAR_18);

 VAR_23 = FUNC_11(VAR_18->addr, VAR_12);
 if (VAR_23 < 0) {
  VAR_19 = VAR_23;
  goto error;
 }
 if (VAR_23 != VAR_6) {
  FUNC_7("invalid %s id: 0x%02X (expected 0x%02X)\n", "hwmon",
         VAR_23, VAR_6);
  VAR_19 = -VAR_1;
  goto error;
 }

 VAR_23 = FUNC_11(VAR_18->addr, VAR_10);
 if (VAR_23 < 0) {
  VAR_19 = VAR_23;
  goto error;
 }
 if (VAR_23 != VAR_5) {
  FUNC_7("invalid %s id: 0x%02X (expected 0x%02X)\n", "company",
         VAR_23, VAR_5);
  VAR_19 = -VAR_1;
  goto error;
 }

 VAR_23 = FUNC_11(VAR_18->addr, VAR_14);
 if (VAR_23 < 0) {
  VAR_19 = VAR_23;
  goto error;
 }
 if (VAR_23 != VAR_7) {
  FUNC_7("invalid %s id: 0x%02X (expected 0x%02X)\n", "primary",
         VAR_23, VAR_7);
  VAR_19 = -VAR_1;
  goto error;
 }

 VAR_20 = FUNC_11(VAR_18->addr,
           VAR_8);
 if (VAR_20 < 0) {
  VAR_19 = VAR_20;
  goto error;
 }

 VAR_21 = FUNC_12(VAR_18->addr,
           VAR_9);
 if (VAR_21 < 0) {
  VAR_19 = VAR_21;
  goto error;
 }

 VAR_22 = FUNC_11(VAR_18->addr,
          VAR_13);
 if (VAR_22 < 0) {
  VAR_19 = VAR_22;
  goto error;
 }

 VAR_23 = FUNC_11(VAR_18->addr, VAR_11);
 if (VAR_23 < 0) {
  VAR_19 = VAR_23;
  goto error;
 }
 VAR_18->control = VAR_23;
 if (!(VAR_18->control & 0x01)) {
  FUNC_7("hardware monitoring not enabled\n");
  VAR_19 = -VAR_1;
  goto error;
 }


 FUNC_14(VAR_18->addr, VAR_11,
      VAR_18->control | 0x10);
 VAR_18->last_battery = VAR_15;





 VAR_19 = FUNC_9(VAR_18);
 if (VAR_19)
  goto error;

 FUNC_8("found %s chip at %#hx\n", VAR_0, VAR_18->addr);
 FUNC_8("firmware build: code 0x%02X, id 0x%04X, hwmon: rev 0x%02X\n",
  VAR_20, VAR_21, VAR_22);


 VAR_19 = FUNC_15(&VAR_17->dev.kobj, &VAR_16);
 if (VAR_19)
  goto error;

 VAR_18->hwmon_dev = FUNC_3(&VAR_17->dev);
 if (FUNC_0(VAR_18->hwmon_dev)) {
  VAR_19 = FUNC_1(VAR_18->hwmon_dev);
  VAR_18->hwmon_dev = ((void*)0);
  goto error;
 }


 VAR_18->watchdog = FUNC_13(&VAR_17->dev, VAR_18->addr,
   (VAR_20 << 24) | (VAR_21 << 8) | VAR_22,
   &VAR_18->update_lock, 1);

 return 0;

error:
 FUNC_10(VAR_17);
 return VAR_19;
}
