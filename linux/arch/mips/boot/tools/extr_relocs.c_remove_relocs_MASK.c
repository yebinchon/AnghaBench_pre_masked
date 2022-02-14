
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sh_type; } ;
struct section {int shdr_offset; TYPE_1__ shdr; } ;
typedef int shdr ;
struct TYPE_8__ {int e_shnum; } ;
struct TYPE_7__ {scalar_t__ sh_size; } ;
typedef int FILE ;
typedef TYPE_2__ Elf_Shdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int,...) ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int,int,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int,int,int *) ;
 struct section* VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_5)
{
 int VAR_6;
 Elf_Shdr VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2.e_shnum; VAR_6++) {
  struct section *VAR_8 = &VAR_4[VAR_6];

  if (VAR_8->shdr.sh_type != VAR_1)
   continue;

  if (FUNC_2(VAR_5, VAR_8->shdr_offset, VAR_0) < 0)
   FUNC_0("Seek to %d failed: %s\n",
       VAR_8->shdr_offset, FUNC_4(VAR_3));

  if (FUNC_1(&VAR_7, sizeof(VAR_7), 1, VAR_5) != 1)
   FUNC_0("Cannot read ELF section headers %d/%d: %s\n",
       VAR_6, VAR_2.e_shnum, FUNC_4(VAR_3));





  VAR_7.sh_size = 0;

  if (FUNC_2(VAR_5, VAR_8->shdr_offset, VAR_0) < 0)
   FUNC_0("Seek to %d failed: %s\n",
       VAR_8->shdr_offset, FUNC_4(VAR_3));

  if (FUNC_3(&VAR_7, sizeof(VAR_7), 1, VAR_5) != 1)
   FUNC_0("Cannot write ELF section headers %d/%d: %s\n",
       VAR_6, VAR_2.e_shnum, FUNC_4(VAR_3));
 }
}
