
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_field {int value; scalar_t__ nbytes; int got; } ;
struct insn {int x86_64; struct insn_field modrm; } ;


 int FUNC_0 (struct insn*) ;

int FUNC_1(struct insn *VAR_0)
{
 struct insn_field *VAR_1 = &VAR_0->modrm;

 if (!VAR_0->x86_64)
  return 0;
 if (!VAR_1->got)
  FUNC_0(VAR_0);




 return (VAR_1->nbytes && (VAR_1->value & 0xc7) == 0x5);
}
