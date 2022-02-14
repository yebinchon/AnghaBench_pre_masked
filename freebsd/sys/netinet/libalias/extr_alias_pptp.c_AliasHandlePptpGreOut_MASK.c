
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct ip {struct in_addr ip_src; int ip_sum; int ip_dst; } ;
struct alias_link {int dummy; } ;
struct TYPE_2__ {int gh_call_id; } ;
typedef TYPE_1__ GreHdr ;


 int FUNC_0 (int *,struct in_addr*,struct in_addr*,int) ;
 struct alias_link* FUNC_1 (struct libalias*,struct in_addr,int ,int ) ;
 struct in_addr FUNC_2 (struct alias_link*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct ip*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct libalias *VAR_2, struct ip *VAR_3)
{
 GreHdr *VAR_4;
 struct alias_link *VAR_5;

 VAR_4 = (GreHdr *) FUNC_3(VAR_3);


 if ((FUNC_4(*((u_int32_t *) VAR_4)) & VAR_0) != VAR_1)
  return (-1);

 VAR_5 = FUNC_1(VAR_2, VAR_3->ip_src, VAR_3->ip_dst, VAR_4->gh_call_id);
 if (VAR_5 != ((void*)0)) {
  struct in_addr VAR_6 = FUNC_2(VAR_5);


  FUNC_0(&VAR_3->ip_sum,
      &VAR_6, &VAR_3->ip_src, 2);
  VAR_3->ip_src = VAR_6;
 }
 return (0);
}
