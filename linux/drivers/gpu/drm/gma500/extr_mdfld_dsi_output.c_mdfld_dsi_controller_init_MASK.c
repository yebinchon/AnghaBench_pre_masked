
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_config {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct mdfld_dsi_config*,int) ;

void FUNC_2(struct mdfld_dsi_config *VAR_0, int VAR_1)
{
 if (!VAR_0 || ((VAR_1 != 0) && (VAR_1 != 2))) {
  FUNC_0("Invalid parameters\n");
  return;
 }

 FUNC_1(VAR_0, VAR_1);
}
