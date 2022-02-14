
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arizona_extcon_info {int hpdet_active; int edev; TYPE_1__* micd_modes; int dev; struct arizona* arizona; } ;
struct TYPE_4__ {int hpdet_channel; scalar_t__ hpdet_acc_id_line; } ;
struct arizona {int dev; int regmap; TYPE_2__ pdata; } ;
struct TYPE_3__ {int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct arizona_extcon_info*,int) ;
 int FUNC_1 (struct arizona_extcon_info*,int*,int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct arizona_extcon_info *VAR_7)
{
 struct arizona *VAR_8 = VAR_7->arizona;
 int VAR_9 = 32;
 bool VAR_10;
 int VAR_11;

 FUNC_2(VAR_8->dev, "Starting identification via HPDET\n");


 FUNC_5(VAR_7->dev);

 VAR_7->hpdet_active = 1;

 FUNC_0(VAR_7, 1);

 VAR_11 = FUNC_6(VAR_8->regmap,
     VAR_3,
     VAR_2 | VAR_0,
     VAR_7->micd_modes[0].src |
     VAR_8->pdata.hpdet_channel);
 if (VAR_11 != 0) {
  FUNC_3(VAR_8->dev, "Failed to set HPDET mode: %d\n", VAR_11);
  goto err;
 }

 if (VAR_8->pdata.hpdet_acc_id_line) {
  VAR_11 = FUNC_6(VAR_8->regmap,
      VAR_4,
      VAR_5, VAR_5);
  if (VAR_11 != 0) {
   FUNC_3(VAR_8->dev,
    "Can't start HPDETL measurement: %d\n",
    VAR_11);
   goto err;
  }
 } else {
  FUNC_1(VAR_7, &VAR_9, &VAR_10);
 }

 return;

err:
 FUNC_6(VAR_8->regmap, VAR_3,
      VAR_0, VAR_1);


 VAR_11 = FUNC_4(VAR_7->edev, VAR_6, 1);
 if (VAR_11 != 0)
  FUNC_3(VAR_8->dev, "Failed to report headphone: %d\n", VAR_11);

 VAR_7->hpdet_active = 0;
}
