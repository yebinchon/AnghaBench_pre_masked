
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {int st_mode; } ;
typedef scalar_t__ gid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,char*,int *,int *,int *,int ) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int VAR_6 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static void
FUNC_10(char *VAR_9)
{
 char *VAR_10;
 struct stat VAR_11;
 int VAR_12, VAR_13;

 for (VAR_10 = VAR_9;; ++VAR_10)
  if (!*VAR_10 || (VAR_10 != VAR_9 && *VAR_10 == '/')) {
   VAR_13 = 0;
   VAR_12 = *VAR_10;
   *VAR_10 = '\0';
again:
   if (FUNC_8(VAR_9, &VAR_11) < 0) {
    if (VAR_4 != VAR_1 || VAR_13)
     FUNC_3(VAR_2, "stat %s", VAR_9);
    if (FUNC_6(VAR_9, 0755) < 0) {
     VAR_13 = 1;
     if (VAR_4 == VAR_0)
      goto again;
     FUNC_3(VAR_2, "mkdir %s", VAR_9);
    }
    if (VAR_8)
     (void)FUNC_7("install: mkdir %s\n",
         VAR_9);
   } else if (!FUNC_0(VAR_11.st_mode))
    FUNC_4(VAR_2, "%s exists but is not a directory", VAR_9);
   if (!(*VAR_10 = VAR_12))
    break;
   }

 if (!VAR_3) {
  if ((VAR_5 != (gid_t)-1 || VAR_7 != (uid_t)-1) &&
      FUNC_2(VAR_9, VAR_7, VAR_5))
   FUNC_9("chown %u:%u %s", VAR_7, VAR_5, VAR_9);

  if (FUNC_1(VAR_9, VAR_6))
   FUNC_9("chmod %o %s", VAR_6, VAR_9);
 }
 FUNC_5(VAR_9, "dir", ((void*)0), ((void*)0), ((void*)0), 0);
}
