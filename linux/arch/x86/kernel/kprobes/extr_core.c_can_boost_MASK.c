
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbytes; int* bytes; } ;
struct insn {TYPE_1__ opcode; int attr; } ;
typedef int kprobe_opcode_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int,unsigned long*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct insn *VAR_1, void *VAR_2)
{
 kprobe_opcode_t VAR_3;

 if (FUNC_1((unsigned long)VAR_2))
  return 0;


 if (VAR_1->opcode.nbytes == 2)
  return FUNC_2(VAR_1->opcode.bytes[1],
    (unsigned long *)VAR_0);

 if (VAR_1->opcode.nbytes != 1)
  return 0;


 if (FUNC_3(FUNC_0(VAR_1->attr)))
  return 0;

 VAR_3 = VAR_1->opcode.bytes[0];

 switch (VAR_3 & 0xf0) {
 case 0x60:

  return (VAR_3 != 0x62);
 case 0x70:
  return 0;
 case 0x90:
  return VAR_3 != 0x9a;
 case 0xc0:

  return (0xc1 < VAR_3 && VAR_3 < 0xcc) || VAR_3 == 0xcf;
 case 0xd0:

  return (VAR_3 == 0xd4 || VAR_3 == 0xd5 || VAR_3 == 0xd7);
 case 0xe0:

  return ((VAR_3 & 0x04) || VAR_3 == 0xea);
 case 0xf0:

  return (VAR_3 == 0xf5 || (0xf7 < VAR_3 && VAR_3 < 0xfe));
 default:

  return (VAR_3 != 0x2e && VAR_3 != 0x9a);
 }
}
