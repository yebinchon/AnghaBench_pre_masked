
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 unsigned char VAR_3, VAR_4;

 while (VAR_2) {
  VAR_3 = *VAR_0++;
  VAR_4 = *VAR_1++;
  if (VAR_3 != VAR_4)
   return VAR_3 < VAR_4 ? -1 : 1;
  if (!VAR_3)
   break;
  VAR_2--;
 }
 return 0;
}
