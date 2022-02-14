
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_bkpt {scalar_t__ saved_instr; scalar_t__ bpt_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,unsigned int) ;

int FUNC_2(struct kgdb_bkpt *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;
 unsigned int *VAR_5 = (unsigned int *)VAR_2->bpt_addr;

 VAR_3 = FUNC_1(VAR_5, VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_5, VAR_0);
 if (VAR_3)
  return -VAR_1;

 *(unsigned int *)VAR_2->saved_instr = VAR_4;

 return 0;
}
