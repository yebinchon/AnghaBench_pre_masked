
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char const*) ;
 struct dirent* FUNC_3 (int *) ;

int FUNC_4(const char *VAR_0)
{
 DIR *VAR_1 = FUNC_2(VAR_0);
 struct dirent *VAR_2;
 int VAR_3 = 1;

 if (!VAR_1)
  return 0;

 while ((VAR_2 = FUNC_3(VAR_1)) != ((void*)0))
  if (!FUNC_1(VAR_2->d_name)) {
   VAR_3 = 0;
   break;
  }

 FUNC_0(VAR_1);
 return VAR_3;
}
