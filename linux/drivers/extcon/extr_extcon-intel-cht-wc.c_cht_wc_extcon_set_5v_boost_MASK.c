
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cht_wc_extcon_data {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct cht_wc_extcon_data *VAR_4,
           bool VAR_5)
{
 int VAR_6, VAR_7;





 VAR_7 = VAR_2 | VAR_1;
 if (VAR_5)
  VAR_7 |= VAR_3;

 VAR_6 = FUNC_1(VAR_4->regmap, VAR_0, VAR_7);
 if (VAR_6)
  FUNC_0(VAR_4->dev, "Error writing Vbus GPIO CTLO: %d\n", VAR_6);
}
