
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nptv6_cfg {int flags; } ;
struct in6_addr {int* s6_addr16; scalar_t__* s6_addr32; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct nptv6_cfg *VAR_1, struct in6_addr *VAR_2)
{
 int VAR_3;

 if (VAR_1->flags & VAR_0)
  return (3);


 for (VAR_3 = 4; VAR_3 < 8; VAR_3++)
  if (VAR_2->s6_addr16[VAR_3] != 0xffff)
   break;






 if (VAR_3 == 8 ||
     (VAR_2->s6_addr32[2] == 0 && VAR_2->s6_addr32[3] == 0))
  return (-1);
 return (VAR_3);
}
