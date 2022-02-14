
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sh_link; void* sh_entsize; void* sh_addralign; void* sh_info; void* sh_size; int sh_offset; int sh_addr; void* sh_flags; void* sh_type; void* sh_name; } ;
struct section {TYPE_1__ shdr; struct section* link; int shdr_offset; } ;
typedef int shdr ;
struct TYPE_7__ {int e_shnum; int e_shoff; } ;
struct TYPE_6__ {int sh_entsize; int sh_addralign; int sh_info; int sh_link; int sh_size; int sh_offset; int sh_addr; int sh_flags; int sh_type; int sh_name; } ;
typedef int FILE ;
typedef TYPE_2__ Elf_Shdr ;


 int VAR_0 ;
 struct section* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,...) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*,int,int,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 struct section* VAR_3 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(FILE *VAR_4)
{
 int VAR_5;
 Elf_Shdr VAR_6;

 VAR_3 = FUNC_0(VAR_1.e_shnum, sizeof(struct section));
 if (!VAR_3)
  FUNC_1("Unable to allocate %d section headers\n", VAR_1.e_shnum);

 if (FUNC_7(VAR_4, VAR_1.e_shoff, VAR_0) < 0)
  FUNC_1("Seek to %d failed: %s\n", VAR_1.e_shoff, FUNC_9(VAR_2));

 for (VAR_5 = 0; VAR_5 < VAR_1.e_shnum; VAR_5++) {
  struct section *VAR_7 = &VAR_3[VAR_5];

  VAR_7->shdr_offset = FUNC_8(VAR_4);
  if (FUNC_6(&VAR_6, sizeof(VAR_6), 1, VAR_4) != 1)
   FUNC_1("Cannot read ELF section headers %d/%d: %s\n",
       VAR_5, VAR_1.e_shnum, FUNC_9(VAR_2));
  VAR_7->shdr.sh_name = FUNC_4(VAR_6.sh_name);
  VAR_7->shdr.sh_type = FUNC_4(VAR_6.sh_type);
  VAR_7->shdr.sh_flags = FUNC_5(VAR_6.sh_flags);
  VAR_7->shdr.sh_addr = FUNC_2(VAR_6.sh_addr);
  VAR_7->shdr.sh_offset = FUNC_3(VAR_6.sh_offset);
  VAR_7->shdr.sh_size = FUNC_5(VAR_6.sh_size);
  VAR_7->shdr.sh_link = FUNC_4(VAR_6.sh_link);
  VAR_7->shdr.sh_info = FUNC_4(VAR_6.sh_info);
  VAR_7->shdr.sh_addralign = FUNC_5(VAR_6.sh_addralign);
  VAR_7->shdr.sh_entsize = FUNC_5(VAR_6.sh_entsize);
  if (VAR_7->shdr.sh_link < VAR_1.e_shnum)
   VAR_7->link = &VAR_3[VAR_7->shdr.sh_link];
 }
}
