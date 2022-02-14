
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,char*,unsigned int,...) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int FUNC_4 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct section *VAR_7, Elf_Rel *VAR_8, Elf_Sym *VAR_9,
    const char *VAR_10)
{
 unsigned VAR_11 = FUNC_0(VAR_8->r_info);
 int VAR_12 = (VAR_9->st_shndx == VAR_0) && !FUNC_3(VAR_3, VAR_10);

 switch (VAR_11) {
 case 131:
 case 129:
 case 130:
 case 128:




  break;

 case 133:
  if (VAR_12) {




   if (FUNC_3(VAR_1, VAR_10))
    break;

   if (FUNC_3(VAR_4, VAR_10)) {
    FUNC_1(&VAR_5, VAR_8->r_offset);
    break;
   }
  } else {
   if (!FUNC_3(VAR_2, VAR_10))
    break;
  }
  FUNC_2("Invalid %s %s relocation: %s\n",
      VAR_12 ? "absolute" : "relative",
      FUNC_4(VAR_11), VAR_10);
  break;

 case 132:
  if (VAR_12) {




   if (FUNC_3(VAR_1, VAR_10))
    break;

   if (FUNC_3(VAR_3, VAR_10)) {
    FUNC_1(&VAR_6, VAR_8->r_offset);
    break;
   }
  } else {
   if (FUNC_3(VAR_2, VAR_10))
    FUNC_1(&VAR_6, VAR_8->r_offset);
   break;
  }
  FUNC_2("Invalid %s %s relocation: %s\n",
      VAR_12 ? "absolute" : "relative",
      FUNC_4(VAR_11), VAR_10);
  break;

 default:
  FUNC_2("Unsupported relocation type: %s (%d)\n",
      FUNC_4(VAR_11), VAR_11);
  break;
 }

 return 0;
}
