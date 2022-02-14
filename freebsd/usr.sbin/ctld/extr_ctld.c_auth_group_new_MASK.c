
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int conf_auth_groups; } ;
struct auth_group {struct conf* ag_conf; int ag_portals; int ag_names; int ag_auths; int ag_name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct auth_group*,int ) ;
 int VAR_0 ;
 struct auth_group* FUNC_2 (struct conf*,char const*) ;
 struct auth_group* FUNC_3 (int,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,char const*) ;

struct auth_group *
FUNC_7(struct conf *VAR_1, const char *VAR_2)
{
 struct auth_group *VAR_3;

 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3 != ((void*)0)) {
   FUNC_6("duplicated auth-group \"%s\"", VAR_2);
   return (((void*)0));
  }
 }

 VAR_3 = FUNC_3(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_5(1, "calloc");
 if (VAR_2 != ((void*)0))
  VAR_3->ag_name = FUNC_4(VAR_2);
 FUNC_0(&VAR_3->ag_auths);
 FUNC_0(&VAR_3->ag_names);
 FUNC_0(&VAR_3->ag_portals);
 VAR_3->ag_conf = VAR_1;
 FUNC_1(&VAR_1->conf_auth_groups, VAR_3, VAR_0);

 return (VAR_3);
}
