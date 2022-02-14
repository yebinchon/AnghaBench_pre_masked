
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mdfld_dsi_pkg_sender {int status; int panel_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mdfld_dsi_pkg_sender *VAR_5, u8 VAR_6,
   u8 *VAR_7, u16 VAR_8)
{
 u8 VAR_9;

 switch (VAR_6) {
 case 129:
 case 128:
 case 130:
  VAR_9 = *VAR_7;
  break;
 default:
  return 0;
 }


 if (FUNC_1(VAR_9 == VAR_2)) {
  VAR_5->panel_mode |= VAR_0;

  FUNC_0(120);
 } else if (FUNC_1(VAR_9 == VAR_3)) {
  VAR_5->panel_mode &= ~VAR_0;

  FUNC_0(120);
 } else if (FUNC_1(VAR_9 == VAR_4)) {

  FUNC_0(5);
 }

 VAR_5->status = VAR_1;

 return 0;
}
