
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mdfld_dsi_pkg_sender {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mdfld_dsi_pkg_sender*,int ,int *,int,int *,int ,int) ;

int FUNC_2(struct mdfld_dsi_pkg_sender *VAR_2, u8 VAR_3,
  u32 *VAR_4, u16 VAR_5, bool VAR_6)
{
 if (!VAR_2 || !VAR_4 || !VAR_5) {
  FUNC_0("Invalid parameters\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_1, &VAR_3, 1,
    VAR_4, VAR_5, VAR_6);
}
