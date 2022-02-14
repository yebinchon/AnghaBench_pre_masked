
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int ssize_t ;
struct TYPE_2__ {int ziplen; char* zipped; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 int FUNC_14 (char*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_15(char *VAR_7)
{
 char *VAR_8 = VAR_7, *VAR_9 = ((void*)0);
 ssize_t VAR_10;
 int VAR_11;
 struct stat VAR_12;


 if (VAR_7[0] == '-' && VAR_7[1] == '\0') {
  if (VAR_2)
   FUNC_5();
  else
   FUNC_6();
  return;
 }

retry:
 if (FUNC_13(VAR_7, &VAR_12) != 0 || (VAR_4 == 0 && VAR_1 == 0 &&
     FUNC_7(VAR_7, &VAR_12) != 0)) {

  if (VAR_2 && VAR_9 == ((void*)0) && VAR_3 == VAR_0) {
   VAR_10 = FUNC_14(VAR_7);
   VAR_11 = VAR_6[0].ziplen;
   VAR_9 = FUNC_8(VAR_10 + VAR_11 + 1);
   if (VAR_9 == ((void*)0))
    FUNC_9("malloc");
   FUNC_12(VAR_9, VAR_7, VAR_10);
   FUNC_12(VAR_9 + VAR_10, VAR_6[0].zipped, VAR_11 + 1);
   VAR_7 = VAR_9;
   goto retry;
  }
  FUNC_10("can't stat: %s", VAR_8);
  goto out;
 }

 if (FUNC_0(VAR_12.st_mode)) {

  if (VAR_5)
   FUNC_3(VAR_7);
  else

   FUNC_11("%s is a directory", VAR_7);
  goto out;
 }

 if (FUNC_1(VAR_12.st_mode))
  FUNC_4(VAR_7, &VAR_12);
 else
  FUNC_11("%s is not a regular file", VAR_7);

out:
 if (VAR_9)
  FUNC_2(VAR_9);
}
