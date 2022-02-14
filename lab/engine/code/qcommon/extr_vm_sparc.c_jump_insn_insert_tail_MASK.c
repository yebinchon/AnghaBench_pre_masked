
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_insn {struct jump_insn* next; } ;
struct func_info {struct jump_insn* jump_last; struct jump_insn* jump_first; } ;



__attribute__((used)) static void FUNC_0(struct func_info * const VAR_0,
      struct jump_insn *VAR_1)
{
 if (!VAR_0->jump_first) {
  VAR_0->jump_first = VAR_0->jump_last = VAR_1;
 } else {
  VAR_0->jump_last->next = VAR_1;
  VAR_0->jump_last = VAR_1;
 }
}
