
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
struct TYPE_6__ {int sh_addr; size_t sh_info; int sh_size; } ;
struct TYPE_5__ {int st_value; } ;
typedef TYPE_1__ Elf32_Sym ;
typedef int Elf32_Sword ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;






 int FUNC_2 (char*,unsigned int,size_t) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(Elf32_Shdr *VAR_1,
         const char *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4,
         struct module *VAR_5)
{
 unsigned int VAR_6;
 Elf32_Rela *VAR_7 = (void *)VAR_1[VAR_4].sh_addr;

 FUNC_2("Applying relocate section %u to %u\n", VAR_4,
        VAR_1[VAR_4].sh_info);
 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_4].sh_size / sizeof(*VAR_7); VAR_6++) {

  uint32_t *VAR_8 =
   (uint32_t *)(VAR_1[VAR_1[VAR_4].sh_info].sh_addr
          + VAR_7[VAR_6].r_offset);


  Elf32_Sym *VAR_9 = (Elf32_Sym *)VAR_1[VAR_3].sh_addr
   + FUNC_0(VAR_7[VAR_6].r_info);
  uint32_t VAR_10 = VAR_9->st_value + VAR_7[VAR_6].r_addend;

  switch (FUNC_1(VAR_7[VAR_6].r_info)) {
  case 132:
   VAR_8 = (uint32_t *)((uint32_t)VAR_8 - 1);
   *VAR_8 = (*VAR_8 & 0xff000000) | ((*VAR_8 & 0xffffff) + VAR_10);
   break;
  case 133:
   if (FUNC_0(VAR_7[VAR_6].r_info))
    *VAR_8 += VAR_10;
   break;
  case 131:
  case 130:
   *VAR_8 += VAR_10;
   break;
  case 129:
   VAR_10 -= (unsigned long)VAR_8 + 2;
   if ((Elf32_Sword)VAR_10 > 0x7fff ||
       (Elf32_Sword)VAR_10 < -(Elf32_Sword)0x8000)
    goto overflow;
   else
    *(unsigned short *)VAR_8 = VAR_10;
   break;
  case 128:
   VAR_10 -= (unsigned long)VAR_8 + 1;
   if ((Elf32_Sword)VAR_10 > 0x7f ||
       (Elf32_Sword)VAR_10 < -(Elf32_Sword)0x80)
    goto overflow;
   else
    *(unsigned char *)VAR_8 = VAR_10;
   break;
  default:
   FUNC_3("module %s: Unknown relocation: %u\n",
          VAR_5->name, FUNC_1(VAR_7[VAR_6].r_info));
   return -VAR_0;
  }
 }
 return 0;
 overflow:
 FUNC_3("module %s: relocation offset overflow: %08x\n",
        VAR_5->name, VAR_7[VAR_6].r_offset);
 return -VAR_0;
}
