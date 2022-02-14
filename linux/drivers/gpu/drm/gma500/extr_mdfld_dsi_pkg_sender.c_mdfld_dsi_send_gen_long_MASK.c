
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mdfld_dsi_pkg_sender {int lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mdfld_dsi_pkg_sender*,int ,int *,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct mdfld_dsi_pkg_sender *VAR_2, u8 *VAR_3,
   u32 VAR_4, bool VAR_5)
{
 unsigned long VAR_6;

 if (!VAR_2 || !VAR_3 || !VAR_4) {
  FUNC_0("Invalid parameters\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_2->lock, VAR_6);
 FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5);
 FUNC_3(&VAR_2->lock, VAR_6);

 return 0;
}
