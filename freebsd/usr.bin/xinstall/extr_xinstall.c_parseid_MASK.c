
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ id_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, id_t *VAR_2)
{
 char *VAR_3;
 VAR_0 = 0;
 *VAR_2 = (id_t)FUNC_0(VAR_1, &VAR_3, 10);
 if (VAR_0 || *VAR_3 != '\0')
  return (0);
 return (1);
}
