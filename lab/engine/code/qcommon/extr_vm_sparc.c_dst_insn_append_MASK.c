
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_info {int insn_index; int insn_buf; } ;
struct dst_insn {int * code; } ;


 int FUNC_0 (struct func_info* const,struct dst_insn*) ;
 struct dst_insn* FUNC_1 (struct func_info* const,int,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct func_info * const VAR_0)
{
 int VAR_1 = (sizeof(unsigned int) * VAR_0->insn_index);
 struct dst_insn *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_0->insn_index, ((void*)0), VAR_1);
 if (VAR_1)
  FUNC_2(&VAR_2->code[0], VAR_0->insn_buf, VAR_1);
 FUNC_0(VAR_0, VAR_2);

 VAR_0->insn_index = 0;
}
