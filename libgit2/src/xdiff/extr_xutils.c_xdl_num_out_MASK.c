
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;



int FUNC_0(char *VAR_0, long VAR_1) {
 char *VAR_2, *VAR_3 = VAR_0;
 char VAR_4[32];

 VAR_2 = VAR_4 + sizeof(VAR_4) - 1;
 *VAR_2 = '\0';
 if (VAR_1 < 0) {
  *--VAR_2 = '-';
  VAR_1 = -VAR_1;
 }
 for (; VAR_1 && VAR_2 > VAR_4; VAR_1 /= 10)
  *--VAR_2 = "0123456789"[VAR_1 % 10];
 if (*VAR_2)
  for (; *VAR_2; VAR_2++, VAR_3++)
   *VAR_3 = *VAR_2;
 else
  *VAR_3++ = '0';
 *VAR_3 = '\0';

 return VAR_3 - VAR_0;
}
