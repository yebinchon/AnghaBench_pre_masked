
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mdfld_dsi_pkg_sender {int dummy; } ;
struct mdfld_dsi_config {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct mdfld_dsi_pkg_sender* FUNC_1 (struct mdfld_dsi_config*) ;
 int FUNC_2 (struct mdfld_dsi_pkg_sender*,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_3(struct mdfld_dsi_config *VAR_1,
    u8 VAR_2, u32 *VAR_3, bool VAR_4)
{
 struct mdfld_dsi_pkg_sender *VAR_5
  = FUNC_1(VAR_1);

 if (!VAR_5 || !VAR_3) {
  FUNC_0("Invalid parameter\n");
  return -VAR_0;
 }

 return FUNC_2(VAR_5, VAR_2, VAR_3, 1, VAR_4);
}
