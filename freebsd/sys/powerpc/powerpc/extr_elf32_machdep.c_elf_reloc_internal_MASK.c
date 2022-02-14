
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int linker_file_t ;
typedef int (* elf_lookup_fn ) (int ,int,int,int*) ;
struct TYPE_2__ {int r_addend; int r_info; int r_offset; } ;
typedef int Elf_Word ;
typedef TYPE_1__ Elf_Rela ;
typedef int Elf_Half ;
typedef int Elf_Addr ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;





 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(linker_file_t VAR_0, Elf_Addr VAR_1, const void *VAR_2,
    int VAR_3, int VAR_4, elf_lookup_fn VAR_5)
{
 Elf_Addr *VAR_6;
 Elf_Half *VAR_7;
 Elf_Addr VAR_8;
 Elf_Addr VAR_9;
 Elf_Word VAR_10, VAR_11;
 const Elf_Rela *VAR_12;
 int VAR_13;

 switch (VAR_3) {
 case 134:
  FUNC_3("PPC only supports RELA relocations");
  break;
 case 133:
  VAR_12 = (const Elf_Rela *)VAR_2;
  VAR_6 = (Elf_Addr *) ((uintptr_t)VAR_1 + VAR_12->r_offset);
  VAR_7 = (Elf_Half *) ((uintptr_t)VAR_1 + VAR_12->r_offset);
  VAR_9 = VAR_12->r_addend;
  VAR_10 = FUNC_1(VAR_12->r_info);
  VAR_11 = FUNC_0(VAR_12->r_info);
  break;
 default:
  FUNC_3("elf_reloc: unknown relocation mode %d\n", VAR_3);
 }

 switch (VAR_10) {

 case 129:
  break;

 case 130:
  VAR_13 = VAR_5(VAR_0, VAR_11, 1, &VAR_8);
  if (VAR_13 != 0)
   return -1;
  *VAR_6 = FUNC_2(VAR_0, VAR_8 + VAR_9);
   break;

 case 131:
  VAR_13 = VAR_5(VAR_0, VAR_11, 1, &VAR_8);
  if (VAR_13 != 0)
   return -1;





  if (VAR_8 > VAR_1 && VAR_8 <= (VAR_1 + VAR_9))
   VAR_8 = VAR_1;
  VAR_8 = FUNC_2(VAR_0, VAR_8 + VAR_9);
  *VAR_7 = VAR_8 & 0xffff;
  break;

 case 132:
  VAR_13 = VAR_5(VAR_0, VAR_11, 1, &VAR_8);
  if (VAR_13 != 0)
   return -1;





  if (VAR_8 > VAR_1 && VAR_8 <= (VAR_1 + VAR_9))
   VAR_8 = VAR_1;
  VAR_8 = FUNC_2(VAR_0, VAR_8 + VAR_9);
  *VAR_7 = ((VAR_8 >> 16) + ((VAR_8 & 0x8000) ? 1 : 0))
      & 0xffff;
  break;

 case 128:
  *VAR_6 = FUNC_2(VAR_0, VAR_1 + VAR_9);
  break;

 default:
  FUNC_4("kldload: unexpected relocation type %d\n",
      (int) VAR_10);
  return -1;
 }
 return(0);
}
