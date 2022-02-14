
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef scalar_t__ time_t ;
struct mtablist {char* mtab_host; char* mtab_dirp; struct mtablist* mtab_next; scalar_t__ mtab_time; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int ,char*) ;
 struct mtablist* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 struct mtablist* VAR_8 ;
 char* FUNC_6 (char**,char*) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;
 int FUNC_8 (int ,char*,...) ;

int
FUNC_9(void)
{
 struct mtablist **VAR_9, *VAR_10;
 char *VAR_11, *VAR_12, *VAR_13;
 char VAR_14[VAR_5];
 char *VAR_15, *VAR_16;
 time_t VAR_17;
 u_long VAR_18;
 FILE *VAR_19;

 if ((VAR_19 = FUNC_3(VAR_4, "r")) == ((void*)0)) {
  if (VAR_7 == VAR_0)
   return (0);
  else {
   FUNC_8(VAR_1, "can't open %s", VAR_4);
   return (0);
  }
 }
 VAR_17 = 0;
 VAR_9 = &VAR_8;
 while (FUNC_2(VAR_14, VAR_5, VAR_19) != ((void*)0)) {
  VAR_13 = VAR_14;
  VAR_7 = 0;
  if (*VAR_13 == '#' || *VAR_13 == ' ' || *VAR_13 == '\n')
   continue;
  VAR_15 = FUNC_6(&VAR_13, " \t\n");
  if (VAR_15 == ((void*)0) || *VAR_15 == '\0') {
   FUNC_0("time", VAR_15);
   continue;
  }
  VAR_11 = FUNC_6(&VAR_13, " \t\n");
  if (VAR_11 == ((void*)0) || *VAR_11 == '\0') {
   FUNC_0("host", VAR_11);
   continue;
  }
  VAR_12 = FUNC_6(&VAR_13, " \t\n");
  if (VAR_12 == ((void*)0) || *VAR_12 == '\0') {
   FUNC_0("dir", VAR_12);
   continue;
  }
  VAR_18 = FUNC_7(VAR_15, &VAR_16, 10);
  if (VAR_18 == VAR_6 || *VAR_16 != '\0') {
   FUNC_0("time", VAR_15);
   continue;
  }
  VAR_17 = VAR_18;
  if ((VAR_10 = FUNC_4(sizeof (struct mtablist))) == ((void*)0)) {
   FUNC_8(VAR_1, "malloc");
   FUNC_1(VAR_19);
   return (0);
  }
  VAR_10->mtab_time = VAR_17;
  FUNC_5(VAR_10->mtab_host, VAR_11, VAR_2);
  VAR_10->mtab_host[VAR_2 - 1] = '\0';
  FUNC_5(VAR_10->mtab_dirp, VAR_12, VAR_3);
  VAR_10->mtab_dirp[VAR_3 - 1] = '\0';
  VAR_10->mtab_next = (struct mtablist *)((void*)0);
  *VAR_9 = VAR_10;
  VAR_9 = &VAR_10->mtab_next;
 }
 FUNC_1(VAR_19);
 return (1);
}
