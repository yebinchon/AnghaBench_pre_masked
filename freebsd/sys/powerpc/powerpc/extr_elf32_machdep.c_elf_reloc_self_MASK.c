
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ caddr_t ;
struct TYPE_5__ {scalar_t__ d_val; scalar_t__ d_ptr; } ;
struct TYPE_7__ {int d_tag; TYPE_1__ d_un; } ;
struct TYPE_6__ {scalar_t__ r_addend; scalar_t__ r_offset; int r_info; } ;
typedef TYPE_2__ Elf_Rela ;
typedef TYPE_3__ Elf_Dyn ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

void
FUNC_1(Elf_Dyn *VAR_2, Elf_Addr VAR_3)
{
 Elf_Rela *VAR_4 = ((void*)0), *VAR_5;
 Elf_Addr VAR_6 = 0;
 Elf_Addr *VAR_7;




 for (; VAR_2->d_tag != VAR_0; VAR_2++) {
  switch (VAR_2->d_tag) {
  case 129:
   VAR_4 = (Elf_Rela *)(VAR_3+VAR_2->d_un.d_ptr);
   break;
  case 128:
   VAR_6 = VAR_2->d_un.d_val;
   break;
  }
 }




 VAR_5 = (Elf_Rela *)((caddr_t)VAR_4 + VAR_6);
 for (; VAR_4 < VAR_5; VAR_4++) {
  if (FUNC_0(VAR_4->r_info) != VAR_1)
   continue;
  VAR_7 = (Elf_Addr *)(VAR_3 + VAR_4->r_offset);
  *VAR_7 = (Elf_Addr)(VAR_3 + VAR_4->r_addend);
 }
}
