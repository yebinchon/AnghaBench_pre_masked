
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pc87427_sio_data {scalar_t__* address; } ;
struct pc87427_data {scalar_t__* address; char* name; int fan_enabled; int pwm_enabled; int temp_enabled; int hwmon_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct pc87427_sio_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 struct pc87427_data* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct platform_device*,int) ;
 int FUNC_11 (struct platform_device*,struct pc87427_data*) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct pc87427_sio_data *VAR_7 = FUNC_3(&VAR_6->dev);
 struct pc87427_data *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(struct pc87427_data),
       VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->address[0] = VAR_7->address[0];
 VAR_8->address[1] = VAR_7->address[1];
 VAR_11 = (VAR_8->address[0] != 0) + (VAR_8->address[1] != 0);

 VAR_10 = FUNC_10(VAR_6, VAR_11);
 if (VAR_10)
  return VAR_10;

 FUNC_7(&VAR_8->lock);
 VAR_8->name = "pc87427";
 FUNC_11(VAR_6, VAR_8);
 FUNC_8(&VAR_6->dev);


 VAR_10 = FUNC_4(&VAR_6->dev, &VAR_2);
 if (VAR_10)
  return VAR_10;
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  if (!(VAR_8->fan_enabled & (1 << VAR_9)))
   continue;
  VAR_10 = FUNC_12(&VAR_6->dev.kobj,
      &VAR_3[VAR_9]);
  if (VAR_10)
   goto exit_remove_files;
 }
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  if (!(VAR_8->pwm_enabled & (1 << VAR_9)))
   continue;
  VAR_10 = FUNC_12(&VAR_6->dev.kobj,
      &VAR_4[VAR_9]);
  if (VAR_10)
   goto exit_remove_files;
 }
 for (VAR_9 = 0; VAR_9 < 6; VAR_9++) {
  if (!(VAR_8->temp_enabled & (1 << VAR_9)))
   continue;
  VAR_10 = FUNC_12(&VAR_6->dev.kobj,
      &VAR_5[VAR_9]);
  if (VAR_10)
   goto exit_remove_files;
 }

 VAR_8->hwmon_dev = FUNC_6(&VAR_6->dev);
 if (FUNC_0(VAR_8->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_8->hwmon_dev);
  FUNC_2(&VAR_6->dev, "Class registration failed (%d)\n", VAR_10);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_9(&VAR_6->dev);
 return VAR_10;
}
