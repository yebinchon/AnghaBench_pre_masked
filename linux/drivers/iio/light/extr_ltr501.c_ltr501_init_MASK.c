
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltr501_data {int als_contr; int ps_contr; int ps_period; int als_period; int regmap; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int als_mode_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ltr501_data*,int ,int *) ;
 int FUNC_1 (struct ltr501_data*,int,int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct ltr501_data *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_2, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->als_contr = VAR_7 | VAR_5->chip_info->als_mode_active;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_4, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->ps_contr = VAR_7 | VAR_3;

 VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_5->als_period);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1, &VAR_5->ps_period);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_5, VAR_5->als_contr, VAR_5->ps_contr);
}
