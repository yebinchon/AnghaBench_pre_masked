
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0(float VAR_0, float VAR_1)
{
 float VAR_2;

 if ((int)VAR_1 == 0)
  return 1;
 VAR_2 = FUNC_0(VAR_0, (int)(VAR_1 / 2));
 if (((int)VAR_1 % 2) == 0) {
  return VAR_2 * VAR_2;
 } else {
  if ((int)VAR_1 > 0)
   return VAR_0 * VAR_2 * VAR_2;
  else
   return (VAR_2 * VAR_2) / VAR_0;
 }
}
