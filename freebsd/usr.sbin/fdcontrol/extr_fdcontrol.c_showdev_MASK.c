
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fd_drivetype { ____Placeholder_fd_drivetype } fd_drivetype ;


 int FUNC_0 (int,char const**,char const**) ;
 int FUNC_1 (char*,char const*,...) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(enum fd_drivetype VAR_1, const char *VAR_2)
{
 const char *VAR_3, *VAR_4;

 FUNC_0(VAR_1, &VAR_3, &VAR_4);
 if (VAR_0)
  FUNC_1("%s: %s drive (%s)\n", VAR_2, VAR_3, VAR_4);
 else
  FUNC_1("%s\n", VAR_3);
}
