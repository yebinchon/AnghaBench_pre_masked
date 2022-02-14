
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_t ;
struct src_insn {struct src_insn* next; } ;
struct func_info {struct src_insn* first; int * cached_const; int stack_space; scalar_t__ insn_index; int fpr_pos; int gpr_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct func_info* const) ;
 int FUNC_2 (int *,struct func_info* const,struct src_insn*) ;
 int FUNC_3 (struct func_info* const) ;

__attribute__((used)) static void FUNC_4(vm_t *VAR_2, struct func_info * const VAR_3)
{
 struct src_insn *VAR_4;

 FUNC_1(VAR_3);

 VAR_3->gpr_pos = VAR_1;
 VAR_3->fpr_pos = VAR_0;
 VAR_3->insn_index = 0;

 VAR_3->stack_space = FUNC_0(64, 128);
 VAR_3->cached_const = ((void*)0);

 VAR_4 = VAR_3->first;
 while ((VAR_4 = VAR_4->next) != ((void*)0))
  FUNC_2(VAR_2, VAR_3, VAR_4);

 FUNC_3(VAR_3);
}
