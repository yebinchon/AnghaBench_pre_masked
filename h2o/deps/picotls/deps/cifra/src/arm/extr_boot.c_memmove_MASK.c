
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 void* FUNC_0 (void*,void const*,size_t) ;

void *FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
  if (VAR_1 > VAR_0)
    return FUNC_0(VAR_0, VAR_1, VAR_2);
  else if (VAR_1 == VAR_0)
    return VAR_0;

  uint8_t *VAR_3 = VAR_0;
  const uint8_t *VAR_4 = VAR_1;

  for (size_t VAR_5 = VAR_2; VAR_5 != 0; VAR_5++)
    VAR_3[VAR_5 - 1] = VAR_4[VAR_5 - 1];
  return VAR_0;
}
