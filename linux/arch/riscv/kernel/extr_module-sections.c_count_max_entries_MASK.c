
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int r_info; } ;
typedef TYPE_1__ Elf_Rela ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_2(Elf_Rela *VAR_2, int VAR_3,
         unsigned int *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_0(VAR_2[VAR_7].r_info);
  if (VAR_6 == VAR_0) {
   if (!FUNC_1(VAR_2, VAR_7))
    (*VAR_4)++;
  } else if (VAR_6 == VAR_1) {
   if (!FUNC_1(VAR_2, VAR_7))
    (*VAR_5)++;
  }
 }
}
