
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_file {int dummy; } ;
struct TYPE_2__ {int r_info; scalar_t__ r_addend; scalar_t__ r_offset; } ;
typedef int Elf_Size ;
typedef TYPE_1__ Elf_Rela ;
typedef scalar_t__ Elf_Off ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (char*,int) ;

int
FUNC_2(struct elf_file *VAR_2, const void *VAR_3, int VAR_4, Elf_Off VAR_5,
    Elf_Off VAR_6, size_t VAR_7, void *VAR_8)
{
 Elf_Addr *VAR_9, VAR_10;
 Elf_Size VAR_11;
 const Elf_Rela *VAR_12;

 if (VAR_4 != VAR_0)
  return (VAR_1);

 VAR_12 = (const Elf_Rela *)VAR_3;
 VAR_9 = (Elf_Addr *) ((Elf_Off)VAR_8 - VAR_6 + VAR_12->r_offset);
 VAR_10 = VAR_12->r_addend;
 VAR_11 = FUNC_0(VAR_12->r_info);

 if ((char *)VAR_9 < (char *)VAR_8 || (char *)VAR_9 >= (char *)VAR_8 + VAR_7)
  return (0);

 switch(VAR_11) {
 case 128:
  *VAR_9 = VAR_5 + VAR_10;
  break;
 case 129:
  break;
 default:
  FUNC_1("unhandled relocation type %lu", VAR_11);
  break;
 }
 return (0);
}
