
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_10__ {int value; char const* name; } ;
typedef TYPE_1__ nltype ;
struct TYPE_13__ {int e_shoff; int e_shnum; } ;
struct TYPE_12__ {scalar_t__ sh_type; size_t sh_link; int sh_offset; int sh_size; int sh_entsize; } ;
struct TYPE_11__ {int st_value; int st_name; } ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Shdr ;
typedef TYPE_4__ Elf_Ehdr ;


 int FUNC_0 (TYPE_4__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (int,char*,...) ;
 char** VAR_5 ;
 int FUNC_5 (int,struct stat*) ;
 void* FUNC_6 (int ,int ,int ,int ,int,int ) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (int,TYPE_4__*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__ const*,char const*) ;

int
FUNC_10(const char *VAR_9, char ***VAR_10)
{
    int VAR_11;
    Elf_Ehdr VAR_12;
    struct stat VAR_13;
    void *VAR_14;
    const char *VAR_15;
    const Elf_Shdr *VAR_16;
    const Elf_Shdr *VAR_17;
    const Elf_Shdr *VAR_18;
    const char *VAR_19;
    const Elf_Sym *VAR_20;
    int VAR_21;
    int VAR_22;

    if ((VAR_11 = FUNC_7(VAR_9, VAR_2)) == -1)
 FUNC_3(1, "%s", VAR_9);
    if (FUNC_8(VAR_11, &VAR_12, sizeof VAR_12) != sizeof VAR_12 || !FUNC_0(VAR_12)) {
 FUNC_2(VAR_11);
 return -1;
    }
    if (FUNC_5(VAR_11, &VAR_13) == -1)
 FUNC_3(1, "cannot fstat %s", VAR_9);
    if ((VAR_14 = FUNC_6(0, VAR_13.st_size, VAR_3, VAR_1, VAR_11, 0)) ==
      VAR_0)
 FUNC_3(1, "cannot mmap %s", VAR_9);
    FUNC_2(VAR_11);

    VAR_15 = (const char *)VAR_14;
    VAR_16 = (const Elf_Shdr *)(VAR_15 + VAR_12.e_shoff);


    for (VAR_22 = 1; VAR_22 < VAR_12.e_shnum; VAR_22++)
 if (VAR_16[VAR_22].sh_type == VAR_4)
     break;
    if (VAR_22 == VAR_12.e_shnum)
 FUNC_4(1, "%s has no symbol table", VAR_9);
    VAR_17 = &VAR_16[VAR_22];
    VAR_18 = &VAR_16[VAR_17->sh_link];

    VAR_20 = (const Elf_Sym *)(VAR_15 + VAR_17->sh_offset);
    VAR_21 = VAR_17->sh_size / VAR_17->sh_entsize;
    VAR_19 = (const char *)(VAR_15 + VAR_18->sh_offset);


    VAR_7 = 0;
    for (VAR_22 = 1; VAR_22 < VAR_21; VAR_22++)
 if (FUNC_9(&VAR_20[VAR_22], VAR_19))
     VAR_7++;


    if ((VAR_6 = (nltype *)FUNC_1(VAR_7 + 1, sizeof(nltype))) == ((void*)0))
 FUNC_4(1, "insufficient memory for symbol table");


    VAR_8 = VAR_6;
    for (VAR_22 = 1; VAR_22 < VAR_21; VAR_22++) {
 const Elf_Sym *VAR_23 = &VAR_20[VAR_22];

 if (FUNC_9(VAR_23, VAR_19)) {
     VAR_8->value = VAR_23->st_value;
     VAR_8->name = VAR_19 + VAR_23->st_name;
     VAR_8++;
 }
    }
    VAR_8->value = -1;

    *VAR_10 = VAR_5;
    return 0;
}
