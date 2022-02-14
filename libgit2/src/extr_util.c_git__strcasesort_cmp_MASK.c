
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (char const) ;

int FUNC_1(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;

 while (*VAR_0 && *VAR_1) {
  if (*VAR_0 != *VAR_1) {
   if (FUNC_0(*VAR_0) != FUNC_0(*VAR_1))
    break;

   if (!VAR_2)
    VAR_2 = (int)(*(const uint8_t *)VAR_0) - (int)(*(const uint8_t *)VAR_1);
  }

  ++VAR_0, ++VAR_1;
 }

 if (*VAR_0 || *VAR_1)
  return (unsigned char)FUNC_0(*VAR_0) - (unsigned char)FUNC_0(*VAR_1);

 return VAR_2;
}
