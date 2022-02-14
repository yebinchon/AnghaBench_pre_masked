
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isns {struct conf* i_conf; } ;
struct conf {int conf_targets; int conf_isns_timeout; int conf_portal_groups; } ;
typedef int hostname ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct isns*) ;
 int FUNC_4 (struct isns*,int,char*) ;
 int FUNC_5 (struct isns*,int,char*) ;
 int FUNC_6 (int ,int) ;

void
FUNC_7(struct isns *VAR_0, struct isns *VAR_1)
{
 struct conf *VAR_2 = VAR_0->i_conf;
 int VAR_3;
 char VAR_4[256];

 if (FUNC_0(&VAR_2->conf_targets) ||
     FUNC_0(&VAR_2->conf_portal_groups))
  return;
 FUNC_6(VAR_2->conf_isns_timeout, 0);
 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 < 0) {
  FUNC_6(0, 0);
  return;
 }
 FUNC_2(VAR_4, sizeof(VAR_4));

 if (VAR_1 == ((void*)0) || FUNC_0(&VAR_1->i_conf->conf_targets))
  VAR_1 = VAR_0;
 FUNC_4(VAR_1, VAR_3, VAR_4);
 FUNC_5(VAR_0, VAR_3, VAR_4);
 FUNC_1(VAR_3);
 FUNC_6(0, 0);
}
