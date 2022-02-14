
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_short ;
struct inpcbinfo {int ipi_hashfields; struct inpcbgroup* ipi_pcbgroups; } ;
struct inpcbgroup {int dummy; } ;
struct in_addr {int s_addr; } ;




 size_t FUNC_0 (struct inpcbinfo*,int) ;
 int FUNC_1 (struct in_addr,struct in_addr) ;
 int FUNC_2 (struct in_addr,int,struct in_addr,int) ;

struct inpcbgroup *
FUNC_3(struct inpcbinfo *VAR_0, struct in_addr VAR_1,
    u_short VAR_2, struct in_addr VAR_3, u_short VAR_4)
{
 uint32_t VAR_5;






 switch (VAR_0->ipi_hashfields) {
 case 128:



  VAR_5 = VAR_3.s_addr ^ VAR_4;

  break;

 case 129:



  VAR_5 = VAR_3.s_addr ^ VAR_1.s_addr;

  break;

 default:
  VAR_5 = 0;
 }
 return (&VAR_0->ipi_pcbgroups[FUNC_0(VAR_0,
     VAR_5)]);
}
