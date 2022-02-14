
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mdfld_dsi_pkg_sender {int lock; } ;
typedef int data ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mdfld_dsi_pkg_sender*,scalar_t__,scalar_t__*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct mdfld_dsi_pkg_sender *VAR_3, u8 VAR_4,
   u8 VAR_5, u8 VAR_6, bool VAR_7)
{
 u8 VAR_8[2];
 unsigned long VAR_9;
 u8 VAR_10;

 if (!VAR_3) {
  FUNC_0("Invalid parameter\n");
  return -VAR_0;
 }

 VAR_8[0] = VAR_4;

 if (VAR_6) {
  VAR_10 = VAR_2;
  VAR_8[1] = VAR_5;
 } else {
  VAR_10 = VAR_1;
  VAR_8[1] = 0;
 }

 FUNC_2(&VAR_3->lock, VAR_9);
 FUNC_1(VAR_3, VAR_10, VAR_8, sizeof(VAR_8), VAR_7);
 FUNC_3(&VAR_3->lock, VAR_9);

 return 0;
}
