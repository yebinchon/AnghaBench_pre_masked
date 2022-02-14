
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_short ;
struct inpcbinfo {int ipi_hashfields; struct inpcbgroup* ipi_pcbgroups; } ;
struct inpcbgroup {int dummy; } ;
struct in6_addr {int* s6_addr32; } ;




 size_t FUNC_0 (struct inpcbinfo*,int) ;
 int FUNC_1 (struct in6_addr const*,struct in6_addr const*) ;
 int FUNC_2 (struct in6_addr const*,int,struct in6_addr const*,int) ;

struct inpcbgroup *
FUNC_3(struct inpcbinfo *VAR_0, const struct in6_addr *VAR_1,
    u_short VAR_2, const struct in6_addr *VAR_3, u_short VAR_4)
{
 uint32_t VAR_5;






 switch (VAR_0->ipi_hashfields) {
 case 128:



  VAR_5 = VAR_3->s6_addr32[3] ^ VAR_4;

  break;

 case 129:



  VAR_5 = VAR_3->s6_addr32[3] ^ VAR_1->s6_addr32[3];

  break;

 default:
  VAR_5 = 0;
 }
 return (&VAR_0->ipi_pcbgroups[FUNC_0(VAR_0,
     VAR_5)]);
}
