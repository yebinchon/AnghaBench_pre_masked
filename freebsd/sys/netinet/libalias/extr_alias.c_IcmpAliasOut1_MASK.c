
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct ip {struct in_addr ip_src; int ip_sum; int ip_dst; } ;
struct icmp {int icmp_id; int icmp_cksum; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct in_addr*,struct in_addr*,int) ;
 struct alias_link* FUNC_2 (struct libalias*,struct in_addr,int ,int,int) ;
 struct in_addr FUNC_3 (struct alias_link*) ;
 int FUNC_4 (struct alias_link*) ;
 int FUNC_5 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct ip*) ;

__attribute__((used)) static int
FUNC_7(struct libalias *VAR_2, struct ip *VAR_3, int VAR_4)
{




 struct alias_link *VAR_5;
 struct icmp *VAR_6;

 FUNC_5(VAR_2);
 VAR_6 = (struct icmp *)FUNC_6(VAR_3);


 VAR_5 = FUNC_2(VAR_2, VAR_3->ip_src, VAR_3->ip_dst, VAR_6->icmp_id, VAR_4);
 if (VAR_5 != ((void*)0)) {
  u_short VAR_7;
  int VAR_8;

  VAR_7 = FUNC_4(VAR_5);


  VAR_8 = VAR_6->icmp_id;
  VAR_8 -= VAR_7;
  FUNC_0(VAR_8, VAR_6->icmp_cksum);


  VAR_6->icmp_id = VAR_7;


  {
   struct in_addr VAR_9;

   VAR_9 = FUNC_3(VAR_5);
   FUNC_1(&VAR_3->ip_sum,
       &VAR_9, &VAR_3->ip_src, 2);
   VAR_3->ip_src = VAR_9;
  }

  return (VAR_1);
 }
 return (VAR_0);
}
