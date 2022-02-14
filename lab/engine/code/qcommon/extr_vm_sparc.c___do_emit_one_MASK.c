
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_info {unsigned int* insn_buf; int insn_index; } ;



__attribute__((used)) static void FUNC_0(struct func_info * const VAR_0, unsigned int VAR_1)
{
 VAR_0->insn_buf[VAR_0->insn_index++] = VAR_1;
}
