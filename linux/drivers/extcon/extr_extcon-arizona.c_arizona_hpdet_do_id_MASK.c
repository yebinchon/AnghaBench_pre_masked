
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arizona_extcon_info {int* hpdet_res; int num_hpdet_res; int hpdet_retried; int detecting; TYPE_2__* micd_modes; int dev; struct arizona* arizona; } ;
struct TYPE_3__ {int hpdet_id_gpio; scalar_t__ hpdet_acc_id; } ;
struct arizona {int regmap; int dev; TYPE_1__ pdata; } ;
struct TYPE_4__ {int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct arizona_extcon_info*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct arizona_extcon_info *VAR_8, int *VAR_9,
          bool *VAR_10)
{
 struct arizona *VAR_11 = VAR_8->arizona;
 int VAR_12 = VAR_11->pdata.hpdet_id_gpio;





 if (VAR_11->pdata.hpdet_acc_id) {
  VAR_8->hpdet_res[VAR_8->num_hpdet_res++] = *VAR_9;


  if (VAR_12 && VAR_8->num_hpdet_res == 1) {
   FUNC_1(VAR_11->dev, "Measuring mic\n");

   FUNC_4(VAR_11->regmap,
        VAR_3,
        VAR_1 |
        VAR_2,
        VAR_0 |
        VAR_8->micd_modes[0].src);

   FUNC_2(VAR_12, 1);

   FUNC_4(VAR_11->regmap,
        VAR_4,
        VAR_6, VAR_6);
   return -VAR_7;
  }


  FUNC_1(VAR_11->dev, "HPDET measured %d %d\n",
   VAR_8->hpdet_res[0], VAR_8->hpdet_res[1]);


  *VAR_9 = VAR_8->hpdet_res[0];


  if (*VAR_9 >= VAR_5 && !VAR_8->hpdet_retried) {
   FUNC_1(VAR_11->dev, "Retrying high impedance\n");
   VAR_8->num_hpdet_res = 0;
   VAR_8->hpdet_retried = 1;
   FUNC_0(VAR_8);
   FUNC_3(VAR_8->dev);
   return -VAR_7;
  }




  if (!VAR_12 || VAR_8->hpdet_res[1] > 50) {
   FUNC_1(VAR_11->dev, "Detected mic\n");
   *VAR_10 = 1;
   VAR_8->detecting = 1;
  } else {
   FUNC_1(VAR_11->dev, "Detected headphone\n");
  }


  FUNC_4(VAR_11->regmap,
       VAR_3,
       VAR_2,
       VAR_8->micd_modes[0].src);
 }

 return 0;
}
