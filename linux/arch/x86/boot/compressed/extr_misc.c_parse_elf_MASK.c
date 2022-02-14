
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ehdr ;
struct TYPE_6__ {scalar_t__* e_ident; int e_phnum; int e_phoff; int p_type; int p_align; int p_filesz; int p_offset; scalar_t__ p_paddr; } ;
typedef int Elf64_Phdr ;
typedef int Elf64_Ehdr ;
typedef TYPE_1__ Elf32_Phdr ;
typedef TYPE_1__ Elf32_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,void*,int) ;
 int FUNC_5 (void*,void*,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_9)
{




 Elf32_Ehdr VAR_10;
 Elf32_Phdr *VAR_11, *VAR_12;

 void *VAR_13;
 int VAR_14;

 FUNC_4(&VAR_10, VAR_9, sizeof(VAR_10));
 if (VAR_10.e_ident[VAR_0] != VAR_4 ||
    VAR_10.e_ident[VAR_1] != VAR_5 ||
    VAR_10.e_ident[VAR_2] != VAR_6 ||
    VAR_10.e_ident[VAR_3] != VAR_7) {
  FUNC_1("Kernel is not a valid ELF file");
  return;
 }

 FUNC_0("Parsing ELF... ");

 VAR_11 = FUNC_3(sizeof(*VAR_11) * VAR_10.e_phnum);
 if (!VAR_11)
  FUNC_1("Failed to allocate space for phdrs");

 FUNC_4(VAR_11, VAR_9 + VAR_10.e_phoff, sizeof(*VAR_11) * VAR_10.e_phnum);

 for (VAR_14 = 0; VAR_14 < VAR_10.e_phnum; VAR_14++) {
  VAR_12 = &VAR_11[VAR_14];

  switch (VAR_12->p_type) {
  case 128:
   VAR_13 = (void *)(VAR_12->p_paddr);

   FUNC_5(VAR_13, VAR_9 + VAR_12->p_offset, VAR_12->p_filesz);
   break;
  default: break;
  }
 }

 FUNC_2(VAR_11);
}
