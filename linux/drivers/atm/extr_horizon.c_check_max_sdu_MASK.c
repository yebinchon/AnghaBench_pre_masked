
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_trafprm {unsigned int max_sdu; } ;
typedef int hrz_aal ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,...) ;




__attribute__((used)) static int FUNC_1 (hrz_aal VAR_6, struct atm_trafprm * VAR_7, unsigned int VAR_8) {
  FUNC_0 (VAR_3|VAR_4, "check_max_sdu");

  switch (VAR_6) {
    case 130:
      if (!(VAR_7->max_sdu)) {
 FUNC_0 (VAR_4, "defaulting max_sdu");
 VAR_7->max_sdu = VAR_0;
      } else if (VAR_7->max_sdu != VAR_0) {
 FUNC_0 (VAR_4|VAR_2, "rejecting max_sdu");
 return -VAR_5;
      }
      break;
    case 129:
      if (VAR_7->max_sdu == 0 || VAR_7->max_sdu > VAR_1) {
 FUNC_0 (VAR_4, "%sing max_sdu", VAR_7->max_sdu ? "capp" : "default");
 VAR_7->max_sdu = VAR_1;
      }
      break;
    case 128:
      if (VAR_7->max_sdu == 0 || VAR_7->max_sdu > VAR_8) {
 FUNC_0 (VAR_4, "%sing max_sdu", VAR_7->max_sdu ? "capp" : "default");
 VAR_7->max_sdu = VAR_8;
      }
      break;
  }
  return 0;
}
