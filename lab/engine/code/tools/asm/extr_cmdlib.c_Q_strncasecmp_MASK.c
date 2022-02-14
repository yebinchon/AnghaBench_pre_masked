
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (const char *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 do
 {
  VAR_3 = *VAR_0++;
  VAR_4 = *VAR_1++;

  if (!VAR_2--)
   return 0;

  if (VAR_3 != VAR_4)
  {
   if (VAR_3 >= 'a' && VAR_3 <= 'z')
    VAR_3 -= ('a' - 'A');
   if (VAR_4 >= 'a' && VAR_4 <= 'z')
    VAR_4 -= ('a' - 'A');
   if (VAR_3 != VAR_4)
    return -1;
  }
 } while (VAR_3);

 return 0;
}
