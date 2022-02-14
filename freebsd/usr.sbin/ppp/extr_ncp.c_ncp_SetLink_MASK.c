
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp {int ipv6cp; int ipcp; } ;
struct link {int dummy; } ;


 int FUNC_0 (int *,struct link*) ;
 int FUNC_1 (int *,struct link*) ;

void
FUNC_2(struct ncp *VAR_0, struct link *VAR_1)
{
  FUNC_0(&VAR_0->ipcp, VAR_1);

  FUNC_1(&VAR_0->ipv6cp, VAR_1);

}
