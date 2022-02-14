
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1)
{
 unsigned char VAR_2, VAR_3;
 int VAR_4 = 0;

 do {
  VAR_2 = *VAR_0++;
  VAR_3 = *VAR_1++;
  VAR_4 = VAR_2 - VAR_3;
  if (VAR_4)
   break;
 } while (VAR_2);
 return VAR_4;
}
