
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arizona_extcon_info {int hpdet_active; scalar_t__ mic; int edev; int dev; scalar_t__ hpdet_done; struct arizona* arizona; } ;
struct TYPE_2__ {int hpdet_channel; } ;
struct arizona {int dev; int regmap; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arizona_extcon_info*,int) ;
 int FUNC_1 (struct arizona_extcon_info*) ;
 int FUNC_2 (struct arizona_extcon_info*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct arizona_extcon_info *VAR_6)
{
 struct arizona *VAR_7 = VAR_6->arizona;
 int VAR_8;

 if (VAR_6->hpdet_done)
  return;

 FUNC_3(VAR_7->dev, "Starting HPDET\n");


 FUNC_6(VAR_6->dev);

 VAR_6->hpdet_active = 1;

 if (VAR_6->mic)
  FUNC_2(VAR_6);

 FUNC_0(VAR_6, 1);

 VAR_8 = FUNC_7(VAR_7->regmap,
     VAR_2,
     VAR_0,
     VAR_7->pdata.hpdet_channel);
 if (VAR_8 != 0) {
  FUNC_4(VAR_7->dev, "Failed to set HPDET mode: %d\n", VAR_8);
  goto err;
 }

 VAR_8 = FUNC_7(VAR_7->regmap, VAR_3,
     VAR_4, VAR_4);
 if (VAR_8 != 0) {
  FUNC_4(VAR_7->dev, "Can't start HPDETL measurement: %d\n",
   VAR_8);
  goto err;
 }

 return;

err:
 FUNC_7(VAR_7->regmap, VAR_2,
      VAR_0, VAR_1);


 VAR_8 = FUNC_5(VAR_6->edev, VAR_5, 1);
 if (VAR_8 != 0)
  FUNC_4(VAR_7->dev, "Failed to report headphone: %d\n", VAR_8);

 if (VAR_6->mic)
  FUNC_1(VAR_6);

 VAR_6->hpdet_active = 0;
}
