
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cht_wc_extcon_data {int dev; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct cht_wc_extcon_data *VAR_2,
          bool VAR_3)
{
 unsigned int VAR_4 = VAR_3 ? VAR_1 : 0;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2->regmap, VAR_0,
     VAR_1, VAR_4);
 if (VAR_5)
  FUNC_0(VAR_2->dev, "Error updating CHGRCTRL1 reg: %d\n", VAR_5);
}
