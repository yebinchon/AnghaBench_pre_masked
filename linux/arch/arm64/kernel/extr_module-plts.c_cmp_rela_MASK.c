
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r_addend; int r_info; } ;
typedef TYPE_1__ Elf64_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const void *VAR_0, const void *VAR_1)
{
 const Elf64_Rela *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 int VAR_4;


 VAR_4 = FUNC_2(FUNC_1(VAR_2->r_info), FUNC_1(VAR_3->r_info));
 if (VAR_4 == 0)
  VAR_4 = FUNC_2(FUNC_0(VAR_2->r_info), FUNC_0(VAR_3->r_info));
 if (VAR_4 == 0)
  VAR_4 = FUNC_2(VAR_2->r_addend, VAR_3->r_addend);
 return VAR_4;
}
