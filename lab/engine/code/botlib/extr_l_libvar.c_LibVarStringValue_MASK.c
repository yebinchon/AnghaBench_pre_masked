
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0(const char *VAR_0)
{
 int VAR_1 = 0;
 float VAR_2 = 0;

 while(*VAR_0)
 {
  if (*VAR_0 < '0' || *VAR_0 > '9')
  {
   if (VAR_1 || *VAR_0 != '.')
   {
    return 0;
   }
   else
   {
    VAR_1 = 10;
    VAR_0++;
   }
  }
  if (VAR_1)
  {
   VAR_2 = VAR_2 + (float) (*VAR_0 - '0') / (float) VAR_1;
   VAR_1 *= 10;
  }
  else
  {
   VAR_2 = VAR_2 * 10.0 + (float) (*VAR_0 - '0');
  }
  VAR_0++;
 }
 return VAR_2;
}
