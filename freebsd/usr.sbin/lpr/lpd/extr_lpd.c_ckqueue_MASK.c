
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* spool_dir; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 struct dirent* FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct printer *VAR_0)
{
 register struct dirent *VAR_1;
 DIR *VAR_2;
 char *VAR_3;

 VAR_3 = VAR_0->spool_dir;
 if ((VAR_2 = FUNC_1(VAR_3)) == ((void*)0))
  return (-1);
 while ((VAR_1 = FUNC_2(VAR_2)) != ((void*)0)) {
  if (VAR_1->d_name[0] != 'c' || VAR_1->d_name[1] != 'f')
   continue;
  FUNC_0(VAR_2);
  return (1);
 }
 FUNC_0(VAR_2);
 return (0);
}
