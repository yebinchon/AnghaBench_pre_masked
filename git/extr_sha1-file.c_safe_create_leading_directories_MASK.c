
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef enum scld_error { ____Placeholder_scld_error } scld_error ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,struct stat*) ;

enum scld_error FUNC_6(char *VAR_9)
{
 char *VAR_10 = VAR_9 + FUNC_4(VAR_9);
 enum scld_error VAR_11 = VAR_5;

 while (VAR_11 == VAR_5 && VAR_10) {
  struct stat VAR_12;
  char *VAR_13 = VAR_10, VAR_14;

  while (*VAR_13 && !FUNC_2(*VAR_13))
   VAR_13++;

  if (!*VAR_13)
   break;

  VAR_10 = VAR_13 + 1;
  while (FUNC_2(*VAR_10))
   VAR_10++;
  if (!*VAR_10)
   break;

  VAR_14 = *VAR_13;
  *VAR_13 = '\0';
  if (!FUNC_5(VAR_9, &VAR_12)) {

   if (!FUNC_0(VAR_12.st_mode)) {
    VAR_8 = VAR_2;
    VAR_11 = VAR_3;
   }
  } else if (FUNC_3(VAR_9, 0777)) {
   if (VAR_8 == VAR_0 &&
       !FUNC_5(VAR_9, &VAR_12) && FUNC_0(VAR_12.st_mode))
    ;
   else if (VAR_8 == VAR_1)
    VAR_11 = VAR_7;
   else
    VAR_11 = VAR_4;
  } else if (FUNC_1(VAR_9)) {
   VAR_11 = VAR_6;
  }
  *VAR_13 = VAR_14;
 }
 return VAR_11;
}
