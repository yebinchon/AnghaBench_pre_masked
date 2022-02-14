
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountlist {char* ml_host; char* ml_dirp; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,struct mountlist*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,size_t) ;
 char* FUNC_7 (char**,char*) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct mountlist *VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 char VAR_13[VAR_4];
 FILE *VAR_14;

 if ((VAR_14 = FUNC_3(VAR_5, "r")) == ((void*)0)) {
  if (VAR_6 == VAR_0)
   return;
  else {
   FUNC_8(VAR_1, "can't open %s", VAR_5);
   return;
  }
 }
 while (FUNC_2(VAR_13, VAR_4, VAR_14) != ((void*)0)) {
  VAR_12 = VAR_13;
  VAR_10 = FUNC_7(&VAR_12, " \t\n");
  VAR_11 = FUNC_7(&VAR_12, " \t\n");
  if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
   continue;
  VAR_9 = (struct mountlist *)FUNC_4(sizeof (*VAR_9));
  if (VAR_9 == (struct mountlist *)((void*)0))
   FUNC_5();
  FUNC_6(VAR_9->ml_host, VAR_10, VAR_2);
  VAR_9->ml_host[VAR_2] = '\0';
  FUNC_6(VAR_9->ml_dirp, VAR_11, VAR_3);
  VAR_9->ml_dirp[VAR_3] = '\0';

  FUNC_0(&VAR_7, VAR_9, VAR_8);
 }
 FUNC_1(VAR_14);
}
