
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kgdb_bkpt {scalar_t__ bpt_addr; scalar_t__ saved_instr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (void*,int ) ;

int FUNC_3(struct kgdb_bkpt *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1 != VAR_2);

 VAR_4 = FUNC_1((void *)VAR_3->bpt_addr, (u32 *)VAR_3->saved_instr);
 if (VAR_4)
  return VAR_4;

 return FUNC_2((void *)VAR_3->bpt_addr,
   (u32)VAR_0);
}
