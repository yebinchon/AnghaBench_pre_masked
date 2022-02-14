
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp {int mp; int ipv6cp; int ipcp; } ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

size_t
FUNC_3(struct ncp *VAR_0)
{
  size_t VAR_1;

  VAR_1 = FUNC_0(&VAR_0->ipcp);

  VAR_1 += FUNC_1(&VAR_0->ipv6cp);

  VAR_1 += FUNC_2(&VAR_0->mp);

  return VAR_1;
}
