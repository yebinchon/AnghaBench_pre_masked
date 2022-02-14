
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mode; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char const*,char const*) ;
 char* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*,struct stat*) ;
 int FUNC_8 (char const*,char*,char const*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_0, const char *VAR_1)
{
 struct stat VAR_2;

 if (!FUNC_7(VAR_1, &VAR_2)) {
  const char *VAR_3;

  if (FUNC_1(VAR_2.st_mode))
   VAR_3 = FUNC_5(VAR_1);
  else if (FUNC_0(VAR_2.st_mode))
   VAR_3 = VAR_1;
  else
   FUNC_3(FUNC_2("unable to handle file type %d"), (int)VAR_2.st_mode);

  if (FUNC_6(VAR_3, VAR_0))
   FUNC_4(FUNC_2("unable to move %s to %s"), VAR_3, VAR_0);
 }

 FUNC_8(VAR_1, "gitdir: %s", VAR_0);
}
