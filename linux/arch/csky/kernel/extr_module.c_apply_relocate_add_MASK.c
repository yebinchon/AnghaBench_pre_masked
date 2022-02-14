
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
struct TYPE_6__ {int sh_size; size_t sh_info; scalar_t__ sh_addr; } ;
struct TYPE_5__ {int st_value; } ;
typedef TYPE_1__ Elf32_Sym ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;






 int FUNC_2 (int*) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(Elf32_Shdr *VAR_1, const char *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4, struct module *VAR_5)
{
 unsigned int VAR_6;
 Elf32_Rela *VAR_7 = (void *) VAR_1[VAR_4].sh_addr;
 Elf32_Sym *VAR_8;
 uint32_t *VAR_9;
 short *VAR_10;

 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_4].sh_size / sizeof(*VAR_7); VAR_6++) {

  VAR_9 = (void *)VAR_1[VAR_1[VAR_4].sh_info].sh_addr
       + VAR_7[VAR_6].r_offset;
  VAR_8 = (Elf32_Sym *)VAR_1[VAR_3].sh_addr
      + FUNC_0(VAR_7[VAR_6].r_info);

  switch (FUNC_1(VAR_7[VAR_6].r_info)) {
  case 133:

   *VAR_9 = VAR_7[VAR_6].r_addend + VAR_8->st_value;
   break;
  case 130:

   *VAR_9 = VAR_7[VAR_6].r_addend + VAR_8->st_value
       - (uint32_t)VAR_9;
   break;
  case 129:
   break;
  case 128:
   FUNC_2(VAR_9);
   break;
  case 132:
   VAR_10 = ((short *)VAR_9) + 1;
   *VAR_10 = (short)
    ((VAR_7[VAR_6].r_addend + VAR_8->st_value) >> 16);
   break;
  case 131:
   VAR_10 = ((short *)VAR_9) + 1;
   *VAR_10 = (short)
    ((VAR_7[VAR_6].r_addend + VAR_8->st_value) & 0xffff);
   break;
  default:
   FUNC_3("module %s: Unknown relocation: %u\n",
    VAR_5->name, FUNC_1(VAR_7[VAR_6].r_info));
   return -VAR_0;
  }
 }
 return 0;
}
