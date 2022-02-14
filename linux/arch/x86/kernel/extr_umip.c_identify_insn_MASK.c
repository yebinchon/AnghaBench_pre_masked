
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; int nbytes; } ;
struct TYPE_3__ {int* bytes; } ;
struct insn {TYPE_2__ modrm; TYPE_1__ opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct insn*) ;

__attribute__((used)) static int FUNC_2(struct insn *VAR_6)
{

 FUNC_1(VAR_6);

 if (!VAR_6->modrm.nbytes)
  return -VAR_0;


 if (VAR_6->opcode.bytes[0] != 0xf)
  return -VAR_0;

 if (VAR_6->opcode.bytes[1] == 0x1) {
  switch (FUNC_0(VAR_6->modrm.value)) {
  case 0:
   return VAR_1;
  case 1:
   return VAR_2;
  case 4:
   return VAR_4;
  default:
   return -VAR_0;
  }
 } else if (VAR_6->opcode.bytes[1] == 0x0) {
  if (FUNC_0(VAR_6->modrm.value) == 0)
   return VAR_3;
  else if (FUNC_0(VAR_6->modrm.value) == 1)
   return VAR_5;
  else
   return -VAR_0;
 } else {
  return -VAR_0;
 }
}
