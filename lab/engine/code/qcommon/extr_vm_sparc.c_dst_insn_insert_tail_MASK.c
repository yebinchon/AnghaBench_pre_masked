
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_info {struct dst_insn* dst_last; struct dst_insn* dst_first; } ;
struct dst_insn {struct dst_insn* next; } ;



__attribute__((used)) static void FUNC_0(struct func_info * const VAR_0,
     struct dst_insn *VAR_1)
{
 if (!VAR_0->dst_first) {
  VAR_0->dst_first = VAR_0->dst_last = VAR_1;
 } else {
  VAR_0->dst_last->next = VAR_1;
  VAR_0->dst_last = VAR_1;
 }
}
