
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kgdb_bkpt {scalar_t__ bpt_addr; int saved_instr; } ;
struct TYPE_2__ {scalar_t__ gdb_bpt_instr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,unsigned int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct kgdb_bkpt *VAR_2)
{
 int VAR_3;


 FUNC_0(sizeof(int) != VAR_0);

 VAR_3 = FUNC_2(VAR_2->saved_instr, (char *)VAR_2->bpt_addr,
    VAR_0);
 if (VAR_3)
  return VAR_3;


 FUNC_1((void *)VAR_2->bpt_addr,
       *(unsigned int *)VAR_1.gdb_bpt_instr);

 return VAR_3;
}
