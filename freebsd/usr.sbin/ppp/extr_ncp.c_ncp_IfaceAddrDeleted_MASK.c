
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp {int ipcp; } ;
struct iface_addr {int ifa; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct iface_addr const*) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(struct ncp *VAR_1, const struct iface_addr *VAR_2)
{
  if (FUNC_1(&VAR_2->ifa) == VAR_0)
    FUNC_0(&VAR_1->ipcp, VAR_2);
}
