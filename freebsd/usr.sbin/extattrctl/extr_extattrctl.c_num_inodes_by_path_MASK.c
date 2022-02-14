
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {long f_files; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct statfs*) ;

long
FUNC_2(char *VAR_0)
{
 struct statfs VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1);
 if (VAR_2) {
  FUNC_0("statfs");
  return (-1);
 }

 return (VAR_1.f_files);
}
