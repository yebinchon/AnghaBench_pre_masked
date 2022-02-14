
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int**,int**,int) ;
 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(struct in6_addr *VAR_1, struct in6_addr *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;


 if (0 > VAR_3 || VAR_3 > 128) {
  FUNC_1(VAR_0, "in6_are_prefix_equal: invalid prefix length(%d)\n",
      VAR_3);
  return (0);
 }

 VAR_4 = VAR_3 / 8;
 VAR_5 = VAR_3 % 8;

 if (FUNC_0(&VAR_1->s6_addr, &VAR_2->s6_addr, VAR_4))
  return (0);
 if (VAR_5 != 0 &&
     VAR_1->s6_addr[VAR_4] >> (8 - VAR_5) !=
     VAR_2->s6_addr[VAR_4] >> (8 - VAR_5))
  return (0);

 return (1);
}
