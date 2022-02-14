
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct module {int name; } ;
struct TYPE_7__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_6__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_5__ {int st_value; int st_name; } ;
typedef TYPE_1__ Elf32_Sym ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (char*,unsigned int,size_t) ;
 int FUNC_5 (char*,int ,int,...) ;

int FUNC_6(Elf32_Shdr *VAR_1,
         const char *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4,
         struct module *VAR_5)
{
 unsigned int VAR_6;
 Elf32_Rela *VAR_7 = (void *)VAR_1[VAR_4].sh_addr;
 Elf32_Sym *VAR_8;
 unsigned char *VAR_9;
 uint32_t VAR_10;

 FUNC_4("Applying relocate section %u to %u\n", VAR_4,
   VAR_1[VAR_4].sh_info);

 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_4].sh_size / sizeof(*VAR_7); VAR_6++) {
  VAR_9 = (char *)VAR_1[VAR_1[VAR_4].sh_info].sh_addr
   + VAR_7[VAR_6].r_offset;
  VAR_8 = (Elf32_Sym *)VAR_1[VAR_3].sh_addr
   + FUNC_0(VAR_7[VAR_6].r_info);
  VAR_10 = VAR_8->st_value + VAR_7[VAR_6].r_addend;

  switch (FUNC_1(VAR_7[VAR_6].r_info)) {
  case 159:
  case 160:
  case 162:
  case 161:
  case 163:
   break;

  case 164:
  case 158:
   *(uint32_t *)VAR_9 += VAR_10;
   break;

  case 156:
   if (FUNC_2(VAR_9)) {
    VAR_10 -= ((unsigned long)VAR_9 & -4) + 4;
    if ((VAR_10 & 3) != 0 ||
        ((VAR_10 + (1 << 19)) >> 20) != 0) {
     FUNC_5("%s: relocation out of range, "
            "section %d reloc %d "
            "sym '%s'\n",
            VAR_5->name, VAR_4, VAR_6,
            VAR_2 + VAR_8->st_name);
     return -VAR_0;
    }
    VAR_10 = (signed int)VAR_10 >> 2;
   } else if (FUNC_3(VAR_9)) {
    VAR_10 -= (((unsigned long)VAR_9 + 3) & -4);
    if ((VAR_10 & 3) != 0 ||
        (signed int)VAR_10 >> 18 != -1) {
     FUNC_5("%s: relocation out of range, "
            "section %d reloc %d "
            "sym '%s'\n",
            VAR_5->name, VAR_4, VAR_6,
            VAR_2 + VAR_8->st_name);
     return -VAR_0;
    }
    VAR_10 = (signed int)VAR_10 >> 2;
   }
   break;

  case 144:
  case 142:
  case 140:
  case 138:
  case 136:
  case 134:
  case 132:
  case 130:
  case 128:
  case 154:
  case 152:
  case 150:
  case 148:
  case 146:
   FUNC_5("%s: unexpected FLIX relocation: %u\n",
          VAR_5->name,
          FUNC_1(VAR_7[VAR_6].r_info));
   return -VAR_0;

  case 157:
  case 145:
  case 143:
  case 141:
  case 139:
  case 137:
  case 135:
  case 133:
  case 131:
  case 129:
  case 155:
  case 153:
  case 151:
  case 149:
  case 147:
   FUNC_5("%s: unexpected ALT relocation: %u\n",
          VAR_5->name,
          FUNC_1(VAR_7[VAR_6].r_info));
   return -VAR_0;

  default:
   FUNC_5("%s: unexpected relocation: %u\n",
          VAR_5->name,
          FUNC_1(VAR_7[VAR_6].r_info));
   return -VAR_0;
  }
 }
 return 0;
}
