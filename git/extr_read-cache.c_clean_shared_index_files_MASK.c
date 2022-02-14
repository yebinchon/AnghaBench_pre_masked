
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef int DIR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 char* FUNC_4 (char*,int ) ;
 int * FUNC_5 (int ) ;
 struct dirent* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (int ,char*,char const**) ;
 int FUNC_9 (char const*,char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (int ,char const*) ;

__attribute__((used)) static int FUNC_12(const char *VAR_0)
{
 struct dirent *VAR_1;
 DIR *VAR_2 = FUNC_5(FUNC_3());

 if (!VAR_2)
  return FUNC_2(FUNC_0("unable to open git dir: %s"), FUNC_3());

 while ((VAR_1 = FUNC_6(VAR_2)) != ((void*)0)) {
  const char *VAR_3;
  const char *VAR_4;
  if (!FUNC_8(VAR_1->d_name, "sharedindex.", &VAR_3))
   continue;
  if (!FUNC_9(VAR_3, VAR_0))
   continue;
  VAR_4 = FUNC_4("%s", VAR_1->d_name);
  if (FUNC_7(VAR_4) > 0 &&
      FUNC_10(VAR_4))
   FUNC_11(FUNC_0("unable to unlink: %s"), VAR_4);
 }
 FUNC_1(VAR_2);

 return 0;
}
