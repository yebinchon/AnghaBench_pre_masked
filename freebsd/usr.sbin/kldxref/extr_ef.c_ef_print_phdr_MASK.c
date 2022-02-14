
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_3__ {int p_flags; scalar_t__ p_filesz; scalar_t__ p_memsz; } ;
typedef TYPE_1__ Elf_Phdr ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(Elf_Phdr *VAR_1)
{

 if ((VAR_1->p_flags & VAR_0) == 0) {
  FUNC_0("text=0x%jx ", (uintmax_t)VAR_1->p_filesz);
 } else {
  FUNC_0("data=0x%jx", (uintmax_t)VAR_1->p_filesz);
  if (VAR_1->p_filesz < VAR_1->p_memsz)
   FUNC_0("+0x%jx",
       (uintmax_t)(VAR_1->p_memsz - VAR_1->p_filesz));
  FUNC_0(" ");
 }
}
