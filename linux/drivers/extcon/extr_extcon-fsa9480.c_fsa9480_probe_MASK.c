
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct fsa9480_usbsw {int * dev; int regmap; int edev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 struct fsa9480_usbsw* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (int *,int ,int *,int ,int,char*,struct fsa9480_usbsw*) ;
 int FUNC_9 (struct fsa9480_usbsw*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (struct fsa9480_usbsw*,int ,int) ;
 int FUNC_11 (struct i2c_client*,struct fsa9480_usbsw*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_18,
    const struct i2c_device_id *VAR_19)
{
 struct fsa9480_usbsw *VAR_20;
 int VAR_21;

 if (!VAR_18->irq) {
  FUNC_2(&VAR_18->dev, "no interrupt provided\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_6(&VAR_18->dev, sizeof(*VAR_20), VAR_7);
 if (!VAR_20)
  return -VAR_2;
 VAR_20->dev = &VAR_18->dev;

 FUNC_11(VAR_18, VAR_20);


 VAR_20->edev = FUNC_4(VAR_20->dev,
           VAR_15);
 if (FUNC_0(VAR_20->edev)) {
  FUNC_2(VAR_20->dev, "failed to allocate memory for extcon\n");
  VAR_21 = -VAR_2;
  return VAR_21;
 }

 VAR_21 = FUNC_5(VAR_20->dev, VAR_20->edev);
 if (VAR_21) {
  FUNC_2(VAR_20->dev, "failed to register extcon device\n");
  return VAR_21;
 }

 VAR_20->regmap = FUNC_7(VAR_18, &VAR_17);
 if (FUNC_0(VAR_20->regmap)) {
  VAR_21 = FUNC_1(VAR_20->regmap);
  FUNC_2(VAR_20->dev, "failed to allocate register map: %d\n",
   VAR_21);
  return VAR_21;
 }


 FUNC_10(VAR_20, VAR_6, VAR_14);


 FUNC_10(VAR_20, VAR_3, VAR_0);


 FUNC_10(VAR_20, VAR_4,
     VAR_8 & ~(VAR_10 | VAR_11));
 FUNC_10(VAR_20, VAR_5, VAR_9);

 VAR_21 = FUNC_8(VAR_20->dev, VAR_18->irq, ((void*)0),
     VAR_16,
     VAR_13 | VAR_12,
     "fsa9480", VAR_20);
 if (VAR_21) {
  FUNC_2(VAR_20->dev, "failed to request IRQ\n");
  return VAR_21;
 }

 FUNC_3(VAR_20->dev, 1);
 FUNC_9(VAR_20);

 return 0;
}
