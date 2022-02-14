
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtablist {char* mtab_host; char* mtab_dirp; scalar_t__ mtab_time; struct mtablist* mtab_next; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,long,char*,char*) ;
 struct mtablist* VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,char*) ;

int
FUNC_7(int VAR_3)
{
 struct mtablist *VAR_4, *VAR_5;
 FILE *VAR_6;
 int VAR_7;

 if ((VAR_6 = FUNC_1(VAR_1, "w")) == ((void*)0)) {
  FUNC_4(VAR_0, "can't write to %s", VAR_1);
   return (0);
 }
 VAR_7 = 0;
 for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->mtab_next) {
  if (VAR_4->mtab_host[0] == '\0')
   continue;

  for (VAR_5 = VAR_4->mtab_next; VAR_5 != ((void*)0); VAR_5 = VAR_5->mtab_next)
   if (FUNC_3(VAR_4->mtab_host, VAR_5->mtab_host) == 0 &&
       FUNC_3(VAR_4->mtab_dirp, VAR_5->mtab_dirp) == 0)
    break;
  if (VAR_5 != ((void*)0))
   continue;

  FUNC_2(VAR_6, "%ld\t%s\t%s\n",
      (long)VAR_4->mtab_time, VAR_4->mtab_host,
      VAR_4->mtab_dirp);
  if (VAR_3)
   FUNC_6("write mounttab entry %s:%s",
       VAR_4->mtab_host, VAR_4->mtab_dirp);
  VAR_7++;
 }
 FUNC_0(VAR_6);
 if (VAR_7 == 0) {
  if (FUNC_5(VAR_1) == -1) {
   FUNC_4(VAR_0, "can't remove %s", VAR_1);
   return (0);
  }
 }
 return (1);
}
