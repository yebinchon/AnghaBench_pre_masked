
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cht_wc_extcon_data {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct cht_wc_extcon_data *VAR_5, bool VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = VAR_6 ? 0 : VAR_1;
 VAR_7 = FUNC_1(VAR_5->regmap, VAR_0,
     VAR_1, VAR_9);
 if (VAR_7)
  FUNC_0(VAR_5->dev,
   "Error setting sw control for CHGDIS pin: %d\n",
   VAR_7);

 VAR_8 = VAR_4 | VAR_3;
 VAR_9 = VAR_6 ? VAR_8 : 0;
 VAR_7 = FUNC_1(VAR_5->regmap, VAR_2, VAR_8, VAR_9);
 if (VAR_7)
  FUNC_0(VAR_5->dev, "Error setting sw control: %d\n", VAR_7);

 return VAR_7;
}
