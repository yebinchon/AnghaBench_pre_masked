
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* srcdir; char* name; char* objdir; scalar_t__ objpaths; scalar_t__ objs; struct TYPE_3__* next; } ;
typedef TYPE_1__ prog_t ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;

void
FUNC_7(void)
{
 FILE *VAR_6;
 prog_t *VAR_7;
 char VAR_8[VAR_1];

 FUNC_4(VAR_8, VAR_1, "generating %s", VAR_2);
 FUNC_5(VAR_8);

 if ((VAR_6 = FUNC_1(VAR_2, "w")) == ((void*)0)) {
  FUNC_6("%s", VAR_2);
  VAR_3 = 1;
  return;
 }

 FUNC_2(VAR_6, "# %s - parm cache generated from %s by crunchgen "
     " %s\n\n",
     VAR_2, VAR_4, VAR_0);

 for (VAR_7 = VAR_5; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
  FUNC_2(VAR_6, "\n");
  if (VAR_7->srcdir)
   FUNC_2(VAR_6, "special %s srcdir %s\n",
       VAR_7->name, VAR_7->srcdir);
  if (VAR_7->objdir)
   FUNC_2(VAR_6, "special %s objdir %s\n",
       VAR_7->name, VAR_7->objdir);
  if (VAR_7->objs) {
   FUNC_2(VAR_6, "special %s objs", VAR_7->name);
   FUNC_3(VAR_6, VAR_7->objs);
  }
  if (VAR_7->objpaths) {
   FUNC_2(VAR_6, "special %s objpaths", VAR_7->name);
   FUNC_3(VAR_6, VAR_7->objpaths);
  }
 }
 FUNC_0(VAR_6);
}
