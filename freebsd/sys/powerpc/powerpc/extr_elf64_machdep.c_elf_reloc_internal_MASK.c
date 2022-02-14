
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int linker_file_t ;
typedef int (* elf_lookup_fn ) (int ,int,int,scalar_t__*) ;
struct TYPE_2__ {int r_info; scalar_t__ r_addend; scalar_t__ r_offset; } ;
typedef int Elf_Word ;
typedef TYPE_1__ Elf_Rela ;
typedef scalar_t__ Elf_Addr ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(linker_file_t VAR_0, Elf_Addr VAR_1, const void *VAR_2,
    int VAR_3, int VAR_4, elf_lookup_fn VAR_5)
{
 Elf_Addr *VAR_6;
 Elf_Addr VAR_7;
 Elf_Addr VAR_8;
 Elf_Word VAR_9, VAR_10;
 const Elf_Rela *VAR_11;
 int VAR_12;

 switch (VAR_3) {
 case 133:
  FUNC_4("PPC only supports RELA relocations");
  break;
 case 132:
  VAR_11 = (const Elf_Rela *)VAR_2;
  VAR_6 = (Elf_Addr *) (VAR_1 + VAR_11->r_offset);
  VAR_8 = VAR_11->r_addend;
  VAR_9 = FUNC_1(VAR_11->r_info);
  VAR_10 = FUNC_0(VAR_11->r_info);
  break;
 default:
  FUNC_4("elf_reloc: unknown relocation mode %d\n", VAR_3);
 }

 switch (VAR_9) {

 case 129:
  break;

 case 131:
  VAR_12 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
  if (VAR_12 != 0)
   return -1;
  VAR_7 += VAR_8;
  *VAR_6 = VAR_7;
  break;

 case 128:
  *VAR_6 = FUNC_2(VAR_0, VAR_1 + VAR_8);
  break;

 case 130:
  VAR_5(VAR_0, VAR_10, 1, &VAR_7);

  FUNC_3(VAR_6, (Elf_Addr *)VAR_7, 3*sizeof(Elf_Addr));



  __asm __volatile("dcbst 0,%0; sync" :: "r"(VAR_6) : "memory");
  break;

 default:
  FUNC_5("kldload: unexpected relocation type %d\n",
      (int) VAR_9);
  return -1;
 }
 return(0);
}
