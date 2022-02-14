
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sch5636_data {int* temp_ctrl; int* fan_ctrl; int update_lock; int addr; int watchdog; int * hwmon_dev; } ;
struct platform_device {int dev; } ;
struct TYPE_9__ {int start; } ;
struct TYPE_8__ {int dev_attr; } ;
struct TYPE_7__ {int dev_attr; } ;
struct TYPE_6__ {int dev_attr; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_10 ;
 int FUNC_5 (int *,int *) ;
 struct sch5636_data* FUNC_6 (int *,int,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_4__* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct sch5636_data*) ;
 int FUNC_11 (char*,char,...) ;
 int FUNC_12 (char*,int ,int ,int,int) ;
 TYPE_3__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 int FUNC_13 (struct platform_device*) ;
 TYPE_1__* VAR_13 ;
 int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int *,int ,int,int *,int ) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_14)
{
 struct sch5636_data *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19[2];
 char VAR_20[4];

 VAR_15 = FUNC_6(&VAR_14->dev, sizeof(struct sch5636_data),
       VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->addr = FUNC_9(VAR_14, VAR_4, 0)->start;
 FUNC_8(&VAR_15->update_lock);
 FUNC_10(VAR_14, VAR_15);

 for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
  VAR_18 = FUNC_14(VAR_15->addr,
            VAR_8 + VAR_16);
  if (VAR_18 < 0) {
   FUNC_11("Could not read Fujitsu id byte at %#x\n",
    VAR_8 + VAR_16);
   VAR_17 = VAR_18;
   goto error;
  }
  VAR_20[VAR_16] = VAR_18;
 }
 VAR_20[VAR_16] = '\0';

 if (FUNC_16(VAR_20, "THS")) {
  FUNC_11("Unknown Fujitsu id: %02x%02x%02x\n",
         VAR_20[0], VAR_20[1], VAR_20[2]);
  VAR_17 = -VAR_1;
  goto error;
 }

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  VAR_18 = FUNC_14(VAR_15->addr,
            VAR_9 + VAR_16);
  if (VAR_18 < 0) {
   VAR_17 = VAR_18;
   goto error;
  }
  VAR_19[VAR_16] = VAR_18;
 }
 FUNC_12("Found %s chip at %#hx, revision: %d.%02d\n", VAR_0,
  VAR_15->addr, VAR_19[0], VAR_19[1]);


 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  VAR_18 = FUNC_14(VAR_15->addr,
            FUNC_4(VAR_16));
  if (FUNC_17(VAR_18 < 0)) {
   VAR_17 = VAR_18;
   goto error;
  }
  VAR_15->temp_ctrl[VAR_16] = VAR_18;
 }

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_18 = FUNC_14(VAR_15->addr,
            FUNC_3(VAR_16));
  if (FUNC_17(VAR_18 < 0)) {
   VAR_17 = VAR_18;
   goto error;
  }
  VAR_15->fan_ctrl[VAR_16] = VAR_18;
 }

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_11); VAR_16++) {
  VAR_17 = FUNC_5(&VAR_14->dev,
      &VAR_11[VAR_16].dev_attr);
  if (VAR_17)
   goto error;
 }

 for (VAR_16 = 0; VAR_16 < (VAR_7 * 3); VAR_16++) {
  if (VAR_15->temp_ctrl[VAR_16/3] & VAR_10)
   continue;

  VAR_17 = FUNC_5(&VAR_14->dev,
     &VAR_13[VAR_16].dev_attr);
  if (VAR_17)
   goto error;
 }

 for (VAR_16 = 0; VAR_16 < (VAR_6 * 3); VAR_16++) {
  if (VAR_15->fan_ctrl[VAR_16/3] & VAR_5)
   continue;

  VAR_17 = FUNC_5(&VAR_14->dev,
     &VAR_12[VAR_16].dev_attr);
  if (VAR_17)
   goto error;
 }

 VAR_15->hwmon_dev = FUNC_7(&VAR_14->dev);
 if (FUNC_1(VAR_15->hwmon_dev)) {
  VAR_17 = FUNC_2(VAR_15->hwmon_dev);
  VAR_15->hwmon_dev = ((void*)0);
  goto error;
 }


 VAR_15->watchdog = FUNC_15(&VAR_14->dev, VAR_15->addr,
     (VAR_19[0] << 8) | VAR_19[1],
     &VAR_15->update_lock, 0);

 return 0;

error:
 FUNC_13(VAR_14);
 return VAR_17;
}
