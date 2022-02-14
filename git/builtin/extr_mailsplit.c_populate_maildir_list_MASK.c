
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (struct string_list*,char*) ;
 char* FUNC_6 (char*,char const*,char*) ;

__attribute__((used)) static int FUNC_7(struct string_list *VAR_2, const char *VAR_3)
{
 DIR *VAR_4;
 struct dirent *VAR_5;
 char *VAR_6 = ((void*)0);
 char *VAR_7[] = { "cur", "new", ((void*)0) };
 char **VAR_8;
 int VAR_9 = -1;

 for (VAR_8 = VAR_7; *VAR_8; ++VAR_8) {
  FUNC_2(VAR_6);
  VAR_6 = FUNC_6("%s/%s", VAR_3, *VAR_8);
  if ((VAR_4 = FUNC_3(VAR_6)) == ((void*)0)) {
   if (VAR_1 == VAR_0)
    continue;
   FUNC_1("cannot opendir %s", VAR_6);
   goto out;
  }

  while ((VAR_5 = FUNC_4(VAR_4)) != ((void*)0)) {
   if (VAR_5->d_name[0] == '.')
    continue;
   FUNC_2(VAR_6);
   VAR_6 = FUNC_6("%s/%s", *VAR_8, VAR_5->d_name);
   FUNC_5(VAR_2, VAR_6);
  }

  FUNC_0(VAR_4);
 }

 VAR_9 = 0;

out:
 FUNC_2(VAR_6);
 return VAR_9;
}
