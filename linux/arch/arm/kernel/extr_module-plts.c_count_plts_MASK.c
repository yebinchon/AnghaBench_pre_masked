
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int r_info; } ;
struct TYPE_7__ {int st_shndx; } ;
typedef int Elf32_Word ;
typedef TYPE_1__ Elf32_Sym ;
typedef TYPE_2__ Elf32_Rel ;
typedef int Elf32_Addr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;





 int FUNC_2 (int ,TYPE_2__ const*,int) ;
 int FUNC_3 (int ,TYPE_2__ const*) ;

__attribute__((used)) static unsigned int FUNC_4(const Elf32_Sym *VAR_0, Elf32_Addr VAR_1,
          const Elf32_Rel *VAR_2, int VAR_3, Elf32_Word VAR_4)
{
 unsigned int VAR_5 = 0;
 const Elf32_Sym *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  switch (FUNC_1(VAR_2[VAR_7].r_info)) {
  case 132:
  case 130:
  case 131:
  case 129:
  case 128:
   VAR_6 = VAR_0 + FUNC_0(VAR_2[VAR_7].r_info);
   if (VAR_6->st_shndx == VAR_4)
    break;
   if (!FUNC_3(VAR_1, VAR_2 + VAR_7) ||
       !FUNC_2(VAR_1, VAR_2, VAR_7))
    VAR_5++;
  }
 }
 return VAR_5;
}
