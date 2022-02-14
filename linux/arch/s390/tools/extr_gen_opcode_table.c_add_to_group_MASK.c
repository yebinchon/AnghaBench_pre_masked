
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_group {int count; int offset; TYPE_1__* type; int opcode; } ;
struct insn {TYPE_1__* type; int opcode; } ;
struct gen_opcode {int nr_groups; struct insn_group* group; } ;
struct TYPE_2__ {scalar_t__ byte; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct insn_group* FUNC_2 (struct insn_group*,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct gen_opcode *VAR_1, struct insn *VAR_2, int VAR_3)
{
 struct insn_group *VAR_4;

 VAR_4 = VAR_1->group ? &VAR_1->group[VAR_1->nr_groups - 1] : ((void*)0);
 if (VAR_4 && (!FUNC_3(VAR_4->opcode, VAR_2->opcode, 2) || VAR_4->type->byte == 0)) {
  VAR_4->count++;
  return;
 }
 VAR_1->nr_groups++;
 VAR_1->group = FUNC_2(VAR_1->group, VAR_1->nr_groups * sizeof(*VAR_1->group));
 if (!VAR_1->group)
  FUNC_0(VAR_0);
 VAR_4 = &VAR_1->group[VAR_1->nr_groups - 1];
 FUNC_1(VAR_4->opcode, VAR_2->opcode, 2);
 VAR_4->type = VAR_2->type;
 VAR_4->offset = VAR_3;
 VAR_4->count = 1;
}
