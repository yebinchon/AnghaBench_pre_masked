
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int w ;
typedef int u_char ;
struct elf_file {int dummy; } ;
struct TYPE_2__ {int r_info; scalar_t__ r_offset; scalar_t__ r_addend; } ;
typedef scalar_t__ Elf_Size ;
typedef TYPE_1__ Elf_Rela ;
typedef scalar_t__ Elf_Off ;



 scalar_t__ FUNC_0 (int ) ;

 int FUNC_1 (int *,scalar_t__*,int) ;
 int FUNC_2 (char*,unsigned int) ;

int
FUNC_3(struct elf_file *VAR_0, const void *VAR_1, int VAR_2, Elf_Off VAR_3,
    Elf_Off VAR_4, size_t VAR_5, void *VAR_6)
{
 const Elf_Rela *VAR_7;
 Elf_Size VAR_8;

 switch (VAR_2) {
 case 129:
  VAR_7 = VAR_1;
  if (VAR_3 + VAR_7->r_offset >= VAR_4 && VAR_3 + VAR_7->r_offset <
      VAR_4 + VAR_5) {
   switch (FUNC_0(VAR_7->r_info)) {
   case 128:
    VAR_8 = VAR_7->r_addend + VAR_3;
    FUNC_1((u_char *)VAR_6 + (VAR_3 + VAR_7->r_offset -
        VAR_4), &VAR_8, sizeof(VAR_8));
    break;
   default:
    FUNC_2("unhandled relocation type %u",
        (unsigned int)FUNC_0(VAR_7->r_info));
    break;
   }
  }
  break;
 }
 return (0);
}
