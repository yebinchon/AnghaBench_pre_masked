
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_6__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct f71805f_sio_data {size_t kind; int fnsel1; } ;
struct f71805f_data {char* name; int has_in; int* fan_ctrl; int hwmon_dev; int update_lock; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,char*,int,...) ;
 struct f71805f_sio_data* FUNC_3 (TYPE_1__*) ;
 struct f71805f_data* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int,int ) ;

 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct f71805f_data*) ;

 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct f71805f_data*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_15)
{
 struct f71805f_sio_data *VAR_16 = FUNC_3(&VAR_15->dev);
 struct f71805f_data *VAR_17;
 struct resource *VAR_18;
 int VAR_19, VAR_20;

 static const char * const VAR_21[] = {
  "f71805f",
  "f71872f",
 };

 VAR_17 = FUNC_4(&VAR_15->dev, sizeof(struct f71805f_data),
       VAR_6);
 if (!VAR_17)
  return -VAR_3;

 VAR_18 = FUNC_9(VAR_15, VAR_7, 0);
 if (!FUNC_5(&VAR_15->dev, VAR_18->start + VAR_0, 2,
     VAR_1)) {
  FUNC_2(&VAR_15->dev, "Failed to request region 0x%lx-0x%lx\n",
   (unsigned long)(VAR_18->start + VAR_0),
   (unsigned long)(VAR_18->start + VAR_0 + 1));
  return -VAR_2;
 }
 VAR_17->addr = VAR_18->start;
 VAR_17->name = VAR_21[VAR_16->kind];
 FUNC_8(&VAR_17->update_lock);

 FUNC_10(VAR_15, VAR_17);


 switch (VAR_16->kind) {
 case 129:
  VAR_17->has_in = 0x1ff;
  break;
 case 128:
  VAR_17->has_in = 0x6ef;
  if (VAR_16->fnsel1 & 0x01)
   VAR_17->has_in |= (1 << 4);
  if (VAR_16->fnsel1 & 0x02)
   VAR_17->has_in |= (1 << 8);
  break;
 }


 FUNC_6(VAR_17);


 VAR_20 = FUNC_13(&VAR_15->dev.kobj, &VAR_12);
 if (VAR_20)
  return VAR_20;
 if (VAR_17->has_in & (1 << 4)) {
  VAR_20 = FUNC_13(&VAR_15->dev.kobj,
      &VAR_13[0]);
  if (VAR_20)
   goto exit_remove_files;
 }
 if (VAR_17->has_in & (1 << 8)) {
  VAR_20 = FUNC_13(&VAR_15->dev.kobj,
      &VAR_13[1]);
  if (VAR_20)
   goto exit_remove_files;
 }
 if (VAR_17->has_in & (1 << 9)) {
  VAR_20 = FUNC_13(&VAR_15->dev.kobj,
      &VAR_13[2]);
  if (VAR_20)
   goto exit_remove_files;
 }
 if (VAR_17->has_in & (1 << 10)) {
  VAR_20 = FUNC_13(&VAR_15->dev.kobj,
      &VAR_13[3]);
  if (VAR_20)
   goto exit_remove_files;
 }
 for (VAR_19 = 0; VAR_19 < 3; VAR_19++) {

  if (!(VAR_17->fan_ctrl[VAR_19] & VAR_4)) {
   VAR_20 = FUNC_12(&VAR_15->dev.kobj,
      VAR_11[VAR_19]);
   if (VAR_20)
    goto exit_remove_files;
  }

  if (VAR_17->fan_ctrl[VAR_19] & VAR_5) {
   VAR_20 = FUNC_11(&VAR_15->dev.kobj,
            VAR_10[VAR_19],
            VAR_8 | VAR_9);
   if (VAR_20) {
    FUNC_2(&VAR_15->dev, "chmod +w pwm%d failed\n",
     VAR_19 + 1);
    goto exit_remove_files;
   }
  }
 }

 VAR_17->hwmon_dev = FUNC_7(&VAR_15->dev);
 if (FUNC_0(VAR_17->hwmon_dev)) {
  VAR_20 = FUNC_1(VAR_17->hwmon_dev);
  FUNC_2(&VAR_15->dev, "Class registration failed (%d)\n", VAR_20);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_14(&VAR_15->dev.kobj, &VAR_12);
 for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
  FUNC_14(&VAR_15->dev.kobj, &VAR_13[VAR_19]);
 FUNC_14(&VAR_15->dev.kobj, &VAR_14);
 return VAR_20;
}
