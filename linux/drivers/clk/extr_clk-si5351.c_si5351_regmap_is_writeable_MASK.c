
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct device *VAR_1, unsigned int VAR_2)
{

 if (VAR_2 >= 4 && VAR_2 <= 8)
  return 0;
 if (VAR_2 >= 10 && VAR_2 <= 14)
  return 0;
 if (VAR_2 >= 173 && VAR_2 <= 176)
  return 0;
 if (VAR_2 >= 178 && VAR_2 <= 182)
  return 0;

 if (VAR_2 == VAR_0)
  return 0;
 return 1;
}
