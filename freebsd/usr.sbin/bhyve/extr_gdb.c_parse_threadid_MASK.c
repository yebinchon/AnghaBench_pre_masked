
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const*,char*,int) ;
 int FUNC_1 (int const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const uint8_t *VAR_0, size_t VAR_1)
{

 if (VAR_1 == 1 && *VAR_0 == '0')
  return (0);
 if (VAR_1 == 2 && FUNC_0(VAR_0, "-1", 2) == 0)
  return (-1);
 if (VAR_1 == 0)
  return (-2);
 return (FUNC_1(VAR_0, VAR_1));
}
