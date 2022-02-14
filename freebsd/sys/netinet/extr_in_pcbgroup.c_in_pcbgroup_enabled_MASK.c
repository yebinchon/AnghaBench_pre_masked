
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcbinfo {scalar_t__ ipi_npcbgroups; } ;



int
FUNC_0(struct inpcbinfo *VAR_0)
{

 return (VAR_0->ipi_npcbgroups > 0);
}
