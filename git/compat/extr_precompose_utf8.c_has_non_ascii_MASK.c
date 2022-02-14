
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static size_t FUNC_0(const char *VAR_0, size_t VAR_1, size_t *VAR_2)
{
 const uint8_t *VAR_3 = (const uint8_t *)VAR_0;
 size_t VAR_4 = 0;
 size_t VAR_5 = 0;

 if (!VAR_3 || !*VAR_3)
  return 0;

 while (*VAR_3 && VAR_1) {
  if (*VAR_3 & 0x80)
   VAR_5++;
  VAR_4++;
  VAR_3++;
  VAR_1--;
 }
 if (VAR_2)
  *VAR_2 = VAR_4;

 return VAR_5;
}
