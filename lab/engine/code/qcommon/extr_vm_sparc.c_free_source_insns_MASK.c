
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct src_insn {struct src_insn* next; } ;
struct func_info {TYPE_1__* first; } ;
struct TYPE_2__ {struct src_insn* next; } ;


 int FUNC_0 (struct src_insn*) ;

__attribute__((used)) static void FUNC_1(struct func_info * const VAR_0)
{
 struct src_insn *VAR_1 = VAR_0->first->next;

 while (VAR_1) {
  struct src_insn *VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
