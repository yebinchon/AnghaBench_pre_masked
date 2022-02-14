
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct section {int dummy; } ;
struct TYPE_6__ {int r_offset; int r_info; } ;
struct TYPE_5__ {scalar_t__ st_shndx; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Rel ;


 unsigned int FUNC_0 (int ) ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ,...) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int FUNC_4 (unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct section *VAR_4, Elf_Rel *VAR_5, Elf_Sym *VAR_6,
        const char *VAR_7)
{
 unsigned VAR_8 = FUNC_0(VAR_5->r_info);
 int VAR_9 = (VAR_6->st_shndx == VAR_0) && !FUNC_3(VAR_2, VAR_7);

 switch (VAR_8) {
 case 131:
 case 129:
 case 130:
 case 128:




  break;

 case 132:
  if (VAR_9) {




   if (FUNC_3(VAR_1, VAR_7))
    break;

   FUNC_2("Invalid absolute %s relocation: %s\n",
       FUNC_4(VAR_8), VAR_7);
   break;
  }

  FUNC_1(&VAR_3, VAR_5->r_offset);
  break;

 default:
  FUNC_2("Unsupported relocation type: %s (%d)\n",
      FUNC_4(VAR_8), VAR_8);
  break;
 }

 return 0;
}
