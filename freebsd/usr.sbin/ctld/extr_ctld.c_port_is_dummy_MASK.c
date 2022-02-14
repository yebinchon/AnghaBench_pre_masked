
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {TYPE_1__* p_portal_group; } ;
struct TYPE_2__ {int pg_portals; scalar_t__ pg_foreign; } ;


 scalar_t__ FUNC_0 (int *) ;

int
FUNC_1(struct port *VAR_0)
{

 if (VAR_0->p_portal_group) {
  if (VAR_0->p_portal_group->pg_foreign)
   return (1);
  if (FUNC_0(&VAR_0->p_portal_group->pg_portals))
   return (1);
 }
 return (0);
}
