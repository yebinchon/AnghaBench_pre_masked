
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ st_shndx; int st_name; } ;
typedef TYPE_1__ Elf64_Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(Elf64_Sym *VAR_2, unsigned int VAR_3, char *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_2[VAR_5].st_shndx == VAR_1) {
   char *VAR_6 = VAR_4 + VAR_2[VAR_5].st_name;
   if (VAR_6[0] == '.') {
    if (FUNC_0(VAR_6+1, "TOC.") == 0)
     VAR_2[VAR_5].st_shndx = VAR_0;
    VAR_2[VAR_5].st_name++;
   }
  }
 }
}
