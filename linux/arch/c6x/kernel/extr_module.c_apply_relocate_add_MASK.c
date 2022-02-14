
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct module {int name; } ;
struct TYPE_7__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_6__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_5__ {int st_value; } ;
typedef TYPE_1__ Elf_Sym ;
typedef void* Elf_Addr ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Rela ;
typedef int Elf32_Addr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int*,int,int,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,int) ;

int FUNC_5(Elf32_Shdr *VAR_1,
         const char *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4,
         struct module *VAR_5)
{
 Elf32_Rela *VAR_6 = (void *) VAR_1[VAR_4].sh_addr;
 Elf_Sym *VAR_7;
 u32 *VAR_8, VAR_9;
 unsigned int VAR_10;
 Elf32_Addr VAR_11;
 Elf_Addr VAR_12 = 0;

 FUNC_3("Applying relocate section %u to %u with offset 0x%x\n",
   VAR_4, VAR_1[VAR_4].sh_info, VAR_12);

 for (VAR_10 = 0; VAR_10 < VAR_1[VAR_4].sh_size / sizeof(*VAR_6); VAR_10++) {

  VAR_8 = (void *)VAR_1[VAR_1[VAR_4].sh_info].sh_addr
   + VAR_6[VAR_10].r_offset - VAR_12;



  VAR_7 = (Elf_Sym *)VAR_1[VAR_3].sh_addr
   + FUNC_0(VAR_6[VAR_10].r_info);


  VAR_11 = VAR_7->st_value + VAR_6[VAR_10].r_addend;

  switch (FUNC_1(VAR_6[VAR_10].r_info)) {
  case 134:
   FUNC_3("RELA ABS32: [%p] = 0x%x\n", VAR_8, VAR_11);
   *VAR_8 = VAR_11;
   break;
  case 135:
   FUNC_3("RELA ABS16: [%p] = 0x%x\n", VAR_8, VAR_11);
   *(u16 *)VAR_8 = VAR_11;
   break;
  case 133:
   FUNC_3("RELA ABS8: [%p] = 0x%x\n", VAR_8, VAR_11);
   *(u8 *)VAR_8 = VAR_11;
   break;
  case 131:
   VAR_9 = *VAR_8;
   VAR_9 &= ~0x7fff80;
   VAR_9 |= ((VAR_11 & 0xffff) << 7);
   FUNC_3("RELA ABS_L16[%p] v[0x%x] opcode[0x%x]\n",
     VAR_8, VAR_11, VAR_9);
   *VAR_8 = VAR_9;
   break;
  case 132:
   VAR_9 = *VAR_8;
   VAR_9 &= ~0x7fff80;
   VAR_9 |= ((VAR_11 >> 9) & 0x7fff80);
   FUNC_3("RELA ABS_H16[%p] v[0x%x] opcode[0x%x]\n",
     VAR_8, VAR_11, VAR_9);
   *VAR_8 = VAR_9;
   break;
  case 128:
   if (FUNC_2(VAR_8, VAR_11, 21, 7))
    return -VAR_0;
   break;
  case 129:
   if (FUNC_2(VAR_8, VAR_11, 12, 16))
    return -VAR_0;
   break;
  case 130:
   if (FUNC_2(VAR_8, VAR_11, 10, 13))
    return -VAR_0;
   break;
  default:
   FUNC_4("module %s: Unknown RELA relocation: %u\n",
          VAR_5->name, FUNC_1(VAR_6[VAR_10].r_info));
   return -VAR_0;
  }
 }

 return 0;
}
