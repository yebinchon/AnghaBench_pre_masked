
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdfld_dsi_config {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mdfld_dsi_config*,int,int *,int) ;

int FUNC_2(struct mdfld_dsi_config *VAR_1, u32 *VAR_2,
   bool VAR_3)
{
 if (!VAR_1 || !VAR_2) {
  FUNC_0("Invalid parameter\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_1, 0x0a, VAR_2, VAR_3);
}
