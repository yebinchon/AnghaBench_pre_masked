
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int FUNC_0 (scalar_t__*,void const*,int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 uint16_t VAR_2;
 uint16_t VAR_3;

 FUNC_0(&VAR_2, VAR_0, sizeof(uint16_t));
 FUNC_0(&VAR_3, VAR_1, sizeof(uint16_t));

 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 == VAR_3)
  return 0;
 return 1;
}
