
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp {int ipv6cp; int ipcp; } ;
struct iface_addr {int ifa; } ;




 int FUNC_0 (int *,struct iface_addr const*) ;
 int FUNC_1 (int *,struct iface_addr const*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ncp *VAR_0, const struct iface_addr *VAR_1)
{
  switch (FUNC_2(&VAR_1->ifa)) {
  case 129:
    FUNC_0(&VAR_0->ipcp, VAR_1);
    break;

  case 128:
    FUNC_1(&VAR_0->ipv6cp, VAR_1);
    break;

  }
}
