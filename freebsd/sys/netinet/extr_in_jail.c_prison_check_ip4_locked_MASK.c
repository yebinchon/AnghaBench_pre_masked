
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prison {int pr_ip4s; TYPE_1__* pr_ip4; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct in_addr const*) ;

int
FUNC_1(const struct prison *VAR_1, const struct in_addr *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;




 if (VAR_1->pr_ip4[0].s_addr == VAR_2->s_addr)
  return (0);




 VAR_4 = 0;
 VAR_5 = VAR_1->pr_ip4s - 2;
 while (VAR_4 <= VAR_5) {
  VAR_3 = (VAR_4 + VAR_5) / 2;
  VAR_6 = FUNC_0(&VAR_1->pr_ip4[VAR_3+1], VAR_2);
  if (VAR_6 > 0)
   VAR_5 = VAR_3 - 1;
  else if (VAR_6 < 0)
   VAR_4 = VAR_3 + 1;
  else
   return (0);
 }

 return (VAR_0);
}
