
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* e_ident; int e_phnum; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef scalar_t__ Elf_Kind ;
typedef int Elf ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int,char*) ;
 int * FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int,char**,char*,int ,int *) ;
 int VAR_10 ;
 int FUNC_11 (char*,int ,int ) ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int ,int,char*) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,...) ;

int
FUNC_17(int VAR_13, char **VAR_14)
{
 GElf_Ehdr VAR_15;
 Elf *VAR_16;
 Elf_Kind VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 char *VAR_22;
 bool VAR_23;

 VAR_23 = 0;
 VAR_20 = 0;
 VAR_21 = 0;

 if (FUNC_6(VAR_4) == VAR_5)
  FUNC_7(VAR_6, "elf_version error");

 while ((VAR_18 = FUNC_10(VAR_13, VAR_14, "hle:", VAR_10, ((void*)0))) != -1) {
  switch (VAR_18) {
  case 'l':
   FUNC_12();
   VAR_23 = 1;
   break;
  case 'e':
   VAR_22 = VAR_11;
   VAR_20 = 1;
   break;
  case 'h':
  default:
   FUNC_14();
  }
 }
 VAR_13 -= VAR_12;
 VAR_14 += VAR_12;
 if (VAR_13 == 0) {
  if (VAR_23)
   FUNC_8(0);
  else {
   FUNC_16("no file(s) specified");
   FUNC_14();
  }
 }

 while (VAR_13) {
  VAR_16 = ((void*)0);

  if ((VAR_19 = FUNC_11(VAR_14[0],
      VAR_20 ? VAR_8 : VAR_7, 0)) < 0) {
   FUNC_15("error opening file %s", VAR_14[0]);
   VAR_21 = 1;
   goto fail;
  }

  if ((VAR_16 = FUNC_2(VAR_19, VAR_1, ((void*)0))) == ((void*)0)) {
   FUNC_16("elf_begin failed: %s", FUNC_4(-1));
   VAR_21 = 1;
   goto fail;
  }

  if ((VAR_17 = FUNC_5(VAR_16)) != VAR_3) {
   if (VAR_17 == VAR_2)
    FUNC_16("file '%s' is an archive", VAR_14[0]);
   else
    FUNC_16("file '%s' is not an ELF file", VAR_14[0]);
   VAR_21 = 1;
   goto fail;
  }

  if (FUNC_9(VAR_16, &VAR_15) == ((void*)0)) {
   FUNC_16("gelf_getehdr: %s", FUNC_4(-1));
   VAR_21 = 1;
   goto fail;
  }




  if (VAR_15.e_ident[VAR_0] != VAR_9) {
   FUNC_16("file endianness must match host");
   VAR_21 = 1;
   goto fail;
  }

  if (!VAR_20) {
   if (!FUNC_13(VAR_16, VAR_15.e_phnum, VAR_19,
       VAR_14[0])) {
    VAR_21 = 1;
    goto fail;
   }
  } else if (!FUNC_1(VAR_16, VAR_15.e_phnum, VAR_19,
      VAR_22)) {
   VAR_21 = 1;
   goto fail;
  }
fail:
  if (VAR_16 != ((void*)0))
   FUNC_3(VAR_16);

  if (VAR_19 >= 0)
   FUNC_0(VAR_19);

  VAR_13--;
  VAR_14++;
 }

 return (VAR_21);
}
