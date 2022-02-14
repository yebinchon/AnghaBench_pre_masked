
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr; } ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct in6_addr *VAR_2, *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = (const struct in6_addr *)VAR_0;
 VAR_3 = (const struct in6_addr *)VAR_1;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_5 == 0 && VAR_4 < sizeof(struct in6_addr); VAR_4++) {
  if (VAR_2->s6_addr[VAR_4] > VAR_3->s6_addr[VAR_4])
   VAR_5 = 1;
  else if (VAR_2->s6_addr[VAR_4] < VAR_3->s6_addr[VAR_4])
   VAR_5 = -1;
 }
 return (VAR_5);
}
