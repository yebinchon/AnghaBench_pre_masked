
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trussinfo {int outfile; struct threadinfo* curthread; } ;
struct TYPE_4__ {int nargs; char** s_args; TYPE_1__* sc; } ;
struct threadinfo {TYPE_2__ cs; } ;
struct TYPE_3__ {char* name; } ;


 scalar_t__ FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct trussinfo*) ;

void
FUNC_2(struct trussinfo *VAR_0)
{
 struct threadinfo *VAR_1;
 const char *VAR_2;
 char **VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_1 = VAR_0->curthread;

 VAR_2 = VAR_1->cs.sc->name;
 VAR_6 = VAR_1->cs.nargs;
 VAR_3 = VAR_1->cs.s_args;

 VAR_5 = FUNC_1(VAR_0);
 VAR_5 += FUNC_0(VAR_0->outfile, "%s(", VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  if (VAR_3[VAR_4] != ((void*)0))
   VAR_5 += FUNC_0(VAR_0->outfile, "%s", VAR_3[VAR_4]);
  else
   VAR_5 += FUNC_0(VAR_0->outfile,
       "<missing argument>");
  VAR_5 += FUNC_0(VAR_0->outfile, "%s", VAR_4 < (VAR_6 - 1) ?
      "," : "");
 }
 VAR_5 += FUNC_0(VAR_0->outfile, ")");
 for (VAR_4 = 0; VAR_4 < 6 - (VAR_5 / 8); VAR_4++)
  FUNC_0(VAR_0->outfile, "\t");
}
