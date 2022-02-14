
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct in6_ifstat {int dummy; } ;
struct in6_ifextra {struct in6_ifextra* icmp6_ifstat; struct in6_ifextra* in6_ifstat; int lltable; int nd_ifinfo; int scope6_id; } ;
struct ifnet {int dummy; } ;
struct icmp6_ifstat {int dummy; } ;


 int FUNC_0 (struct in6_ifextra*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct in6_ifextra*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct ifnet *VAR_1, void *VAR_2)
{
 struct in6_ifextra *VAR_3 = (struct in6_ifextra *)VAR_2;

 FUNC_3(VAR_1);
 FUNC_5(VAR_3->scope6_id);
 FUNC_4(VAR_1, VAR_3->nd_ifinfo);
 FUNC_2(VAR_3->lltable);
 FUNC_0(VAR_3->in6_ifstat,
     sizeof(struct in6_ifstat) / sizeof(uint64_t));
 FUNC_1(VAR_3->in6_ifstat, VAR_0);
 FUNC_0(VAR_3->icmp6_ifstat,
     sizeof(struct icmp6_ifstat) / sizeof(uint64_t));
 FUNC_1(VAR_3->icmp6_ifstat, VAR_0);
 FUNC_1(VAR_3, VAR_0);
}
