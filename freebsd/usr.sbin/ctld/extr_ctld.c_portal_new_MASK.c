
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct portal_group {int pg_portals; } ;
struct portal {struct portal_group* p_portal_group; int p_targets; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct portal*,int ) ;
 struct portal* FUNC_2 (int,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct portal *
FUNC_4(struct portal_group *VAR_1)
{
 struct portal *VAR_2;

 VAR_2 = FUNC_2(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  FUNC_3(1, "calloc");
 FUNC_0(&VAR_2->p_targets);
 VAR_2->p_portal_group = VAR_1;
 FUNC_1(&VAR_1->pg_portals, VAR_2, VAR_0);
 return (VAR_2);
}
