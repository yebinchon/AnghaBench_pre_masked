
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int value; } ;
struct TYPE_6__ {int nbytes; int* bytes; } ;
struct TYPE_5__ {int nbytes; } ;
struct insn {TYPE_4__ immediate; int length; TYPE_2__ prefixes; TYPE_1__ opcode; } ;
struct TYPE_7__ {int opc1; int offs; int ilen; } ;
struct arch_uprobe {int * ops; TYPE_3__ branch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct insn*) ;
 int FUNC_1 (struct insn*) ;
 int FUNC_2 (struct arch_uprobe*,struct insn*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct arch_uprobe *VAR_3, struct insn *VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 switch (VAR_5) {
 case 0xeb:
 case 0xe9:
 case 0x90:
  break;

 case 0xe8:
  FUNC_2(VAR_3, VAR_4);
  break;

 case 0x0f:
  if (VAR_4->opcode.nbytes != 2)
   return -VAR_0;




  VAR_5 = FUNC_1(VAR_4) - 0x10;

 default:
  if (!FUNC_3(VAR_5))
   return -VAR_0;
 }






 for (VAR_6 = 0; VAR_6 < VAR_4->prefixes.nbytes; VAR_6++) {
  if (VAR_4->prefixes.bytes[VAR_6] == 0x66)
   return -VAR_1;
 }

 VAR_3->branch.opc1 = VAR_5;
 VAR_3->branch.ilen = VAR_4->length;
 VAR_3->branch.offs = VAR_4->immediate.value;

 VAR_3->ops = &VAR_2;
 return 0;
}
