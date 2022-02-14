
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cht_wc_extcon_data {int dev; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cht_wc_extcon_data *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->regmap, VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "Error writing phyctrl: %d\n", VAR_3);
}
