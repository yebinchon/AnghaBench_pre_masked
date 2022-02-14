
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltr501_data {int als_contr; int ps_contr; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int als_mode_active; } ;


 int VAR_0 ;
 int FUNC_0 (struct ltr501_data*,int,int) ;

__attribute__((used)) static int FUNC_1(struct ltr501_data *VAR_1)
{
 return FUNC_0(VAR_1, VAR_1->als_contr &
      ~VAR_1->chip_info->als_mode_active,
      VAR_1->ps_contr & ~VAR_0);
}
