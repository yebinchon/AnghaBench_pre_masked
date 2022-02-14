
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*,char const*,int ) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 struct dirent* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(const char *VAR_1)
{
 DIR *VAR_2;
 struct dirent *VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2) {
  FUNC_1(VAR_0, "Unable to open directory %s\n", VAR_1);
  return;
 }
 while ((VAR_3 = FUNC_5(VAR_2)) != ((void*)0))
  if (FUNC_6(VAR_3->d_name, "tmp_"))
   FUNC_4(FUNC_2("%s/%s", VAR_1, VAR_3->d_name));
 FUNC_0(VAR_2);
}
