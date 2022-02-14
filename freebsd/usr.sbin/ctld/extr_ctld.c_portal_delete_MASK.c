
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct portal {struct portal* p_listen; int * p_ai; TYPE_1__* p_portal_group; } ;
struct TYPE_2__ {int pg_portals; } ;


 int FUNC_0 (int *,struct portal*,int ) ;
 int FUNC_1 (struct portal*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct portal *VAR_1)
{

 FUNC_0(&VAR_1->p_portal_group->pg_portals, VAR_1, VAR_0);
 if (VAR_1->p_ai != ((void*)0))
  FUNC_2(VAR_1->p_ai);
 FUNC_1(VAR_1->p_listen);
 FUNC_1(VAR_1);
}
