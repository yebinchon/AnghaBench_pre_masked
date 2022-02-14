
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

int FUNC_1(unsigned char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 for (; VAR_2; VAR_2--, VAR_1 += 2) {
  unsigned int VAR_3 = (FUNC_0(VAR_1[0]) << 4) | FUNC_0(VAR_1[1]);

  if (VAR_3 & ~0xff)
   return -1;
  *VAR_0++ = VAR_3;
 }
 return 0;
}
