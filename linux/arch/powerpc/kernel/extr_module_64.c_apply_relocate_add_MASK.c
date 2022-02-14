
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef unsigned long u32 ;
struct TYPE_11__ {int toc_fixed; } ;
struct module {int name; TYPE_1__ arch; } ;
struct TYPE_14__ {int r_offset; unsigned long r_addend; int r_info; } ;
struct TYPE_13__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_12__ {unsigned long st_value; int st_name; int st_shndx; } ;
typedef TYPE_2__ Elf64_Sym ;
typedef TYPE_3__ Elf64_Shdr ;
typedef TYPE_4__ Elf64_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,char const*,unsigned int) ;
 unsigned long FUNC_8 (TYPE_2__*) ;
 unsigned long FUNC_9 (TYPE_3__*,struct module*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int ,unsigned long) ;
 int FUNC_12 (char const*,unsigned long*,struct module*) ;
 int FUNC_13 (char const*,unsigned long) ;
 unsigned long FUNC_14 (TYPE_3__*,unsigned long,struct module*) ;

int FUNC_15(Elf64_Shdr *VAR_10,
         const char *VAR_11,
         unsigned int VAR_12,
         unsigned int VAR_13,
         struct module *VAR_14)
{
 unsigned int VAR_15;
 Elf64_Rela *VAR_16 = (void *)VAR_10[VAR_13].sh_addr;
 Elf64_Sym *VAR_17;
 unsigned long *VAR_18;
 unsigned long VAR_19;

 FUNC_10("Applying ADD relocate section %u to %u\n", VAR_13,
        VAR_10[VAR_13].sh_info);


 if (!VAR_14->arch.toc_fixed) {
  VAR_17 = FUNC_7(VAR_10, VAR_11, VAR_12);


  if (VAR_17)
   VAR_17->st_value = FUNC_9(VAR_10, VAR_14);
  VAR_14->arch.toc_fixed = 1;
 }

 for (VAR_15 = 0; VAR_15 < VAR_10[VAR_13].sh_size / sizeof(*VAR_16); VAR_15++) {

  VAR_18 = (void *)VAR_10[VAR_10[VAR_13].sh_info].sh_addr
   + VAR_16[VAR_15].r_offset;

  VAR_17 = (Elf64_Sym *)VAR_10[VAR_12].sh_addr
   + FUNC_0(VAR_16[VAR_15].r_info);

  FUNC_10("RELOC at %p: %li-type as %s (0x%lx) + %li\n",
         VAR_18, (long)FUNC_1(VAR_16[VAR_15].r_info),
         VAR_11 + VAR_17->st_name, (unsigned long)VAR_17->st_value,
         (long)VAR_16[VAR_15].r_addend);


  VAR_19 = VAR_17->st_value + VAR_16[VAR_15].r_addend;

  switch (FUNC_1(VAR_16[VAR_15].r_info)) {
  case 142:

   *(u32 *)VAR_18 = VAR_19;
   break;

  case 141:

   *(unsigned long *)VAR_18 = VAR_19;
   break;

  case 135:
   *(unsigned long *)VAR_18 = FUNC_9(VAR_10, VAR_14);
   break;

  case 134:

   VAR_19 -= FUNC_9(VAR_10, VAR_14);
   if (VAR_19 + 0x8000 > 0xffff) {
    FUNC_11("%s: bad TOC16 relocation (0x%lx)\n",
           VAR_14->name, VAR_19);
    return -VAR_1;
   }
   *((uint16_t *) VAR_18)
    = (*((uint16_t *) VAR_18) & ~0xffff)
    | (VAR_19 & 0xffff);
   break;

  case 131:

   VAR_19 -= FUNC_9(VAR_10, VAR_14);
   *((uint16_t *) VAR_18)
    = (*((uint16_t *) VAR_18) & ~0xffff)
    | (VAR_19 & 0xffff);
   break;

  case 133:

   VAR_19 -= FUNC_9(VAR_10, VAR_14);
   if ((VAR_19 & 3) != 0 || VAR_19 + 0x8000 > 0xffff) {
    FUNC_11("%s: bad TOC16_DS relocation (0x%lx)\n",
           VAR_14->name, VAR_19);
    return -VAR_1;
   }
   *((uint16_t *) VAR_18)
    = (*((uint16_t *) VAR_18) & ~0xfffc)
    | (VAR_19 & 0xfffc);
   break;

  case 130:

   VAR_19 -= FUNC_9(VAR_10, VAR_14);
   if ((VAR_19 & 3) != 0) {
    FUNC_11("%s: bad TOC16_LO_DS relocation (0x%lx)\n",
           VAR_14->name, VAR_19);
    return -VAR_1;
   }
   *((uint16_t *) VAR_18)
    = (*((uint16_t *) VAR_18) & ~0xfffc)
    | (VAR_19 & 0xfffc);
   break;

  case 132:

   VAR_19 -= FUNC_9(VAR_10, VAR_14);
   VAR_19 = ((VAR_19 + 0x8000) >> 16);
   *((uint16_t *) VAR_18)
    = (*((uint16_t *) VAR_18) & ~0xffff)
    | (VAR_19 & 0xffff);
   break;

  case 128:

   if (VAR_17->st_shndx == VAR_9 ||
       VAR_17->st_shndx == VAR_8) {

    VAR_19 = FUNC_14(VAR_10, VAR_19, VAR_14);
    if (!VAR_19)
     return -VAR_0;
    if (!FUNC_12(VAR_11 + VAR_17->st_name,
       (u32 *)VAR_18 + 1, VAR_14))
     return -VAR_1;

    FUNC_13(VAR_11 + VAR_17->st_name, VAR_19);
   } else
    VAR_19 += FUNC_8(VAR_17);


   VAR_19 -= (unsigned long)VAR_18;
   if (VAR_19 + 0x2000000 > 0x3ffffff || (VAR_19 & 3) != 0){
    FUNC_11("%s: REL24 %li out of range!\n",
           VAR_14->name, (long int)VAR_19);
    return -VAR_1;
   }


   *(uint32_t *)VAR_18
    = (*(uint32_t *)VAR_18 & ~0x03fffffc)
    | (VAR_19 & 0x03fffffc);
   break;

  case 136:

   *VAR_18 = VAR_19 - (unsigned long)VAR_18;
   break;

  case 137:


   VAR_19 -= (unsigned long)VAR_18;
   if (VAR_19 + 0x80000000 > 0xffffffff) {
    FUNC_11("%s: REL32 %li out of range!\n",
           VAR_14->name, (long int)VAR_19);
    return -VAR_1;
   }
   *(u32 *)VAR_18 = VAR_19;
   break;

  case 129:





   break;

  case 140:




   VAR_19 = FUNC_9(VAR_10, VAR_14) - (unsigned long)VAR_18;
   if (VAR_19 + 0x80008000 > 0xffffffff)
    break;





   if ((((uint32_t *)VAR_18)[0] & ~0xfffc) !=
       (VAR_5 | FUNC_6(VAR_7) | FUNC_4(VAR_6)))
    break;
   if (((uint32_t *)VAR_18)[1] !=
       (VAR_2 | FUNC_6(VAR_7) | FUNC_4(VAR_7) | FUNC_5(VAR_6)))
    break;





   ((uint32_t *)VAR_18)[0] = VAR_4 | FUNC_6(VAR_7) |
          FUNC_4(VAR_6) | FUNC_2(VAR_19);
   ((uint32_t *)VAR_18)[1] = VAR_3 | FUNC_6(VAR_7) |
          FUNC_4(VAR_7) | FUNC_3(VAR_19);
   break;

  case 139:

   VAR_19 -= (unsigned long)VAR_18;
   VAR_19 = ((VAR_19 + 0x8000) >> 16);
   *((uint16_t *) VAR_18)
    = (*((uint16_t *) VAR_18) & ~0xffff)
    | (VAR_19 & 0xffff);
   break;

  case 138:

   VAR_19 -= (unsigned long)VAR_18;
   *((uint16_t *) VAR_18)
    = (*((uint16_t *) VAR_18) & ~0xffff)
    | (VAR_19 & 0xffff);
   break;

  default:
   FUNC_11("%s: Unknown ADD relocation: %lu\n",
          VAR_14->name,
          (unsigned long)FUNC_1(VAR_16[VAR_15].r_info));
   return -VAR_1;
  }
 }

 return 0;
}
