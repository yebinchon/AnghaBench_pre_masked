
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packref {int flags; int name; int peel; int oid; } ;
typedef int peel ;
typedef int oid ;
typedef int git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,char*,int ,...) ;
 int FUNC_1 (char*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct packref *VAR_2, git_filebuf *VAR_3)
{
 char VAR_4[VAR_0 + 1];
 FUNC_1(VAR_4, sizeof(VAR_4), &VAR_2->oid);
 if (VAR_2->flags & VAR_1) {
  char VAR_5[VAR_0 + 1];
  FUNC_1(VAR_5, sizeof(VAR_5), &VAR_2->peel);

  if (FUNC_0(VAR_3, "%s %s\n^%s\n", VAR_4, VAR_2->name, VAR_5) < 0)
   return -1;
 } else {
  if (FUNC_0(VAR_3, "%s %s\n", VAR_4, VAR_2->name) < 0)
   return -1;
 }

 return 0;
}
