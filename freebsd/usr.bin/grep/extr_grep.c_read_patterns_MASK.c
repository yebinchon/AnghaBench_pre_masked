
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int ssize_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,struct stat*) ;
 int FUNC_9 (char**,size_t*,int *) ;
 int * VAR_0 ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_1)
{
 struct stat VAR_2;
 FILE *VAR_3;
 char *VAR_4;
 size_t VAR_5;
 ssize_t VAR_6;

 if (FUNC_10(VAR_1, "-") == 0)
  VAR_3 = VAR_0;
 else if ((VAR_3 = FUNC_6(VAR_1, "r")) == ((void*)0))
  FUNC_2(2, "%s", VAR_1);
 if ((FUNC_8(FUNC_5(VAR_3), &VAR_2) == -1) || (FUNC_0(VAR_2.st_mode))) {
  FUNC_3(VAR_3);
  return;
 }
 VAR_5 = 0;
 VAR_4 = ((void*)0);
 while ((VAR_6 = FUNC_9(&VAR_4, &VAR_5, VAR_3)) != -1) {
  if (VAR_4[0] == '\0')
   continue;
  FUNC_1(VAR_4, VAR_4[0] == '\n' ? 0 : (size_t)VAR_6);
 }

 FUNC_7(VAR_4);
 if (FUNC_4(VAR_3))
  FUNC_2(2, "%s", VAR_1);
 if (FUNC_10(VAR_1, "-") != 0)
  FUNC_3(VAR_3);
}
