
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char const*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, struct string_list *VAR_1)
{
 DIR *VAR_2;
 struct dirent *VAR_3;

 if (!(VAR_2 = FUNC_3(VAR_0)))
  return FUNC_1("Could not open directory %s", VAR_0);

 while ((VAR_3 = FUNC_4(VAR_2)))
  if (!FUNC_2(VAR_3->d_name))
   FUNC_5(VAR_1, VAR_3->d_name);

 FUNC_0(VAR_2);
 return 0;
}
