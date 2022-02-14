
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2,
    uint32_t VAR_3)
{
 char *VAR_4;

 *VAR_2 = VAR_3;
 *VAR_1 = FUNC_0(VAR_0, &VAR_4, 0);
 if (VAR_4 == VAR_0 || *VAR_1 > VAR_3)
  return -1;
 if (*VAR_4 == ':' && VAR_4[1])
  *VAR_2 = FUNC_0(VAR_4 + 1, &VAR_4, 0);
 return *VAR_4 || *VAR_2 > VAR_3 ? -1 : 0;
}
