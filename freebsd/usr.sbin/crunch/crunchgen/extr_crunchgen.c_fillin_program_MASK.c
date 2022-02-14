
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; char* srcdir; char* realsrcdir; char* objdir; int goterror; int objs; scalar_t__ ident; } ;
typedef TYPE_1__ prog_t ;
typedef int path ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int,char*,char*,...) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 void* FUNC_14 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_15 (char*,char*,char*,...) ;

void
FUNC_16(prog_t *VAR_6)
{
 char VAR_7[VAR_1];
 char VAR_8[VAR_0];
 FILE *VAR_9;

 FUNC_11(VAR_8, VAR_0, "filling in parms for %s", VAR_6->name);
 FUNC_12(VAR_8);

 if (!VAR_6->ident)
  VAR_6->ident = FUNC_4(VAR_6->name);


 if (!VAR_6->srcdir) {
  VAR_6->srcdir = FUNC_0(VAR_6->name);
 }


 if (VAR_6->srcdir) {
  FUNC_11(VAR_8, VAR_0, "cd %s && echo -n `/bin/pwd`",
      VAR_6->srcdir);
  VAR_9 = FUNC_10(VAR_8,"r");
  if (!VAR_9)
   FUNC_1(1, "Can't execute: %s\n", VAR_8);

  VAR_7[0] = '\0';
  FUNC_2(VAR_7, sizeof VAR_7, VAR_9);
  if (FUNC_9(VAR_9))
   FUNC_1(1, "Can't execute: %s\n", VAR_8);

  if (!*VAR_7)
   FUNC_1(1, "Can't perform pwd on: %s\n", VAR_6->srcdir);

  VAR_6->realsrcdir = FUNC_14(VAR_7);
 }





 if (!VAR_3 && !VAR_6->objdir && VAR_6->srcdir) {
  char *VAR_10;

  VAR_10 = ((void*)0);
  FUNC_11(VAR_8, sizeof VAR_8, "%s/%s", VAR_4, VAR_6->realsrcdir);
  if (FUNC_6(VAR_8) ||
      ((VAR_10 = FUNC_5("MK_AUTO_OBJ")) != ((void*)0) &&
      FUNC_13(VAR_10, "yes") == 0)) {
   if ((VAR_6->objdir = FUNC_14(VAR_8)) == ((void*)0))
   FUNC_8();
  } else
   VAR_6->objdir = VAR_6->realsrcdir;
 }





 FUNC_11(VAR_7, sizeof(VAR_7), "Makefile.%s", VAR_6->name);
 if (FUNC_7(VAR_7)) {
  FUNC_11(VAR_8, VAR_0, "Using %s for %s", VAR_7, VAR_6->name);
  FUNC_12(VAR_8);
 } else
  if (VAR_6->srcdir)
   FUNC_11(VAR_7, sizeof(VAR_7), "%s/Makefile", VAR_6->srcdir);
 if (!VAR_6->objs && VAR_6->srcdir && FUNC_7(VAR_7))
  FUNC_3(VAR_6, VAR_7);

 if (!VAR_6->srcdir && !VAR_6->objdir && VAR_5)
  FUNC_15("%s: %s: %s",
      "warning: could not find source directory",
      VAR_2, VAR_6->name);
 if (!VAR_6->objs && VAR_5)
  FUNC_15("%s: %s: warning: could not find any .o files",
      VAR_2, VAR_6->name);

 if ((!VAR_6->srcdir || !VAR_6->objdir) && !VAR_6->objs)
  VAR_6->goterror = 1;
}
