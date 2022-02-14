
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 struct dirent* FUNC_2 (int *) ;
 int FUNC_3 (struct string_list*,char*) ;

__attribute__((used)) static int FUNC_4(struct string_list *VAR_0, const char *VAR_1)
{
 DIR *VAR_2;
 struct dirent *VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return -1;

 while ((VAR_3 = FUNC_2(VAR_2)))
  if (VAR_3->d_name[0] != '.')
   FUNC_3(VAR_0, VAR_3->d_name);

 FUNC_0(VAR_2);
 return 0;
}
