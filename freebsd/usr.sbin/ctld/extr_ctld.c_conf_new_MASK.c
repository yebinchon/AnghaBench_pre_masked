
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int conf_isns_period; int conf_isns_timeout; int conf_timeout; int conf_maxproc; scalar_t__ conf_debug; int conf_isns; int conf_pports; int conf_portal_groups; int conf_ports; int conf_auth_groups; int conf_targets; int conf_luns; } ;


 int FUNC_0 (int *) ;
 struct conf* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;

struct conf *
FUNC_3(void)
{
 struct conf *VAR_0;

 VAR_0 = FUNC_1(1, sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  FUNC_2(1, "calloc");
 FUNC_0(&VAR_0->conf_luns);
 FUNC_0(&VAR_0->conf_targets);
 FUNC_0(&VAR_0->conf_auth_groups);
 FUNC_0(&VAR_0->conf_ports);
 FUNC_0(&VAR_0->conf_portal_groups);
 FUNC_0(&VAR_0->conf_pports);
 FUNC_0(&VAR_0->conf_isns);

 VAR_0->conf_isns_period = 900;
 VAR_0->conf_isns_timeout = 5;
 VAR_0->conf_debug = 0;
 VAR_0->conf_timeout = 60;
 VAR_0->conf_maxproc = 30;

 return (VAR_0);
}
