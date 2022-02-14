
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mdfld_dsi_pkg_sender {int lock; } ;
typedef int data ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mdfld_dsi_pkg_sender*,int,int*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct mdfld_dsi_pkg_sender *VAR_4, u8 VAR_5,
   u8 VAR_6, u8 VAR_7, bool VAR_8)
{
 u8 VAR_9[2];
 unsigned long VAR_10;
 u8 VAR_11;

 if (!VAR_4 || VAR_7 > 2) {
  FUNC_0("Invalid parameter\n");
  return -VAR_0;
 }

 switch (VAR_7) {
 case 0:
  VAR_11 = VAR_1;
  VAR_9[0] = 0;
  VAR_9[1] = 0;
  break;
 case 1:
  VAR_11 = VAR_2;
  VAR_9[0] = VAR_5;
  VAR_9[1] = 0;
  break;
 case 2:
  VAR_11 = VAR_3;
  VAR_9[0] = VAR_5;
  VAR_9[1] = VAR_6;
  break;
 }

 FUNC_2(&VAR_4->lock, VAR_10);
 FUNC_1(VAR_4, VAR_11, VAR_9, sizeof(VAR_9), VAR_8);
 FUNC_3(&VAR_4->lock, VAR_10);

 return 0;
}
