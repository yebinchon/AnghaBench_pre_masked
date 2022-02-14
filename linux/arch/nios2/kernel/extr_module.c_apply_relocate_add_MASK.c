
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct module {int name; } ;
typedef int int32_t ;
struct TYPE_7__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_6__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_5__ {int st_value; int st_name; } ;
typedef TYPE_1__ Elf32_Sym ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Rela ;
typedef int Elf32_Addr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;







 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (char*,int ,...) ;

int FUNC_4(Elf32_Shdr *VAR_1, const char *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4,
   struct module *VAR_5)
{
 unsigned int VAR_6;
 Elf32_Rela *VAR_7 = (void *)VAR_1[VAR_4].sh_addr;

 FUNC_2("Applying relocate section %u to %u\n", VAR_4,
   VAR_1[VAR_4].sh_info);

 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_4].sh_size / sizeof(*VAR_7); VAR_6++) {

  uint32_t VAR_8;
  uint32_t *VAR_9
   = ((void *)VAR_1[VAR_1[VAR_4].sh_info].sh_addr
      + VAR_7[VAR_6].r_offset);


  Elf32_Sym *VAR_10
   = ((Elf32_Sym *)VAR_1[VAR_3].sh_addr
    + FUNC_0(VAR_7[VAR_6].r_info));
  uint32_t VAR_11 = VAR_10->st_value + VAR_7[VAR_6].r_addend;

  FUNC_2("reltype %d 0x%x name:<%s>\n",
   FUNC_1(VAR_7[VAR_6].r_info),
   VAR_7[VAR_6].r_offset, VAR_2 + VAR_10->st_name);

  switch (FUNC_1(VAR_7[VAR_6].r_info)) {
  case 129:
   break;
  case 134:
   *VAR_9 += VAR_11;
   break;
  case 128:
   VAR_11 -= (uint32_t)VAR_9 + 4;
   if ((int32_t)VAR_11 > 0x7fff ||
    (int32_t)VAR_11 < -(int32_t)0x8000) {
    FUNC_3("module %s: relocation overflow\n",
     VAR_5->name);
    return -VAR_0;
   }
   VAR_8 = *VAR_9;
   *VAR_9 = ((((VAR_8 >> 22) << 16) | (VAR_11 & 0xffff)) << 6) |
    (VAR_8 & 0x3f);
   break;
  case 133:
   if (VAR_11 & 3) {
    FUNC_3("module %s: dangerous relocation\n",
     VAR_5->name);
    return -VAR_0;
   }
   if ((VAR_11 >> 28) != ((uint32_t)VAR_9 >> 28)) {
    FUNC_3("module %s: relocation overflow\n",
     VAR_5->name);
    return -VAR_0;
   }
   *VAR_9 = (*VAR_9 & 0x3f) | ((VAR_11 >> 2) << 6);
   break;
  case 132:
   VAR_8 = *VAR_9;
   *VAR_9 = ((((VAR_8 >> 22) << 16) |
    ((VAR_11 >> 16) & 0xffff)) << 6) | (VAR_8 & 0x3f);
   break;
  case 130:
   VAR_8 = *VAR_9;
   *VAR_9 = ((((VAR_8 >> 22) << 16) | (VAR_11 & 0xffff)) << 6) |
     (VAR_8 & 0x3f);
   break;
  case 131:
   {
    Elf32_Addr VAR_12;

    VAR_8 = *VAR_9;
    VAR_12 = ((VAR_11 >> 16) + ((VAR_11 >> 15) & 1)) & 0xffff;
    *VAR_9 = ((((VAR_8 >> 22) << 16) | VAR_12) << 6) |
      (VAR_8 & 0x3f);
   }
   break;

  default:
   FUNC_3("module %s: Unknown reloc: %u\n",
    VAR_5->name, FUNC_1(VAR_7[VAR_6].r_info));
   return -VAR_0;
  }
 }

 return 0;
}
