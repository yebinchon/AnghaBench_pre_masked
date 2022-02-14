
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kgdb_bkpt {int type; scalar_t__ bpt_addr; int saved_instr; } ;
struct TYPE_2__ {int gdb_bpt_instr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (void*,int ,int ) ;

int FUNC_4(struct kgdb_bkpt *VAR_6)
{
 int VAR_7;

 VAR_6->type = VAR_0;
 VAR_7 = FUNC_1(VAR_6->saved_instr, (char *)VAR_6->bpt_addr,
    VAR_2);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_2((char *)VAR_6->bpt_addr,
     VAR_4.gdb_bpt_instr, VAR_2);
 if (!VAR_7)
  return VAR_7;




 if (FUNC_0(&VAR_5))
  return -VAR_3;
 FUNC_3((void *)VAR_6->bpt_addr, VAR_4.gdb_bpt_instr,
         VAR_2);
 VAR_6->type = VAR_1;

 return 0;
}
