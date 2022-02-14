
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mii_bus {struct ag71xx_mdio* priv; } ;
struct ag71xx_mdio {TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* reset ) (struct mii_bus*) ;scalar_t__ is_ar934x; scalar_t__ builtin_switch; scalar_t__ is_ar7240; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ag71xx_mdio*,int*) ;
 int FUNC_1 (struct ag71xx_mdio*,int ,int) ;
 int FUNC_2 (struct mii_bus*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_6)
{
 struct ag71xx_mdio *VAR_7 = VAR_6->priv;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, &VAR_8);
 if (VAR_9) {

  if (VAR_7->pdata->is_ar7240)
   VAR_8 = VAR_4;
  else if (VAR_7->pdata->builtin_switch && !VAR_7->pdata->is_ar934x)
   VAR_8 = VAR_1;
  else if (!VAR_7->pdata->builtin_switch && VAR_7->pdata->is_ar934x)
   VAR_8 = VAR_3;
  else
   VAR_8 = VAR_2;
 }

 FUNC_1(VAR_7, VAR_0, VAR_8 | VAR_5);
 FUNC_3(100);

 FUNC_1(VAR_7, VAR_0, VAR_8);
 FUNC_3(100);

 if (VAR_7->pdata->reset)
  VAR_7->pdata->reset(VAR_6);

 return 0;
}
