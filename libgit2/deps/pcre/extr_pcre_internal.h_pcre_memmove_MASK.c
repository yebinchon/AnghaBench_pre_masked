
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void *
FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
size_t VAR_3;
unsigned char *VAR_4 = (unsigned char *)VAR_0;
const unsigned char *VAR_5 = (const unsigned char *)VAR_1;
if (VAR_4 > VAR_5)
  {
  VAR_4 += VAR_2;
  VAR_5 += VAR_2;
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) *(--VAR_4) = *(--VAR_5);
  return (void *)VAR_4;
  }
else
  {
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) *VAR_4++ = *VAR_5++;
  return (void *)(VAR_4 - VAR_2);
  }
}
