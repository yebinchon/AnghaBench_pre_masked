
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __attribute__((noinline)) uint32_t FUNC_0(void)
{
  uint32_t *VAR_2 = &VAR_1;
  uint32_t VAR_3, *VAR_4 = &VAR_3;
  size_t VAR_5 = VAR_4 - VAR_2;
  for (size_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    if (VAR_2[VAR_6] != VAR_0)
      return VAR_5 - VAR_6 + 4;

  return 0;
}
