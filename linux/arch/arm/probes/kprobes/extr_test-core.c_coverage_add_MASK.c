
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bits; } ;
struct TYPE_6__ {int bits; } ;
struct TYPE_5__ {int bits; } ;
struct decode_header {TYPE_3__ value; TYPE_2__ mask; TYPE_1__ type_regs; } ;
struct coverage_entry {unsigned int nesting; int matched; struct decode_header* header; } ;
typedef int kprobe_opcode_t ;
typedef enum decode_type { ____Placeholder_decode_type } decode_type ;
struct TYPE_8__ {int num_entries; struct coverage_entry* base; } ;




 int VAR_0 ;




 TYPE_4__ VAR_1 ;
 int FUNC_0 (struct coverage_entry*,int) ;

__attribute__((used)) static void FUNC_1(kprobe_opcode_t VAR_2)
{
 struct coverage_entry *VAR_3 = VAR_1.base;
 struct coverage_entry *VAR_4 = VAR_1.base + VAR_1.num_entries;
 bool VAR_5 = 0;
 unsigned VAR_6 = 0;

 for (; VAR_3 < VAR_4; ++VAR_3) {
  const struct decode_header *VAR_7 = VAR_3->header;
  enum decode_type VAR_8 = VAR_7->type_regs.bits & VAR_0;

  if (VAR_3->nesting > VAR_6)
   continue;

  if (VAR_3->nesting < VAR_6)
   break;

  if (!VAR_5) {
   if ((VAR_2 & VAR_7->mask.bits) != VAR_7->value.bits)
    continue;
   VAR_3->matched = 1;
  }

  switch (VAR_8) {

  case 128:
   ++VAR_6;
   break;

  case 133:
  case 129:
  case 132:
   FUNC_0(VAR_3, VAR_2);
   return;

  case 131:
   VAR_5 = 1;
   break;

  case 130:
  default:
   return;
  }

 }
}
