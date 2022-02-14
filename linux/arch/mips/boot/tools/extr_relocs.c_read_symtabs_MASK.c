
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sh_type; int sh_size; int sh_offset; } ;
struct section {TYPE_2__* symtab; TYPE_1__ shdr; } ;
struct TYPE_8__ {int e_shnum; } ;
struct TYPE_7__ {int st_shndx; int st_size; int st_value; int st_name; } ;
typedef int FILE ;
typedef TYPE_2__ Elf_Sym ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,int,int,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 TYPE_2__* FUNC_7 (int) ;
 struct section* VAR_4 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(FILE *VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2.e_shnum; VAR_6++) {
  struct section *VAR_8 = &VAR_4[VAR_6];
  if (VAR_8->shdr.sh_type != VAR_1)
   continue;

  VAR_8->symtab = FUNC_7(VAR_8->shdr.sh_size);
  if (!VAR_8->symtab)
   FUNC_0("malloc of %d bytes for symtab failed\n",
       VAR_8->shdr.sh_size);

  if (FUNC_6(VAR_5, VAR_8->shdr.sh_offset, VAR_0) < 0)
   FUNC_0("Seek to %d failed: %s\n",
       VAR_8->shdr.sh_offset, FUNC_8(VAR_3));

  if (FUNC_5(VAR_8->symtab, 1, VAR_8->shdr.sh_size, VAR_5) !=
      VAR_8->shdr.sh_size)
   FUNC_0("Cannot read symbol table: %s\n", FUNC_8(VAR_3));

  for (VAR_7 = 0; VAR_7 < VAR_8->shdr.sh_size/sizeof(Elf_Sym); VAR_7++) {
   Elf_Sym *VAR_9 = &VAR_8->symtab[VAR_7];

   VAR_9->st_name = FUNC_3(VAR_9->st_name);
   VAR_9->st_value = FUNC_1(VAR_9->st_value);
   VAR_9->st_size = FUNC_4(VAR_9->st_size);
   VAR_9->st_shndx = FUNC_2(VAR_9->st_shndx);
  }
 }
}
