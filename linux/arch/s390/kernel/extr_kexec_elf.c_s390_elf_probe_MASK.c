
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_ident; } ;
typedef TYPE_1__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, unsigned long VAR_4)
{
 const Elf_Ehdr *VAR_5;

 if (VAR_4 < sizeof(Elf_Ehdr))
  return -VAR_1;

 VAR_5 = (Elf_Ehdr *)VAR_3;






 if (FUNC_0(VAR_5->e_ident, VAR_0, VAR_2) != 0)
  return -VAR_1;

 return 0;
}
