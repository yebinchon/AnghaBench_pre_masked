
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct coverage_entry {int regs; TYPE_1__* header; } ;
typedef int kprobe_opcode_t ;
typedef enum decode_reg_type { ____Placeholder_decode_reg_type } decode_reg_type ;
struct TYPE_4__ {int bits; } ;
struct TYPE_3__ {TYPE_2__ type_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct coverage_entry *VAR_5, kprobe_opcode_t VAR_6)
{
 int VAR_7 = VAR_5->header->type_regs.bits >> VAR_4;
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < 20; VAR_8 += 4) {
  enum decode_reg_type VAR_9 = (VAR_7 >> VAR_8) & 0xf;
  int VAR_10 = (VAR_6 >> VAR_8) & 0xf;
  int VAR_11;

  if (!VAR_9)
   continue;

  if (VAR_10 == 13)
   VAR_11 = VAR_3;
  else if (VAR_10 == 15)
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_0;
  VAR_5->regs &= ~(VAR_11 << VAR_8);

  switch (VAR_9) {

  case 137:
  case 138:
  case 129:
   break;

  case 128:
   if (VAR_10 != 13)
    return;
   break;

  case 130:
   if (VAR_10 != 15)
    return;
   break;

  case 133:
   if (VAR_10 == 13)
    return;
   break;

  case 132:
  case 131:
   if (VAR_10 == 13 || VAR_10 == 15)
    return;
   break;

  case 135:
   if (!FUNC_0(VAR_6))
    break;
   if (VAR_10 == 15) {
    VAR_5->regs &= ~(VAR_2 << VAR_8);
    return;
   }
   break;

  case 136:
  case 134:
   if (VAR_10 == 15)
    return;
   break;
  }

 }
}
