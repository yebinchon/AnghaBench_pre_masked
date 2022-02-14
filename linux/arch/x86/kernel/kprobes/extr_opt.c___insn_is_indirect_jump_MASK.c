
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* bytes; } ;
struct TYPE_3__ {int value; } ;
struct insn {TYPE_2__ opcode; TYPE_1__ modrm; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct insn *VAR_0)
{
 return ((VAR_0->opcode.bytes[0] == 0xff &&
  (FUNC_0(VAR_0->modrm.value) & 6) == 4) ||
  VAR_0->opcode.bytes[0] == 0xea);
}
