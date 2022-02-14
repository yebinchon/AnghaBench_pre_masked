
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char**,char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,char*,int ,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char const*,struct stat*,int ) ;
 int FUNC_7 (int,char*,int ) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char const*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_12(int VAR_6, const char *VAR_7)
{
 struct stat VAR_8;
 char *VAR_9, *VAR_10;

 if (*VAR_7 != '/')
  FUNC_3(VAR_1, "invalid base directory for home '%s'", VAR_7);

 VAR_7++;

 if (FUNC_6(VAR_6, VAR_7, &VAR_8, 0) != -1) {
  if (FUNC_0(VAR_8.st_mode))
   return;
  FUNC_3(VAR_2, "root home `/%s' is not a directory", VAR_7);
 }

 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9 == ((void*)0))
  FUNC_3(VAR_3, "out of memory");

 VAR_10 = FUNC_10(VAR_9, '/');
 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_9);
  return;
 }
 VAR_10[0] = '\0';







 if (FUNC_8(VAR_9, '/') == ((void*)0)) {
  FUNC_1(&VAR_10, "usr/%s", VAR_9);
  if (VAR_10 == ((void*)0))
   FUNC_3(VAR_3, "out of memory");
  if (FUNC_7(VAR_6, VAR_10, VAR_4) != -1 || VAR_5 == VAR_0) {
   FUNC_4(VAR_6, VAR_10, 0, 0, 0);
   FUNC_11(VAR_10, VAR_6, VAR_9);
  }
  FUNC_5(VAR_10);
 }
 VAR_10 = VAR_9;
 if (FUNC_6(VAR_6, VAR_9, &VAR_8, 0) == -1) {
  while ((VAR_10 = FUNC_8(VAR_10 + 1, '/')) != ((void*)0)) {
   *VAR_10 = '\0';
   if (FUNC_6(VAR_6, VAR_9, &VAR_8, 0) == -1) {
    if (FUNC_7(VAR_6, VAR_9, VAR_4) == -1)
     FUNC_2(VAR_2, "'%s' (root home parent) is not a directory", VAR_9);
   }
   *VAR_10 = '/';
  }
 }
 if (FUNC_6(VAR_6, VAR_9, &VAR_8, 0) == -1) {
  if (FUNC_7(VAR_6, VAR_9, VAR_4) == -1)
   FUNC_2(VAR_2, "'%s' (root home parent) is not a directory", VAR_9);
  FUNC_4(VAR_6, VAR_9, 0, 0, 0);
 }

 FUNC_5(VAR_9);
}
