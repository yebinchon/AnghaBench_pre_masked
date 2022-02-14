
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct stat {int st_mtime; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* VAR_5 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ,struct stat*) ;
 char* VAR_6 ;
 struct tm* FUNC_7 (int*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*,int ,int ,struct tm*) ;
 int FUNC_11 (int *) ;
 int VAR_10 ;

FILE *
FUNC_12(int VAR_11, char **VAR_12, const char **VAR_13, char *VAR_14, int VAR_15)
{
 FILE *VAR_16 = ((void*)0);
 time_t VAR_17;
 struct tm *VAR_18 = ((void*)0);
 struct stat VAR_19;
 static int VAR_20 = -1;

 ++VAR_20;
 if (VAR_1 >= VAR_11) {



  if (VAR_20)
   return(((void*)0));
  FUNC_0(VAR_9);
  VAR_16 = VAR_9;
  if (VAR_6 != ((void*)0))
   *VAR_13 = VAR_6;
  else
   *VAR_13 = VAR_5;
  if (VAR_8)
   return(VAR_16);
  if ((VAR_17 = FUNC_11(((void*)0))) == -1) {
   ++VAR_3;
   (void)FUNC_4(VAR_2, "pr: cannot get time of day, %s\n",
    FUNC_9(VAR_4));
   VAR_1 = VAR_11 - 1;
   return(((void*)0));
  }
  VAR_18 = FUNC_7(&VAR_17);
 }
 for (; VAR_1 < VAR_11; ++VAR_1) {
  if (FUNC_8(VAR_12[VAR_1], "-") == 0) {



   FUNC_0(VAR_9);
   VAR_16 = VAR_9;
   if (VAR_6 != ((void*)0))
    *VAR_13 = VAR_6;
   else
    *VAR_13 = VAR_5;
   ++VAR_1;
   if (VAR_8 || (VAR_15 && VAR_20))
    return(VAR_16);
   if ((VAR_17 = FUNC_11(((void*)0))) == -1) {
    ++VAR_3;
    (void)FUNC_4(VAR_2,
     "pr: cannot get time of day, %s\n",
     FUNC_9(VAR_4));
    return(((void*)0));
   }
   VAR_18 = FUNC_7(&VAR_17);
  } else {



   if ((VAR_16 = FUNC_3(VAR_12[VAR_1], "r")) == ((void*)0)) {
    ++VAR_3;
    if (VAR_7)
     continue;
    (void)FUNC_4(VAR_2, "pr: cannot open %s, %s\n",
     VAR_12[VAR_1], FUNC_9(VAR_4));
    continue;
   }
   if (VAR_6 != ((void*)0))
    *VAR_13 = VAR_6;
   else if (VAR_15)
    *VAR_13 = VAR_5;
   else
    *VAR_13 = VAR_12[VAR_1];
   ++VAR_1;
   if (VAR_8 || (VAR_15 && VAR_20))
    return(VAR_16);

   if (VAR_15) {
    if ((VAR_17 = FUNC_11(((void*)0))) == -1) {
     ++VAR_3;
     (void)FUNC_4(VAR_2,
          "pr: cannot get time of day, %s\n",
          FUNC_9(VAR_4));
     FUNC_1(VAR_16);
     return(((void*)0));
    }
    VAR_18 = FUNC_7(&VAR_17);
   } else {
    if (FUNC_6(FUNC_2(VAR_16), &VAR_19) < 0) {
     ++VAR_3;
     (void)FUNC_1(VAR_16);
     (void)FUNC_4(VAR_2,
      "pr: cannot stat %s, %s\n",
      VAR_12[VAR_1], FUNC_9(VAR_4));
     return(((void*)0));
    }
    VAR_18 = FUNC_7(&(VAR_19.st_mtime));
   }
  }
  break;
 }
 if (VAR_16 == ((void*)0))
  return(((void*)0));




 if (FUNC_10(VAR_14, VAR_0, VAR_10, VAR_18) <= 0) {
  ++VAR_3;
  if (VAR_16 != VAR_9)
   (void)FUNC_1(VAR_16);
  (void)FUNC_5("pr: time conversion failed\n", VAR_2);
  return(((void*)0));
 }
 return(VAR_16);
}
