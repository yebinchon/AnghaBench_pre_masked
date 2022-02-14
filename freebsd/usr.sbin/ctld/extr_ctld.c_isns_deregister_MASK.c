
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isns {struct conf* i_conf; } ;
struct conf {int conf_isns_timeout; int conf_portal_groups; int conf_targets; } ;
typedef int hostname ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct isns*) ;
 int FUNC_4 (struct isns*,int,char*) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(struct isns *VAR_0)
{
 struct conf *VAR_1 = VAR_0->i_conf;
 int VAR_2;
 char VAR_3[256];

 if (FUNC_0(&VAR_1->conf_targets) ||
     FUNC_0(&VAR_1->conf_portal_groups))
  return;
 FUNC_5(VAR_1->conf_isns_timeout, 0);
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 < 0)
  return;
 FUNC_2(VAR_3, sizeof(VAR_3));

 FUNC_4(VAR_0, VAR_2, VAR_3);
 FUNC_1(VAR_2);
 FUNC_5(0, 0);
}
