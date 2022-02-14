
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mdfld_dsi_pkg_sender {scalar_t__ status; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mdfld_dsi_pkg_sender*) ;
 int FUNC_2 (struct mdfld_dsi_pkg_sender*,int,int*,int ,int) ;
 int FUNC_3 (struct mdfld_dsi_pkg_sender*,int,int*,int ) ;
 int FUNC_4 (struct mdfld_dsi_pkg_sender*,int,int*,int ) ;
 int FUNC_5 (struct mdfld_dsi_pkg_sender*,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct mdfld_dsi_pkg_sender *VAR_2, u8 VAR_3,
  u8 *VAR_4, u16 VAR_5, bool VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7) {
  FUNC_0("Error handling failed\n");
  return -VAR_0;
 }


 if (VAR_2->status == VAR_1) {
  FUNC_0("sender is busy\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_0("send_pkg_prepare error\n");
  return VAR_7;
 }

 switch (VAR_3) {
 case 130:
 case 129:
 case 128:
 case 133:
 case 132:
 case 131:
 case 136:
 case 135:
 case 137:
  VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_4[0], VAR_4[1], VAR_6);
  break;
 case 134:
 case 138:
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 }

 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);



 return VAR_7;
}
