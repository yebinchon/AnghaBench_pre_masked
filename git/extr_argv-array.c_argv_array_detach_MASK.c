
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {scalar_t__ argv; } ;


 int FUNC_0 (struct argv_array*) ;
 scalar_t__ VAR_0 ;
 char const** FUNC_1 (int,int) ;

const char **FUNC_2(struct argv_array *VAR_1)
{
 if (VAR_1->argv == VAR_0)
  return FUNC_1(1, sizeof(const char *));
 else {
  const char **VAR_2 = VAR_1->argv;
  FUNC_0(VAR_1);
  return VAR_2;
 }
}
