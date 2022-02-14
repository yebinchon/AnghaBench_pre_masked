
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hwmon_pdata {struct s3c_hwmon_chcfg** in; } ;
struct s3c_hwmon_chcfg {int mult; scalar_t__ div; } ;
struct s3c_hwmon {int client; int hwmon_dev; int * attrs; int lock; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (struct s3c_hwmon_chcfg**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct s3c_hwmon_pdata* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 struct s3c_hwmon* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,struct s3c_hwmon*) ;
 int FUNC_11 (struct platform_device*,int *,int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,struct s3c_hwmon_chcfg*,int *,int) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_3)
{
 struct s3c_hwmon_pdata *VAR_4 = FUNC_4(&VAR_3->dev);
 struct s3c_hwmon *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 if (!VAR_4) {
  FUNC_3(&VAR_3->dev, "no platform data supplied\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_6(&VAR_3->dev, sizeof(struct s3c_hwmon), VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 FUNC_10(VAR_3, VAR_5);

 FUNC_9(&VAR_5->lock);



 VAR_5->client = FUNC_11(VAR_3, ((void*)0), ((void*)0), 0);
 if (FUNC_1(VAR_5->client)) {
  FUNC_3(&VAR_3->dev, "cannot register adc\n");
  return FUNC_2(VAR_5->client);
 }



 VAR_6 = FUNC_13(&VAR_3->dev);
 if (VAR_6)
  goto err_registered;



 VAR_5->hwmon_dev = FUNC_7(&VAR_3->dev);
 if (FUNC_1(VAR_5->hwmon_dev)) {
  FUNC_3(&VAR_3->dev, "error registering with hwmon\n");
  VAR_6 = FUNC_2(VAR_5->hwmon_dev);
  goto err_raw_attribute;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->in); VAR_7++) {
  struct s3c_hwmon_chcfg *VAR_8 = VAR_4->in[VAR_7];

  if (!VAR_8)
   continue;

  if (VAR_8->mult >= 0x10000)
   FUNC_5(&VAR_3->dev,
     "channel %d multiplier too large\n",
     VAR_7);

  if (VAR_8->div == 0) {
   FUNC_3(&VAR_3->dev, "channel %d divider zero\n", VAR_7);
   continue;
  }

  VAR_6 = FUNC_14(&VAR_3->dev, VAR_4->in[VAR_7],
         &VAR_5->attrs[VAR_7], VAR_7);
  if (VAR_6) {
   FUNC_3(&VAR_3->dev,
     "error creating channel %d\n", VAR_7);

   for (VAR_7--; VAR_7 >= 0; VAR_7--)
    FUNC_15(&VAR_3->dev,
             &VAR_5->attrs[VAR_7]);

   goto err_hwmon_register;
  }
 }

 return 0;

 err_hwmon_register:
 FUNC_8(VAR_5->hwmon_dev);

 err_raw_attribute:
 FUNC_16(&VAR_3->dev);

 err_registered:
 FUNC_12(VAR_5->client);

 return VAR_6;
}
