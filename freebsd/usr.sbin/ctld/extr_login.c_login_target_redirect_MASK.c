
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pdu {int dummy; } ;
struct connection {TYPE_3__* conn_target; TYPE_2__* conn_portal; } ;
struct TYPE_6__ {char* t_redirection; int t_name; } ;
struct TYPE_5__ {TYPE_1__* p_portal_group; } ;
struct TYPE_4__ {int * pg_redirection; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (struct pdu*,char const*) ;

__attribute__((used)) static bool
FUNC_3(struct connection *VAR_0, struct pdu *VAR_1)
{
 const char *VAR_2;

 FUNC_0(VAR_0->conn_portal->p_portal_group->pg_redirection == ((void*)0));

 if (VAR_0->conn_target == ((void*)0))
  return (0);

 VAR_2 = VAR_0->conn_target->t_redirection;
 if (VAR_2 == ((void*)0))
  return (0);

 FUNC_1("target \"%s\" configured to redirect to %s",
   VAR_0->conn_target->t_name, VAR_2);
 FUNC_2(VAR_1, VAR_2);

 return (1);
}
