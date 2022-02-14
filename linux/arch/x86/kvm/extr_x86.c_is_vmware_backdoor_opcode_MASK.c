
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {int opcode_len; int b; } ;



__attribute__((used)) static bool FUNC_0(struct x86_emulate_ctxt *VAR_0)
{
 switch (VAR_0->opcode_len) {
 case 1:
  switch (VAR_0->b) {
  case 0xe4:
  case 0xe5:
  case 0xec:
  case 0xed:
  case 0xe6:
  case 0xe7:
  case 0xee:
  case 0xef:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
   return 1;
  }
  break;
 case 2:
  switch (VAR_0->b) {
  case 0x33:
   return 1;
  }
  break;
 }

 return 0;
}
