
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long got_size; unsigned long plt_size; struct mod_arch_syminfo* syminfo; } ;
struct module {TYPE_1__ arch; } ;
struct mod_arch_syminfo {unsigned long got_offset; unsigned long plt_offset; } ;
struct TYPE_5__ {int r_info; } ;
typedef TYPE_2__ Elf_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_0 ;
__attribute__((used)) static void FUNC_2(Elf_Rela *VAR_1, struct module *VAR_2)
{
 struct mod_arch_syminfo *VAR_3;

 VAR_3 = VAR_2->arch.syminfo + FUNC_0 (VAR_1->r_info);
 switch (FUNC_1 (VAR_1->r_info)) {
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
  if (VAR_3->got_offset == -1UL) {
   VAR_3->got_offset = VAR_2->arch.got_size;
   VAR_2->arch.got_size += sizeof(void*);
  }
  break;
 case 135:
 case 133:
 case 134:
 case 132:
 case 131:
 case 130:
 case 129:
  if (VAR_3->plt_offset == -1UL) {
   VAR_3->plt_offset = VAR_2->arch.plt_size;
   VAR_2->arch.plt_size += VAR_0;
  }
  break;
 case 150:
 case 149:
 case 136:
 case 128:


  break;
 }
}
