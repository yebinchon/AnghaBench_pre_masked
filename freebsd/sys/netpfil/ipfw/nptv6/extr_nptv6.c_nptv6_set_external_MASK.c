
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct nptv6_cfg {int flags; int mask; struct in6_addr external; } ;


 int FUNC_0 (struct in6_addr*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct nptv6_cfg*) ;

__attribute__((used)) static void
FUNC_2(struct nptv6_cfg *VAR_1, struct in6_addr *VAR_2)
{

 VAR_1->external = *VAR_2;
 FUNC_0(&VAR_1->external, &VAR_1->mask);
 FUNC_1(VAR_1);
 VAR_1->flags |= VAR_0;
}
