
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sis5595_data {char* name; scalar_t__ revision; int maxins; int hwmon_dev; int * fan_min; int addr; int update_lock; int lock; } ;
struct resource {int start; } ;
struct TYPE_11__ {int kobj; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_10__ {scalar_t__ revision; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 struct sis5595_data* FUNC_3 (TYPE_5__*,int,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ,char*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct sis5595_data*) ;
 TYPE_3__* VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct sis5595_data*) ;
 int FUNC_11 (struct sis5595_data*,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 struct sis5595_data *VAR_15;
 struct resource *VAR_16;
 char VAR_17;


 VAR_16 = FUNC_8(VAR_12, VAR_3, 0);
 if (!FUNC_4(&VAR_12->dev, VAR_16->start, VAR_5,
     VAR_8.driver.name))
  return -VAR_0;

 VAR_15 = FUNC_3(&VAR_12->dev, sizeof(struct sis5595_data),
       VAR_2);
 if (!VAR_15)
  return -VAR_1;

 FUNC_6(&VAR_15->lock);
 FUNC_6(&VAR_15->update_lock);
 VAR_15->addr = VAR_16->start;
 VAR_15->name = "sis5595";
 FUNC_9(VAR_12, VAR_15);




 VAR_15->revision = VAR_7->revision;

 VAR_15->maxins = 3;
 if (VAR_15->revision >= VAR_4) {
  FUNC_7(VAR_7, VAR_6, &VAR_17);
  if (!(VAR_17 & 0x80))

   VAR_15->maxins = 4;
 }


 FUNC_10(VAR_15);


 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  VAR_15->fan_min[VAR_14] = FUNC_11(VAR_15,
     FUNC_2(VAR_14));
 }


 VAR_13 = FUNC_12(&VAR_12->dev.kobj, &VAR_9);
 if (VAR_13)
  return VAR_13;
 if (VAR_15->maxins == 4) {
  VAR_13 = FUNC_12(&VAR_12->dev.kobj, &VAR_10);
  if (VAR_13)
   goto exit_remove_files;
 } else {
  VAR_13 = FUNC_12(&VAR_12->dev.kobj, &VAR_11);
  if (VAR_13)
   goto exit_remove_files;
 }

 VAR_15->hwmon_dev = FUNC_5(&VAR_12->dev);
 if (FUNC_0(VAR_15->hwmon_dev)) {
  VAR_13 = FUNC_1(VAR_15->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_13(&VAR_12->dev.kobj, &VAR_9);
 FUNC_13(&VAR_12->dev.kobj, &VAR_10);
 FUNC_13(&VAR_12->dev.kobj, &VAR_11);
 return VAR_13;
}
