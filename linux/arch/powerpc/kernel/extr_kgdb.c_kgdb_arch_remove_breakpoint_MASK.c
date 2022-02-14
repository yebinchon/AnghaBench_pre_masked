
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_bkpt {scalar_t__ bpt_addr; scalar_t__ saved_instr; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*,unsigned int) ;

int FUNC_1(struct kgdb_bkpt *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = *(unsigned int *)VAR_1->saved_instr;
 unsigned int *VAR_4 = (unsigned int *)VAR_1->bpt_addr;

 VAR_2 = FUNC_0(VAR_4, VAR_3);
 if (VAR_2)
  return -VAR_0;

 return 0;
}
