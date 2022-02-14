
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct section {int dummy; } ;
struct TYPE_6__ {int r_offset; int r_info; } ;
struct TYPE_5__ {scalar_t__ st_value; int st_info; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Rel ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int FUNC_3 (char*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct section *VAR_2, Elf_Rel *VAR_3, Elf_Sym *VAR_4,
        const char *VAR_5)
{
 unsigned VAR_6 = FUNC_0(VAR_3->r_info);
 unsigned VAR_7 = FUNC_1(VAR_4->st_info);

 if ((VAR_7 == VAR_0) && (VAR_4->st_value == 0)) {

  return 0;
 }

 if (FUNC_4(VAR_5))
  return 0;

 switch (VAR_6) {
 case 132:
 case 128:
 case 131:
 case 130:
 case 129:




 case 134:
 case 135:



 case 133:



  break;

 case 137:
 case 138:
 case 139:
 case 136:
  FUNC_2(&VAR_1, VAR_3->r_offset, VAR_6);
  break;

 default:
  FUNC_3("Unsupported relocation type: %s (%d)\n",
      FUNC_5(VAR_6), VAR_6);
  break;
 }

 return 0;
}
