
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct ip {struct in_addr ip_dst; int ip_sum; int ip_src; } ;
struct alias_link {int dummy; } ;
struct TYPE_2__ {int gh_call_id; } ;
typedef TYPE_1__ GreHdr ;


 int FUNC_0 (int *,struct in_addr*,struct in_addr*,int) ;
 struct alias_link* FUNC_1 (struct libalias*,int ,struct in_addr,int ) ;
 struct in_addr FUNC_2 (struct alias_link*) ;
 int FUNC_3 (struct alias_link*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct ip*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct libalias *VAR_2, struct ip *VAR_3)
{
 GreHdr *VAR_4;
 struct alias_link *VAR_5;

 VAR_4 = (GreHdr *) FUNC_4(VAR_3);


 if ((FUNC_5(*((u_int32_t *) VAR_4)) & VAR_0) != VAR_1)
  return (-1);

 VAR_5 = FUNC_1(VAR_2, VAR_3->ip_src, VAR_3->ip_dst, VAR_4->gh_call_id);
 if (VAR_5 != ((void*)0)) {
  struct in_addr VAR_6 = FUNC_2(VAR_5);


  VAR_4->gh_call_id = FUNC_3(VAR_5);


  FUNC_0(&VAR_3->ip_sum,
      &VAR_6, &VAR_3->ip_dst, 2);
  VAR_3->ip_dst = VAR_6;
 }
 return (0);
}
