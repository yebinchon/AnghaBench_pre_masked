
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct bsdar {int dummy; } ;
struct TYPE_13__ {int d_size; } ;
struct TYPE_12__ {scalar_t__ sh_type; size_t sh_size; int sh_entsize; int sh_name; } ;
struct TYPE_11__ {scalar_t__ st_shndx; int st_name; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef TYPE_2__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef TYPE_3__ Elf_Data ;
typedef int Elf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bsdar*,char*) ;
 int FUNC_2 (struct bsdar*,int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 TYPE_3__* FUNC_6 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *,size_t*) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (void*,size_t) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int *) ;
 char* FUNC_12 (int *,int,int ) ;
 TYPE_2__* FUNC_13 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_14 (TYPE_3__*,int,TYPE_1__*) ;
 scalar_t__ FUNC_15 (char*,char*) ;

__attribute__((used)) static void
FUNC_16(struct bsdar *VAR_6, void *VAR_7, size_t VAR_8)
{
 Elf *VAR_9;
 Elf_Scn *VAR_10;
 GElf_Shdr VAR_11;
 GElf_Sym VAR_12;
 Elf_Data *VAR_13;
 char *VAR_14;
 size_t VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 if ((VAR_9 = FUNC_9(VAR_7, VAR_8)) == ((void*)0)) {
  FUNC_2(VAR_6, 0, "elf_memory() failed: %s",
       FUNC_4(-1));
  return;
 }
 if (FUNC_8(VAR_9) != VAR_0) {

  FUNC_3(VAR_9);
  return;
 }
 if (FUNC_7(VAR_9, &VAR_16) == 0) {
  FUNC_2(VAR_6, VAR_1, 0, "elf_getshstrndx failed: %s",
       FUNC_4(-1));
  FUNC_3(VAR_9);
  return;
 }

 VAR_18 = -1;
 VAR_10 = ((void*)0);
 while ((VAR_10 = FUNC_11(VAR_9, VAR_10)) != ((void*)0)) {
  if (FUNC_13(VAR_10, &VAR_11) != &VAR_11) {
   FUNC_2(VAR_6, 0,
       "elf_getshdr failed: %s", FUNC_4(-1));
   continue;
  }
  if ((VAR_14 = FUNC_12(VAR_9, VAR_16, VAR_11.sh_name)) == ((void*)0)) {
   FUNC_2(VAR_6, 0,
       "elf_strptr failed: %s", FUNC_4(-1));
   continue;
  }
  if (FUNC_15(VAR_14, ".strtab") == 0) {
   VAR_18 = FUNC_10(VAR_10);
   break;
  }
 }
 VAR_17 = FUNC_5();
 if (VAR_17 != 0)
  FUNC_2(VAR_6, 0, "elf_nextscn failed: %s",
       FUNC_4(VAR_17));
 if (VAR_18 == -1) {
  FUNC_2(VAR_6, 0, "can't find .strtab section");
  FUNC_3(VAR_9);
  return;
 }

 VAR_10 = ((void*)0);
 while ((VAR_10 = FUNC_11(VAR_9, VAR_10)) != ((void*)0)) {
  if (FUNC_13(VAR_10, &VAR_11) != &VAR_11) {
   FUNC_2(VAR_6, VAR_1, 0,
       "elf_getshdr failed: %s", FUNC_4(-1));
   continue;
  }
  if (VAR_11.sh_type != VAR_3)
   continue;

  VAR_13 = ((void*)0);
  VAR_15 = 0;
  while (VAR_15 < VAR_11.sh_size &&
      (VAR_13 = FUNC_6(VAR_10, VAR_13)) != ((void*)0)) {
   VAR_19 = VAR_13->d_size / VAR_11.sh_entsize;
   for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
    if (FUNC_14(VAR_13, VAR_20, &VAR_12) != &VAR_12) {
     FUNC_2(VAR_6, VAR_1, 0,
         "gelf_getsym failed: %s",
          FUNC_4(-1));
     continue;
    }


    if (FUNC_0(VAR_12.st_info) != VAR_4 &&
        FUNC_0(VAR_12.st_info) != VAR_5)
     continue;


    if (VAR_12.st_shndx == VAR_2)
     continue;

    if ((VAR_14 = FUNC_12(VAR_9, VAR_18,
        VAR_12.st_name)) == ((void*)0)) {
     FUNC_2(VAR_6, VAR_1, 0,
         "elf_strptr failed: %s",
          FUNC_4(-1));
     continue;
    }

    FUNC_1(VAR_6, VAR_14);
   }
  }
 }
 VAR_17 = FUNC_5();
 if (VAR_17 != 0)
  FUNC_2(VAR_6, VAR_1, 0, "elf_nextscn failed: %s",
       FUNC_4(VAR_17));

 FUNC_3(VAR_9);
}
