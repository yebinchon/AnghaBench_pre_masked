
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long value; } ;
struct TYPE_4__ {int* bytes; } ;
struct insn {TYPE_1__ immediate; scalar_t__ next_byte; TYPE_2__ opcode; } ;



__attribute__((used)) static int FUNC_0(struct insn *VAR_0, unsigned long VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 0;

 switch (VAR_0->opcode.bytes[0]) {
 case 0xe0:
 case 0xe1:
 case 0xe2:
 case 0xe3:
 case 0xe9:
 case 0xeb:
  break;
 case 0x0f:
  if ((VAR_0->opcode.bytes[1] & 0xf0) == 0x80)
   break;
  return 0;
 default:
  if ((VAR_0->opcode.bytes[0] & 0xf0) == 0x70)
   break;
  return 0;
 }
 VAR_3 = (unsigned long)VAR_0->next_byte + VAR_0->immediate.value;

 return (VAR_1 <= VAR_3 && VAR_3 <= VAR_1 + VAR_2);
}
