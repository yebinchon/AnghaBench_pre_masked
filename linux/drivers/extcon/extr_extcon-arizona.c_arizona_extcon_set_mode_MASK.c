
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arizona_extcon_info {int micd_num_modes; int micd_mode; TYPE_1__* micd_modes; int micd_pol_gpio; struct arizona* arizona; } ;
struct arizona {int dev; int regmap; } ;
struct TYPE_2__ {int bias; int src; int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct arizona_extcon_info *VAR_5, int VAR_6)
{
 struct arizona *VAR_7 = VAR_5->arizona;

 VAR_6 %= VAR_5->micd_num_modes;

 FUNC_1(VAR_5->micd_pol_gpio,
     VAR_5->micd_modes[VAR_6].gpio);

 FUNC_2(VAR_7->regmap, VAR_4,
      VAR_2,
      VAR_5->micd_modes[VAR_6].bias <<
      VAR_3);
 FUNC_2(VAR_7->regmap, VAR_1,
      VAR_0, VAR_5->micd_modes[VAR_6].src);

 VAR_5->micd_mode = VAR_6;

 FUNC_0(VAR_7->dev, "Set jack polarity to %d\n", VAR_6);
}
