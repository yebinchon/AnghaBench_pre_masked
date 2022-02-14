
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {char* s6_addr; } ;


 scalar_t__ FUNC_0 (void*,void*,int) ;

int
FUNC_1(struct in6_addr *VAR_0, int VAR_1,
 struct in6_addr *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 char VAR_6;

 if (VAR_1 < VAR_3)
  return (0);

 VAR_4 = VAR_3 / 8;
 VAR_5 = VAR_3 % 8;
 VAR_6 = 0xff << (8 - VAR_5);

 if (FUNC_0((void *)VAR_0, (void *)VAR_2, VAR_4))
  return (0);

 if (VAR_5 == 0 ||
     ((VAR_0->s6_addr[VAR_4] & VAR_6) ==
      (VAR_2->s6_addr[VAR_4] & VAR_6))) {
  return (1);
 }

 return (0);
}
