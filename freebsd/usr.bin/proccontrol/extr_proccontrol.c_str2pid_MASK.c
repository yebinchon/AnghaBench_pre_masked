
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (char const*,char**,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static pid_t
FUNC_2(const char *VAR_0)
{
 pid_t VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_0(VAR_0, &VAR_2, 0);
 if (*VAR_2 != '\0') {
  FUNC_1("non-numeric pid");
  return (-1);
 }
 return (VAR_1);
}
