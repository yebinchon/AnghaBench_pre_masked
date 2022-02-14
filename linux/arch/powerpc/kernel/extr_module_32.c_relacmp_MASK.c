
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ r_info; scalar_t__ r_addend; } ;
typedef TYPE_1__ Elf32_Rela ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const Elf32_Rela *VAR_2, *VAR_3;

 VAR_3 = (Elf32_Rela *)VAR_0;
 VAR_2 = (Elf32_Rela *)VAR_1;





 if (VAR_2->r_info < VAR_3->r_info)
  return -1;
 else if (VAR_2->r_info > VAR_3->r_info)
  return 1;
 else if (VAR_2->r_addend < VAR_3->r_addend)
  return -1;
 else if (VAR_2->r_addend > VAR_3->r_addend)
  return 1;
 else
  return 0;
}
