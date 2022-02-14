
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decode_header {int dummy; } ;
struct arch_probes_insn {int stack_space; } ;
typedef int probes_opcode_t ;
typedef enum probes_insn { ____Placeholder_probes_insn } probes_insn ;


 int VAR_0 ;

enum probes_insn FUNC_0(probes_opcode_t VAR_1,
  struct arch_probes_insn *VAR_2,
  const struct decode_header *VAR_3)
{
 int VAR_4 = VAR_1 & 0xfff;
 VAR_2->stack_space = VAR_4;
 return VAR_0;
}
