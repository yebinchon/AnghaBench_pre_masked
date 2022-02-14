
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {int pr_ip6s; int * pr_ip6; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct in6_addr const*) ;
 int FUNC_1 (int *,struct in6_addr const*) ;

int
FUNC_2(const struct prison *VAR_1, const struct in6_addr *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;




 if (FUNC_0(&VAR_1->pr_ip6[0], VAR_2))
  return (0);




 VAR_4 = 0;
 VAR_5 = VAR_1->pr_ip6s - 2;
 while (VAR_4 <= VAR_5) {
  VAR_3 = (VAR_4 + VAR_5) / 2;
  VAR_6 = FUNC_1(&VAR_1->pr_ip6[VAR_3+1], VAR_2);
  if (VAR_6 > 0)
   VAR_5 = VAR_3 - 1;
  else if (VAR_6 < 0)
   VAR_4 = VAR_3 + 1;
  else
   return (0);
 }

 return (VAR_0);
}
