
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mdfld_dsi_pkg_sender {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mdfld_dsi_pkg_sender *VAR_3, u8 VAR_4,
   u8 *VAR_5, u16 VAR_6)
{
 u8 VAR_7;

 switch (VAR_4) {
 case 129:
 case 128:
 case 130:
  VAR_7 = *VAR_5;
  break;
 default:
  return 0;
 }


 VAR_3->status = VAR_0;


 if (FUNC_1(VAR_7 == VAR_1)) {

  FUNC_0(120);
 }

 if (FUNC_1(VAR_7 == VAR_2)) {

  FUNC_0(120);
 }
 return 0;
}
