
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fd_drivetype { ____Placeholder_fd_drivetype } fd_drivetype ;
void
FUNC_0(enum fd_drivetype VAR_0, const char **VAR_1, const char **VAR_2)
{

 switch (VAR_0) {
 default:
  *VAR_1 = "unknown";
  *VAR_2 = "unknown drive type";
  break;

 case 129:
  *VAR_1 = "360K";
  *VAR_2 = "5.25\" double-density";
  break;

 case 132:
  *VAR_1 = "1.2M";
  *VAR_2 = "5.25\" high-density";
  break;

 case 128:
  *VAR_1 = "720K";
  *VAR_2 = "3.5\" double-density";
  break;

 case 131:
  *VAR_1 = "1.44M";
  *VAR_2 = "3.5\" high-density";
  break;

 case 130:
  *VAR_1 = "2.88M";
  *VAR_2 = "3.5\" extra-density";
  break;
 }
}
