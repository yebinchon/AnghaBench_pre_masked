
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arizona_extcon_info {int hpdet_active; int hpdet_done; int lock; int dev; scalar_t__ mic; int edev; struct arizona* arizona; } ;
struct TYPE_2__ {int hpdet_id_gpio; } ;
struct arizona {int regmap; int dev; TYPE_1__ pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct arizona_extcon_info*,int) ;
 int FUNC_1 (struct arizona_extcon_info*,int*,int*) ;
 int FUNC_2 (struct arizona_extcon_info*) ;
 int FUNC_3 (struct arizona_extcon_info*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,unsigned int,int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_12, void *VAR_13)
{
 struct arizona_extcon_info *VAR_14 = VAR_13;
 struct arizona *VAR_15 = VAR_14->arizona;
 int VAR_16 = VAR_15->pdata.hpdet_id_gpio;
 unsigned int VAR_17 = VAR_7;
 int VAR_18, VAR_19;
 bool VAR_20 = 0;

 FUNC_10(&VAR_14->lock);


 if (!VAR_14->hpdet_active) {
  FUNC_6(VAR_15->dev, "Spurious HPDET IRQ\n");
  FUNC_11(&VAR_14->lock);
  return VAR_11;
 }


 VAR_18 = FUNC_7(VAR_14->edev, VAR_9);
 if (VAR_18 < 0) {
  FUNC_5(VAR_15->dev, "Failed to check cable state: %d\n",
   VAR_18);
  goto out;
 } else if (!VAR_18) {
  FUNC_4(VAR_15->dev, "Ignoring HPDET for removed cable\n");
  goto done;
 }

 VAR_18 = FUNC_2(VAR_14);
 if (VAR_18 == -VAR_6)
  goto out;
 else if (VAR_18 < 0)
  goto done;
 VAR_19 = VAR_18;


 FUNC_13(VAR_15->regmap,
      VAR_3,
      VAR_4 | VAR_5,
      0);

 VAR_18 = FUNC_1(VAR_14, &VAR_19, &VAR_20);
 if (VAR_18 == -VAR_6)
  goto out;
 else if (VAR_18 < 0)
  goto done;


 if (VAR_19 >= 5000)
  VAR_17 = VAR_8;
 else
  VAR_17 = VAR_7;

 VAR_18 = FUNC_8(VAR_14->edev, VAR_17, 1);
 if (VAR_18 != 0)
  FUNC_5(VAR_15->dev, "Failed to report HP/line: %d\n",
   VAR_18);

done:

 FUNC_13(VAR_15->regmap,
      VAR_3,
      VAR_4 | VAR_5,
      0);

 FUNC_0(VAR_14, 0);

 if (VAR_16)
  FUNC_9(VAR_16, 0);


 FUNC_13(VAR_15->regmap,
      VAR_2,
      VAR_0, VAR_1);


 if (VAR_20 || VAR_14->mic)
  FUNC_3(VAR_14);

 if (VAR_14->hpdet_active) {
  FUNC_12(VAR_14->dev);
  VAR_14->hpdet_active = 0;
 }

 VAR_14->hpdet_done = 1;

out:
 FUNC_11(&VAR_14->lock);

 return VAR_10;
}
