
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_group {char* opcode; int offset; int count; TYPE_1__* type; } ;
struct gen_opcode {int nr_groups; struct insn_group* group; } ;
struct TYPE_2__ {int mask; int byte; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct gen_opcode *VAR_0)
{
 struct insn_group *VAR_1;
 int VAR_2;

 FUNC_0("#define OPCODE_OFFSET_INITIALIZER { \\\n");
 for (VAR_2 = 0; VAR_2 < VAR_0->nr_groups; VAR_2++) {
  VAR_1 = &VAR_0->group[VAR_2];
  FUNC_0("\t{ .opcode = 0x%.2s, .mask = 0x%02x, .byte = %d, .offset = %d, .count = %d }, \\\n",
         VAR_1->opcode, VAR_1->type->mask, VAR_1->type->byte, VAR_1->offset, VAR_1->count);
 }
 FUNC_0("}\n\n");
}
