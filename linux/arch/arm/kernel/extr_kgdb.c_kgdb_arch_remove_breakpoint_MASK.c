
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_bkpt {scalar_t__ saved_instr; scalar_t__ bpt_addr; } ;


 int FUNC_0 (void*,unsigned int) ;

int FUNC_1(struct kgdb_bkpt *VAR_0)
{

 FUNC_0((void *)VAR_0->bpt_addr, *(unsigned int *)VAR_0->saved_instr);

 return 0;
}
