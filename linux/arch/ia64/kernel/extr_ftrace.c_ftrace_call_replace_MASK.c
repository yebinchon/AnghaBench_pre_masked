
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_call_insn {unsigned long imm39_l; unsigned long imm39_h; unsigned long imm20; unsigned long i; } ;


 unsigned char* VAR_0 ;

__attribute__((used)) static unsigned char *FUNC_0(unsigned long VAR_1, unsigned long VAR_2)
{
 struct ftrace_call_insn *VAR_3 = (void *)VAR_0;
 unsigned long VAR_4 = VAR_2 - (VAR_1 + 0x10);

 VAR_3->imm39_l = VAR_4 >> 24;
 VAR_3->imm39_h = VAR_4 >> 40;
 VAR_3->imm20 = VAR_4 >> 4;
 VAR_3->i = VAR_4 >> 63;
 return VAR_0;
}
