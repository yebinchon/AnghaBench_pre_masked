
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module {int name; } ;
typedef scalar_t__ location ;
struct TYPE_7__ {int r_offset; unsigned long r_addend; int r_info; } ;
struct TYPE_6__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_5__ {unsigned long st_value; } ;
typedef TYPE_1__ Elf32_Sym ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;






 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(Elf32_Shdr *VAR_1, const char *VAR_2,
 unsigned int VAR_3, unsigned int VAR_4, struct module *VAR_5)
{

 unsigned int VAR_6;
 Elf32_Rela *VAR_7 = (void *)VAR_1[VAR_4].sh_addr;
 Elf32_Sym *VAR_8;
 unsigned long int *VAR_9;
 unsigned long int VAR_10;




 FUNC_2("Applying add relocation section %u to %u\n",
  VAR_4, VAR_1[VAR_4].sh_info);

 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_4].sh_size / sizeof(*VAR_7); VAR_6++) {

  VAR_9 = (void *)VAR_1[VAR_1[VAR_4].sh_info].sh_addr +
    VAR_7[VAR_6].r_offset;
  VAR_8 = (Elf32_Sym *)VAR_1[VAR_3].sh_addr +
   FUNC_0(VAR_7[VAR_6].r_info);
  VAR_10 = VAR_8->st_value + VAR_7[VAR_6].r_addend;

  switch (FUNC_1(VAR_7[VAR_6].r_info)) {
  case 133:







   *VAR_9 = VAR_10;

   break;

  case 131:






   VAR_9[0] = (VAR_9[0] & 0xFFFF0000) |
     (VAR_10 >> 16);
   VAR_9[1] = (VAR_9[1] & 0xFFFF0000) |
     (VAR_10 & 0xFFFF);




   break;

  case 129:





   VAR_10 -= (unsigned long int)(VAR_9) + 4;
   VAR_9[0] = (VAR_9[0] & 0xFFFF0000) |
     (VAR_10 >> 16);
   VAR_9[1] = (VAR_9[1] & 0xFFFF0000) |
     (VAR_10 & 0xFFFF);
   FUNC_2("R_MICROBLAZE_64_PCREL (%08lx)\n",
    VAR_10);
   break;

  case 132:
   FUNC_2("R_MICROBLAZE_32_PCREL_LO\n");
   break;

  case 130:
   FUNC_2("R_MICROBLAZE_64_NONE\n");
   break;

  case 128:
   FUNC_2("R_MICROBLAZE_NONE\n");
   break;

  default:
   FUNC_3("module %s: Unknown relocation: %u\n",
    VAR_5->name,
    FUNC_1(VAR_7[VAR_6].r_info));
   return -VAR_0;
  }
 }
 return 0;
}
