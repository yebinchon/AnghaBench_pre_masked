
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_2(char const *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 char *VAR_3;

 if (FUNC_0(VAR_0, "ugen", 4) != 0)
  return (-1);

 *VAR_1 = (uint8_t) FUNC_1(VAR_0 + 4, &VAR_3, 10);
 if (*VAR_3 != '.')
  return (-1);

 *VAR_2 = (uint8_t) FUNC_1(VAR_3 + 1, &VAR_3, 10);
 if (*VAR_3 != '\0')
  return (-1);

 return (0);
}
