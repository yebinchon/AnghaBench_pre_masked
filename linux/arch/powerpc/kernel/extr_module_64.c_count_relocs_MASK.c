
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int r_addend; int r_info; } ;
typedef TYPE_1__ Elf64_Rela ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(const Elf64_Rela *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_6 = 0;
 VAR_4 = 0;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)

  if (FUNC_1(VAR_1[VAR_3].r_info) == VAR_0 &&
      (VAR_4 != FUNC_0(VAR_1[VAR_3].r_info) ||
       VAR_5 != VAR_1[VAR_3].r_addend)) {
   VAR_6++;
   VAR_4 = FUNC_0(VAR_1[VAR_3].r_info);
   VAR_5 = VAR_1[VAR_3].r_addend;
  }

 return VAR_6;
}
