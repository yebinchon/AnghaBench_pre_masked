
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {int dummy; } ;
struct rtable {struct dst_entry dst; } ;
struct net_device {int ifindex; } ;
struct in_addr {int s_addr; } ;
struct TYPE_2__ {int member_0; } ;
struct flowi4 {int flowi4_proto; int daddr; int saddr; int flowi4_oif; TYPE_1__ member_0; } ;
typedef int fl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_1 ;
 struct rtable* FUNC_1 (int *,struct flowi4*) ;
 int FUNC_2 (int *,struct in_addr*,int) ;
 int FUNC_3 (struct flowi4*,int ,int) ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static struct dst_entry *FUNC_5(struct net_device *VAR_2,
      struct in_addr *VAR_3,
      struct in_addr *VAR_4)
{
 struct rtable *VAR_5;
 struct flowi4 VAR_6 = { 0 };

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.flowi4_oif = VAR_2->ifindex;
 FUNC_2(&VAR_6.saddr, VAR_3, sizeof(*VAR_3));
 FUNC_2(&VAR_6.daddr, VAR_4, sizeof(*VAR_4));
 VAR_6.flowi4_proto = VAR_0;

 VAR_5 = FUNC_1(&VAR_1, &VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_4("no route to %pI4\n", &VAR_4->s_addr);
  return ((void*)0);
 }

 return &VAR_5->dst;
}
