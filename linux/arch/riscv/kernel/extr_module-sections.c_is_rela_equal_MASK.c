
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ r_info; scalar_t__ r_addend; } ;
typedef TYPE_1__ Elf_Rela ;



__attribute__((used)) static int FUNC_0(const Elf_Rela *VAR_0, const Elf_Rela *VAR_1)
{
 return VAR_0->r_info == VAR_1->r_info && VAR_0->r_addend == VAR_1->r_addend;
}
