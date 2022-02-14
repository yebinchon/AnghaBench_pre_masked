
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct portal_group {int * pg_redirection; int pg_name; } ;
struct pdu {int dummy; } ;
struct connection {TYPE_1__* conn_portal; } ;
struct TYPE_2__ {struct portal_group* p_portal_group; } ;


 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (struct pdu*,int *) ;

__attribute__((used)) static bool
FUNC_2(struct connection *VAR_0, struct pdu *VAR_1)
{
 const struct portal_group *VAR_2;

 VAR_2 = VAR_0->conn_portal->p_portal_group;
 if (VAR_2->pg_redirection == ((void*)0))
  return (0);

 FUNC_0("portal-group \"%s\" configured to redirect to %s",
     VAR_2->pg_name, VAR_2->pg_redirection);
 FUNC_1(VAR_1, VAR_2->pg_redirection);

 return (1);
}
