
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {size_t d_namlen; int d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 struct dirent* FUNC_2 (int *) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int ,size_t) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, const char *VAR_1)
{
 DIR *VAR_2;
 struct dirent *VAR_3;
 int VAR_4, VAR_5;
 size_t VAR_6;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return 0;

 VAR_4 = 0;
 VAR_6 = FUNC_3(VAR_0);

 while ((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
  if (VAR_3->d_namlen <= VAR_6)
   continue;

  VAR_5 = FUNC_4(VAR_0, VAR_3->d_name, VAR_6);
  if (VAR_5 > VAR_4)
   VAR_4 = VAR_5;
 }
 FUNC_0(VAR_2);
 return VAR_4;
}
