
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_entry {int dummy; } ;
struct insn {int opcode; int offset; } ;


 int FUNC_0 (struct jump_entry*) ;
 int FUNC_1 (struct jump_entry*) ;

__attribute__((used)) static void FUNC_2(struct jump_entry *VAR_0, struct insn *VAR_1)
{

 VAR_1->opcode = 0xc004;
 VAR_1->offset = (FUNC_1(VAR_0) - FUNC_0(VAR_0)) >> 1;
}
