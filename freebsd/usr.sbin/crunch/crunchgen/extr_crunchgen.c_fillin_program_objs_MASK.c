
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* str; struct TYPE_4__* next; } ;
typedef TYPE_1__ strlst_t ;
struct TYPE_5__ {char* objvar; char* srcdir; char* ident; int objs; TYPE_1__* buildopts; } ;
typedef TYPE_2__ prog_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (char*) ;
 char* VAR_3 ;
 int FUNC_8 (int *,scalar_t__) ;
 char* VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 char* VAR_5 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,...) ;

void
FUNC_17(prog_t *VAR_6, char *VAR_7)
{
 char *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 FILE *VAR_12;
 char *VAR_13="OBJS";
 strlst_t *VAR_14;
 char VAR_15[VAR_0];



 if ((VAR_10 = FUNC_7(VAR_5)) == -1) {
  FUNC_10(VAR_5);
  FUNC_1(1);
 }
 if ((VAR_12 = FUNC_3(VAR_10, "w")) == ((void*)0)) {
  FUNC_15("%s", VAR_5);
  VAR_2 = 1;
  return;
 }
 if (VAR_6->objvar)
  VAR_13 = VAR_6->objvar;




 if (VAR_3[0] != '\0')
  FUNC_5(VAR_12, ".include \"%s\"\n", VAR_3);
 FUNC_5(VAR_12, ".include \"%s\"\n", VAR_7);
 FUNC_5(VAR_12, ".POSIX:\n");
 if (VAR_1) {
  FUNC_5(VAR_12, "BUILDOPTS+=");
  FUNC_8(VAR_12, VAR_1);
 }
 FUNC_5(VAR_12, ".if defined(PROG)\n");
 FUNC_5(VAR_12, "%s?=${PROG}.o\n", VAR_13);
 FUNC_5(VAR_12, ".endif\n");
 FUNC_5(VAR_12, "loop:\n\t@echo 'OBJS= '${%s}\n", VAR_13);

 FUNC_5(VAR_12, "crunchgen_objs:\n"
     "\t@cd %s && %s -f %s $(BUILDOPTS) $(%s_OPTS)",
     VAR_6->srcdir, VAR_4, VAR_5, VAR_6->ident);
 for (VAR_14 = VAR_6->buildopts; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
  FUNC_5(VAR_12, " %s", VAR_14->str);
 FUNC_5(VAR_12, " loop\n");

 FUNC_2(VAR_12);

 FUNC_12(VAR_15, VAR_0, "cd %s && %s -f %s -B crunchgen_objs",
      VAR_6->srcdir, VAR_4, VAR_5);
 if ((VAR_12 = FUNC_11(VAR_15, "r")) == ((void*)0)) {
  FUNC_15("submake pipe");
  VAR_2 = 1;
  return;
 }

 while(FUNC_4(VAR_15, VAR_0, VAR_12)) {
  if (FUNC_13(VAR_15, "OBJS= ", 6)) {
   FUNC_16("make error: %s", VAR_15);
   VAR_2 = 1;
   continue;
  }

  VAR_9 = VAR_15 + 6;
  while (FUNC_6((unsigned char)*VAR_9))
   VAR_9++;

  while(*VAR_9) {
   VAR_8 = VAR_9;
   while (*VAR_9 && !FUNC_6((unsigned char)*VAR_9))
    VAR_9++;
   if (*VAR_9)
    *VAR_9++ = '\0';
   FUNC_0(&VAR_6->objs, VAR_8);
   while (FUNC_6((unsigned char)*VAR_9))
    VAR_9++;
  }
 }

 if ((VAR_11=FUNC_9(VAR_12)) != 0) {
  FUNC_16("make error: make returned %d", VAR_11);
  VAR_2 = 1;
 }

 FUNC_14(VAR_5);
}
