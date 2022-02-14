
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int* d_name; } ;


 int VAR_0 ;
 int FUNC_0 (float*,char*) ;
 int FUNC_1 (float*,char*,int) ;

__attribute__((used)) static int
FUNC_2(const struct dirent *VAR_1)
{
 int VAR_2 = VAR_1->d_name[0];

 if ((VAR_2 == 'c' || VAR_2 == 'd' || VAR_2 == 'r' || VAR_2 == 't') &&
     VAR_1->d_name[1] == 'f')
  return 1;
 if (VAR_2 == 'c') {
  if (!FUNC_0(VAR_1->d_name, "core"))
   VAR_0 = 1;
 }
 if (VAR_2 == 'e') {
  if (!FUNC_1(VAR_1->d_name, "errs.", 5))
   return 1;
 }
 return 0;
}
