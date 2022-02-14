
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (unsigned char) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (int) ;
 int * FUNC_13 (char*,char*) ;
 int FUNC_14 (int) ;
 int VAR_10 ;
 int FUNC_15 (char*,int ,char*,char*,char*,int ) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 char* FUNC_17 (char*,char) ;
 int VAR_11 ;
 int FUNC_18 (int ) ;
 scalar_t__ VAR_12 ;

void
FUNC_19(void)
{
 char *VAR_13;
 off_t VAR_14;
 FILE *VAR_15 = ((void*)0);
 int VAR_16;

 if (!VAR_10) {
  if (FUNC_1(VAR_5[0], VAR_0) < 0) {
   FUNC_18(VAR_0);
   FUNC_2("can't create temp file %s", VAR_0);
  }
  FUNC_15(VAR_2, VAR_3, "%s%s%s", VAR_1,
      VAR_12 ? " " : " -s ", VAR_0);
  VAR_15 = FUNC_13(VAR_2, "w");
 }
 for (;;) {
  VAR_14 = FUNC_6(VAR_9);
  if (FUNC_12(1) == 0) {
   FUNC_10(VAR_14, VAR_8);
   break;
  }
  VAR_8++;
  for (VAR_13 = VAR_2; FUNC_8((unsigned char)*VAR_13) || *VAR_13 == ','; VAR_13++)
   ;

  if (FUNC_8((unsigned char)*VAR_2) &&
      (*VAR_13 == 'a' || *VAR_13 == 'c' || *VAR_13 == 'd' || *VAR_13 == 'i' || *VAR_13 == 's')) {
   if (VAR_15 != ((void*)0))
    FUNC_5(VAR_2, VAR_15);
   if (*VAR_13 == 's') {
    for (;;) {
     VAR_16 = 0;
     VAR_13 = FUNC_17(VAR_2, '\0') - 1;
     while (--VAR_13 >= VAR_2 && *VAR_13 == '\\')
      VAR_16 = !VAR_16;
     if (!VAR_16 ||
         FUNC_12(1) == 0)
      break;
     if (VAR_15 != ((void*)0))
      FUNC_5(VAR_2, VAR_15);
    }
   } else if (*VAR_13 != 'd') {
    while (FUNC_12(1)) {
     VAR_8++;
     if (VAR_15 != ((void*)0))
      FUNC_5(VAR_2, VAR_15);
     if (FUNC_16(VAR_2, ".\n"))
      break;
    }
   }
  } else {
   FUNC_10(VAR_14, VAR_8);
   break;
  }
 }
 if (VAR_15 == ((void*)0))
  return;
 FUNC_4(VAR_15, "w\n");
 FUNC_4(VAR_15, "q\n");
 FUNC_3(VAR_15);
 FUNC_11(VAR_15);
 FUNC_7();
 if (!VAR_4) {
  if (FUNC_9(VAR_0, VAR_7) < 0) {
   VAR_11 = 1;
   FUNC_0(VAR_0, VAR_6);
  } else
   FUNC_0(VAR_7, VAR_6);
 }
 FUNC_14(1);
}
