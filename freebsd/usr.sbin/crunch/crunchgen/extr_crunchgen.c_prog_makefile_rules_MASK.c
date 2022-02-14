
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* str; struct TYPE_5__* next; } ;
typedef TYPE_1__ strlst_t ;
struct TYPE_6__ {char* name; char* ident; char* objdir; char* srcdir; char* realsrcdir; TYPE_1__* keeplist; TYPE_1__* libs; TYPE_1__* buildopts; TYPE_1__* objs; TYPE_1__* objpaths; } ;
typedef TYPE_2__ prog_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(FILE *VAR_1, prog_t *VAR_2)
{
 strlst_t *VAR_3;

 FUNC_0(VAR_1, "\n# -------- %s\n\n", VAR_2->name);

 FUNC_0(VAR_1, "%s_OBJDIR=", VAR_2->ident);
 if (VAR_2->objdir)
  FUNC_0(VAR_1, "%s", VAR_2->objdir);
 else
  FUNC_0(VAR_1, "$(MAKEOBJDIRPREFIX)/$(%s_REALSRCDIR)\n",
      VAR_2->ident);
 FUNC_0(VAR_1, "\n");

 FUNC_0(VAR_1, "%s_OBJPATHS=", VAR_2->ident);
 if (VAR_2->objpaths)
  FUNC_1(VAR_1, VAR_2->objpaths);
 else {
  for (VAR_3 = VAR_2->objs; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
   FUNC_0(VAR_1, " $(%s_OBJDIR)/%s", VAR_2->ident, VAR_3->str);
  }
  FUNC_0(VAR_1, "\n");
 }
 FUNC_0(VAR_1, "$(%s_OBJPATHS): .NOMETA\n", VAR_2->ident);

 if (VAR_2->srcdir && VAR_2->objs) {
  FUNC_0(VAR_1, "%s_SRCDIR=%s\n", VAR_2->ident, VAR_2->srcdir);
  FUNC_0(VAR_1, "%s_REALSRCDIR=%s\n", VAR_2->ident, VAR_2->realsrcdir);

  FUNC_0(VAR_1, "%s_OBJS=", VAR_2->ident);
  FUNC_1(VAR_1, VAR_2->objs);
  if (VAR_2->buildopts != ((void*)0)) {
   FUNC_0(VAR_1, "%s_OPTS+=", VAR_2->ident);
   FUNC_1(VAR_1, VAR_2->buildopts);
  }



  FUNC_0(VAR_1, "%s_make:\n", VAR_2->ident);
  FUNC_0(VAR_1, "\t(cd $(%s_SRCDIR) && ", VAR_2->ident);
  if (VAR_0)
   FUNC_0(VAR_1, "$(CRUNCHMAKE) obj && ");
  FUNC_0(VAR_1, "\\\n");
  FUNC_0(VAR_1, "\t\t$(CRUNCHMAKE) $(BUILDOPTS) $(%s_OPTS) depend &&",
      VAR_2->ident);
  FUNC_0(VAR_1, "\\\n");
  FUNC_0(VAR_1, "\t\t$(CRUNCHMAKE) $(BUILDOPTS) $(%s_OPTS) "
      "$(%s_OBJS))",
      VAR_2->ident, VAR_2->ident);
  FUNC_0(VAR_1, "\n");
  FUNC_0(VAR_1, "%s_clean:\n", VAR_2->ident);
  FUNC_0(VAR_1, "\t(cd $(%s_SRCDIR) && $(CRUNCHMAKE) $(BUILDOPTS) clean cleandepend)\n\n",
      VAR_2->ident);
 } else {
  FUNC_0(VAR_1, "%s_make:\n", VAR_2->ident);
  FUNC_0(VAR_1, "\t@echo \"** cannot make objs for %s\"\n\n",
      VAR_2->name);
 }

 if (VAR_2->libs) {
  FUNC_0(VAR_1, "%s_LIBS=", VAR_2->ident);
  FUNC_1(VAR_1, VAR_2->libs);
 }

 FUNC_0(VAR_1, "%s_stub.c:\n", VAR_2->name);
 FUNC_0(VAR_1, "\techo \""
     "extern int main(int argc, char **argv, char **envp); "
     "int _crunched_%s_stub(int argc, char **argv, char **envp)"
     "{return main(argc,argv,envp);}\" >%s_stub.c\n",
     VAR_2->ident, VAR_2->name);
 FUNC_0(VAR_1, "%s.lo: %s_stub.o $(%s_OBJPATHS)",
     VAR_2->name, VAR_2->name, VAR_2->ident);
 if (VAR_2->libs)
  FUNC_0(VAR_1, " $(%s_LIBS)", VAR_2->ident);

 FUNC_0(VAR_1, "\n");
 FUNC_0(VAR_1, "\t$(CC) -nostdlib -Wl,-dc -r -o %s.lo %s_stub.o $(%s_OBJPATHS)",
     VAR_2->name, VAR_2->name, VAR_2->ident);
 if (VAR_2->libs)
  FUNC_0(VAR_1, " $(%s_LIBS)", VAR_2->ident);
 FUNC_0(VAR_1, "\n");
 FUNC_0(VAR_1, "\tcrunchide -k _crunched_%s_stub ", VAR_2->ident);
 for (VAR_3 = VAR_2->keeplist; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  FUNC_0(VAR_1, "-k _%s ", VAR_3->str);
 FUNC_0(VAR_1, "%s.lo\n", VAR_2->name);
}
