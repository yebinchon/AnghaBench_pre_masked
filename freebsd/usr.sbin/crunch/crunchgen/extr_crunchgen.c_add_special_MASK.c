
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * libs; int * buildopts; int * objvar; int * keeplist; int * objpaths; int * objs; int * objdir; int * srcdir; int * ident; } ;
typedef TYPE_1__ prog_t ;


 int FUNC_0 (int **,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int ,char*,...) ;

void
FUNC_6(int VAR_4, char **VAR_5)
{
 int VAR_6;
 prog_t *VAR_7 = FUNC_1(VAR_5[1]);

 if (VAR_7 == ((void*)0)) {
  if (VAR_3)
   return;

  FUNC_5("%s:%d: no prog %s previously declared, skipping special",
      VAR_0, VAR_2, VAR_5[1]);
  VAR_1 = 1;
  return;
 }

 if (!FUNC_3(VAR_5[2], "ident")) {
  if (VAR_4 != 4)
   goto argcount;
  if ((VAR_7->ident = FUNC_4(VAR_5[3])) == ((void*)0))
   FUNC_2();
 } else if (!FUNC_3(VAR_5[2], "srcdir")) {
  if (VAR_4 != 4)
   goto argcount;
  if ((VAR_7->srcdir = FUNC_4(VAR_5[3])) == ((void*)0))
   FUNC_2();
 } else if (!FUNC_3(VAR_5[2], "objdir")) {
  if(VAR_4 != 4)
   goto argcount;
  if((VAR_7->objdir = FUNC_4(VAR_5[3])) == ((void*)0))
   FUNC_2();
 } else if (!FUNC_3(VAR_5[2], "objs")) {
  VAR_7->objs = ((void*)0);
  for (VAR_6 = 3; VAR_6 < VAR_4; VAR_6++)
   FUNC_0(&VAR_7->objs, VAR_5[VAR_6]);
 } else if (!FUNC_3(VAR_5[2], "objpaths")) {
  VAR_7->objpaths = ((void*)0);
  for (VAR_6 = 3; VAR_6 < VAR_4; VAR_6++)
   FUNC_0(&VAR_7->objpaths, VAR_5[VAR_6]);
 } else if (!FUNC_3(VAR_5[2], "keep")) {
  VAR_7->keeplist = ((void*)0);
  for(VAR_6 = 3; VAR_6 < VAR_4; VAR_6++)
   FUNC_0(&VAR_7->keeplist, VAR_5[VAR_6]);
 } else if (!FUNC_3(VAR_5[2], "objvar")) {
  if(VAR_4 != 4)
   goto argcount;
  if ((VAR_7->objvar = FUNC_4(VAR_5[3])) == ((void*)0))
   FUNC_2();
 } else if (!FUNC_3(VAR_5[2], "buildopts")) {
  VAR_7->buildopts = ((void*)0);
  for (VAR_6 = 3; VAR_6 < VAR_4; VAR_6++)
   FUNC_0(&VAR_7->buildopts, VAR_5[VAR_6]);
 } else if (!FUNC_3(VAR_5[2], "lib")) {
  for (VAR_6 = 3; VAR_6 < VAR_4; VAR_6++)
   FUNC_0(&VAR_7->libs, VAR_5[VAR_6]);
 } else {
  FUNC_5("%s:%d: bad parameter name `%s', skipping line",
      VAR_0, VAR_2, VAR_5[2]);
  VAR_1 = 1;
 }
 return;

 argcount:
 FUNC_5("%s:%d: too %s arguments, expected \"special %s %s <string>\"",
     VAR_0, VAR_2, VAR_4 < 4? "few" : "many", VAR_5[1], VAR_5[2]);
 VAR_1 = 1;
}
