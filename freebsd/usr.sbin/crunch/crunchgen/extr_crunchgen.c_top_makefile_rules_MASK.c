
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* ident; struct TYPE_3__* next; } ;
typedef TYPE_1__ prog_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*) ;

void
FUNC_3(FILE *VAR_7)
{
 prog_t *VAR_8;

 FUNC_0(VAR_7, "LD?= ld\n");
 if ( FUNC_2(&VAR_2, &VAR_3) )
  FUNC_0(VAR_7, "# NOTE: Some LIBS declarations below overridden by LIBS_SO\n");

 FUNC_0(VAR_7, "LIBS+=");
 FUNC_1(VAR_7, VAR_2);

 FUNC_0(VAR_7, "LIBS_SO+=");
 FUNC_1(VAR_7, VAR_3);

 if (VAR_4) {
  FUNC_0(VAR_7, "MAKEOBJDIRPREFIX?=%s\n", VAR_5);
  FUNC_0(VAR_7, "MAKEENV=env MAKEOBJDIRPREFIX=$(MAKEOBJDIRPREFIX)\n");
  FUNC_0(VAR_7, "CRUNCHMAKE=$(MAKEENV) $(MAKE)\n");
 } else {
  FUNC_0(VAR_7, "CRUNCHMAKE=$(MAKE)\n");
 }

 if (VAR_0) {
  FUNC_0(VAR_7, "BUILDOPTS+=");
  FUNC_1(VAR_7, VAR_0);
 }

 FUNC_0(VAR_7, "CRUNCHED_OBJS=");
 for (VAR_8 = VAR_6; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
  FUNC_0(VAR_7, " %s.lo", VAR_8->name);
 FUNC_0(VAR_7, "\n");

 FUNC_0(VAR_7, "SUBMAKE_TARGETS=");
 for (VAR_8 = VAR_6; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
  FUNC_0(VAR_7, " %s_make", VAR_8->ident);
 FUNC_0(VAR_7, "\nSUBCLEAN_TARGETS=");
 for (VAR_8 = VAR_6; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
  FUNC_0(VAR_7, " %s_clean", VAR_8->ident);
 FUNC_0(VAR_7, "\n\n");

 FUNC_0(VAR_7, "all: objs exe\nobjs: $(SUBMAKE_TARGETS)\n");
 FUNC_0(VAR_7, "exe: %s\n", VAR_1);
 FUNC_0(VAR_7, "%s: %s.o $(CRUNCHED_OBJS) $(SUBMAKE_TARGETS)\n", VAR_1, VAR_1);
 FUNC_0(VAR_7, ".if defined(LIBS_SO) && !empty(LIBS_SO)\n");
 FUNC_0(VAR_7, "\t$(CC) -o %s %s.o $(CRUNCHED_OBJS) \\\n",
     VAR_1, VAR_1);
 FUNC_0(VAR_7, "\t\t-Xlinker -Bstatic $(LIBS) \\\n");
 FUNC_0(VAR_7, "\t\t-Xlinker -Bdynamic $(LIBS_SO)\n");
 FUNC_0(VAR_7, ".else\n");
 FUNC_0(VAR_7, "\t$(CC) -static -o %s %s.o $(CRUNCHED_OBJS) $(LIBS)\n",
     VAR_1, VAR_1);
 FUNC_0(VAR_7, ".endif\n");
 FUNC_0(VAR_7, "realclean: clean subclean\n");
 FUNC_0(VAR_7, "clean:\n\trm -f %s *.lo *.o *_stub.c\n", VAR_1);
 FUNC_0(VAR_7, "subclean: $(SUBCLEAN_TARGETS)\n");
}
