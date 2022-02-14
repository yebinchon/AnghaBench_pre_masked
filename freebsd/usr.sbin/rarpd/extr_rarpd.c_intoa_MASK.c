
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int in_addr_t ;



__attribute__((used)) static char *
FUNC_0(in_addr_t VAR_0)
{
 char *VAR_1;
 u_int VAR_2;
 int VAR_3;
 static char VAR_4[sizeof(".xxx.xxx.xxx.xxx")];

 VAR_1 = &VAR_4[sizeof VAR_4];
 *--VAR_1 = '\0';

 VAR_3 = 4;
 do {
  VAR_2 = VAR_0 & 0xff;
  *--VAR_1 = VAR_2 % 10 + '0';
  VAR_2 /= 10;
  if (VAR_2 > 0) {
   *--VAR_1 = VAR_2 % 10 + '0';
   VAR_2 /= 10;
   if (VAR_2 > 0)
    *--VAR_1 = VAR_2 + '0';
  }
  *--VAR_1 = '.';
  VAR_0 >>= 8;
 } while (--VAR_3 > 0);

 return VAR_1 + 1;
}
