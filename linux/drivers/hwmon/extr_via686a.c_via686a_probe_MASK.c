
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct via686a_data {char* name; int hwmon_dev; int update_lock; scalar_t__ addr; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_9__ {int kobj; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*,unsigned long,unsigned long) ;
 struct via686a_data* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct via686a_data*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct via686a_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct via686a_data *VAR_8;
 struct resource *VAR_9;
 int VAR_10;


 VAR_9 = FUNC_7(VAR_7, VAR_3, 0);
 if (!FUNC_4(&VAR_7->dev, VAR_9->start, VAR_4,
     VAR_5.driver.name)) {
  FUNC_2(&VAR_7->dev, "Region 0x%lx-0x%lx already in use!\n",
   (unsigned long)VAR_9->start, (unsigned long)VAR_9->end);
  return -VAR_0;
 }

 VAR_8 = FUNC_3(&VAR_7->dev, sizeof(struct via686a_data),
       VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_8(VAR_7, VAR_8);
 VAR_8->addr = VAR_9->start;
 VAR_8->name = "via686a";
 FUNC_6(&VAR_8->update_lock);


 FUNC_11(VAR_8);


 VAR_10 = FUNC_9(&VAR_7->dev.kobj, &VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_8->hwmon_dev = FUNC_5(&VAR_7->dev);
 if (FUNC_0(VAR_8->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_8->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_10(&VAR_7->dev.kobj, &VAR_6);
 return VAR_10;
}
