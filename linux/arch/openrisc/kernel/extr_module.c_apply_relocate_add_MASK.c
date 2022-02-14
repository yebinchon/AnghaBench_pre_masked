
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct module {int name; } ;
struct TYPE_7__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_6__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_5__ {int st_value; } ;
typedef TYPE_1__ Elf32_Sym ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 int FUNC_2 (char*,unsigned int,size_t) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(Elf32_Shdr *VAR_0,
         const char *VAR_1,
         unsigned int VAR_2,
         unsigned int VAR_3,
         struct module *VAR_4)
{
 unsigned int VAR_5;
 Elf32_Rela *VAR_6 = (void *)VAR_0[VAR_3].sh_addr;
 Elf32_Sym *VAR_7;
 uint32_t *VAR_8;
 uint32_t VAR_9;

 FUNC_2("Applying relocate section %u to %u\n", VAR_3,
   VAR_0[VAR_3].sh_info);
 for (VAR_5 = 0; VAR_5 < VAR_0[VAR_3].sh_size / sizeof(*VAR_6); VAR_5++) {

  VAR_8 = (void *)VAR_0[VAR_0[VAR_3].sh_info].sh_addr
   + VAR_6[VAR_5].r_offset;



  VAR_7 = (Elf32_Sym *)VAR_0[VAR_2].sh_addr
   + FUNC_0(VAR_6[VAR_5].r_info);
  VAR_9 = VAR_7->st_value + VAR_6[VAR_5].r_addend;

  switch (FUNC_1(VAR_6[VAR_5].r_info)) {
  case 131:
   *VAR_8 = VAR_9;
   break;
  case 130:
   *((uint16_t *)VAR_8 + 1) = VAR_9;
   break;
  case 129:
   *((uint16_t *)VAR_8 + 1) = VAR_9 >> 16;
   break;
  case 128:
   VAR_9 -= (uint32_t)VAR_8;
   VAR_9 >>= 2;
   VAR_9 &= 0x03ffffff;
   VAR_9 |= *VAR_8 & 0xfc000000;
   *VAR_8 = VAR_9;
   break;
  default:
   FUNC_3("module %s: Unknown relocation: %u\n",
          VAR_4->name, FUNC_1(VAR_6[VAR_5].r_info));
   break;
  }
 }

 return 0;
}
