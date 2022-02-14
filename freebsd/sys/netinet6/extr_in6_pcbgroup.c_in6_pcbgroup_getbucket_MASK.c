
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct inpcbinfo {int ipi_npcbgroups; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline u_int
FUNC_1(struct inpcbinfo *VAR_0, uint32_t VAR_1)
{




 return (VAR_1 % VAR_0->ipi_npcbgroups);

}
