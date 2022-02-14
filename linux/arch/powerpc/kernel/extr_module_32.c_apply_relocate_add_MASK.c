
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct module {int name; } ;
struct TYPE_8__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_7__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_6__ {int st_value; } ;
typedef TYPE_1__ Elf32_Sym ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;






 int FUNC_2 (int*,int,TYPE_2__*,struct module*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*,int ,int) ;

int FUNC_5(Elf32_Shdr *VAR_1,
         const char *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4,
         struct module *VAR_5)
{
 unsigned int VAR_6;
 Elf32_Rela *VAR_7 = (void *)VAR_1[VAR_4].sh_addr;
 Elf32_Sym *VAR_8;
 uint32_t *VAR_9;
 uint32_t VAR_10;

 FUNC_3("Applying ADD relocate section %u to %u\n", VAR_4,
        VAR_1[VAR_4].sh_info);
 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_4].sh_size / sizeof(*VAR_7); VAR_6++) {

  VAR_9 = (void *)VAR_1[VAR_1[VAR_4].sh_info].sh_addr
   + VAR_7[VAR_6].r_offset;


  VAR_8 = (Elf32_Sym *)VAR_1[VAR_3].sh_addr
   + FUNC_0(VAR_7[VAR_6].r_info);

  VAR_10 = VAR_8->st_value + VAR_7[VAR_6].r_addend;

  switch (FUNC_1(VAR_7[VAR_6].r_info)) {
  case 130:

   *(uint32_t *)VAR_9 = VAR_10;
   break;

  case 131:

   *(uint16_t *)VAR_9 = VAR_10;
   break;

  case 132:

   *(uint16_t *)VAR_9 = (VAR_10 >> 16);
   break;

  case 133:




   *(uint16_t *)VAR_9 = (VAR_10 + 0x8000) >> 16;
   break;

  case 129:
   if ((int)(VAR_10 - (uint32_t)VAR_9) < -0x02000000
       || (int)(VAR_10 - (uint32_t)VAR_9) >= 0x02000000)
    VAR_10 = FUNC_2(VAR_9, VAR_10,
          VAR_1, VAR_5);


   FUNC_3("REL24 value = %08X. location = %08X\n",
          VAR_10, (uint32_t)VAR_9);
   FUNC_3("Location before: %08X.\n",
          *(uint32_t *)VAR_9);
   *(uint32_t *)VAR_9
    = (*(uint32_t *)VAR_9 & ~0x03fffffc)
    | ((VAR_10 - (uint32_t)VAR_9)
       & 0x03fffffc);
   FUNC_3("Location after: %08X.\n",
          *(uint32_t *)VAR_9);
   FUNC_3("ie. jump to %08X+%08X = %08X\n",
          *(uint32_t *)VAR_9 & 0x03fffffc,
          (uint32_t)VAR_9,
          (*(uint32_t *)VAR_9 & 0x03fffffc)
          + (uint32_t)VAR_9);
   break;

  case 128:

   *(uint32_t *)VAR_9 = VAR_10 - (uint32_t)VAR_9;
   break;

  default:
   FUNC_4("%s: unknown ADD relocation: %u\n",
          VAR_5->name,
          FUNC_1(VAR_7[VAR_6].r_info));
   return -VAR_0;
  }
 }

 return 0;
}
