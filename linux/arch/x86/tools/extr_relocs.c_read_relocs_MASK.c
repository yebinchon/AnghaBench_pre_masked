
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sh_type; int sh_size; int sh_offset; } ;
struct section {TYPE_2__* reltab; TYPE_1__ shdr; } ;
struct TYPE_6__ {void* r_addend; void* r_info; int r_offset; } ;
typedef int FILE ;
typedef TYPE_2__ Elf_Rel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int,int,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 TYPE_2__* FUNC_5 (int) ;
 struct section* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(FILE *VAR_5)
{
 int VAR_6,VAR_7;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct section *VAR_8 = &VAR_3[VAR_6];
  if (VAR_8->shdr.sh_type != VAR_1) {
   continue;
  }
  VAR_8->reltab = FUNC_5(VAR_8->shdr.sh_size);
  if (!VAR_8->reltab) {
   FUNC_0("malloc of %d bytes for relocs failed\n",
    VAR_8->shdr.sh_size);
  }
  if (FUNC_4(VAR_5, VAR_8->shdr.sh_offset, VAR_0) < 0) {
   FUNC_0("Seek to %d failed: %s\n",
    VAR_8->shdr.sh_offset, FUNC_6(VAR_2));
  }
  if (FUNC_3(VAR_8->reltab, 1, VAR_8->shdr.sh_size, VAR_5)
      != VAR_8->shdr.sh_size) {
   FUNC_0("Cannot read symbol table: %s\n",
    FUNC_6(VAR_2));
  }
  for (VAR_7 = 0; VAR_7 < VAR_8->shdr.sh_size/sizeof(Elf_Rel); VAR_7++) {
   Elf_Rel *VAR_9 = &VAR_8->reltab[VAR_7];
   VAR_9->r_offset = FUNC_1(VAR_9->r_offset);
   VAR_9->r_info = FUNC_2(VAR_9->r_info);

   VAR_9->r_addend = FUNC_2(VAR_9->r_addend);

  }
 }
}
