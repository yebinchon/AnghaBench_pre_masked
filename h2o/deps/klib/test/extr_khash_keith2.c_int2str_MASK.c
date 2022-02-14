
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline void FUNC_0(int VAR_0, int VAR_1, char *VAR_2)
{
 const char *VAR_3 = "0123456789abcdef";
 if (VAR_0 == 0) VAR_2[0] = '0', VAR_2[1] = 0;
 else {
  int VAR_4, VAR_5, VAR_6;
  char VAR_7[16];
  for (VAR_4 = 0, VAR_5 = VAR_0 < 0? -VAR_0 : VAR_0; VAR_5 > 0; VAR_5 /= VAR_1) VAR_7[VAR_4++] = VAR_3[VAR_5%VAR_1];
  if (VAR_0 < 0) VAR_7[VAR_4++] = '-';
  for (VAR_5 = VAR_4 - 1, VAR_6 = 0; VAR_5 >= 0; --VAR_5) VAR_2[VAR_6++] = VAR_7[VAR_5];
  VAR_2[VAR_6] = 0;
 }
}
