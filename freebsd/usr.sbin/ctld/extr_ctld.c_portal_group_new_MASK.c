
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct portal_group {scalar_t__ pg_tag; struct conf* pg_conf; int pg_ports; int pg_portals; int pg_options; int pg_name; } ;
struct conf {int conf_portal_groups; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct portal_group*,int ) ;
 struct portal_group* FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,char const*) ;
 int VAR_0 ;
 struct portal_group* FUNC_6 (struct conf*,char const*) ;

struct portal_group *
FUNC_7(struct conf *VAR_1, const char *VAR_2)
{
 struct portal_group *VAR_3;

 VAR_3 = FUNC_6(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_5("duplicated portal-group \"%s\"", VAR_2);
  return (((void*)0));
 }

 VAR_3 = FUNC_2(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_4(1, "calloc");
 VAR_3->pg_name = FUNC_3(VAR_2);
 FUNC_0(&VAR_3->pg_options);
 FUNC_0(&VAR_3->pg_portals);
 FUNC_0(&VAR_3->pg_ports);
 VAR_3->pg_conf = VAR_1;
 VAR_3->pg_tag = 0;
 FUNC_1(&VAR_1->conf_portal_groups, VAR_3, VAR_0);

 return (VAR_3);
}
