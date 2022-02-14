
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gvt {int cmd_table; } ;
struct cmd_entry {TYPE_1__* info; int hlist; } ;
struct TYPE_2__ {int opcode; } ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_gvt *VAR_0, struct cmd_entry *VAR_1)
{
 FUNC_0(VAR_0->cmd_table, &VAR_1->hlist, VAR_1->info->opcode);
}
