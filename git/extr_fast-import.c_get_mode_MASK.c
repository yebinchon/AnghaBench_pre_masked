
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static const char *FUNC_0(const char *VAR_0, uint16_t *VAR_1)
{
 unsigned char VAR_2;
 uint16_t VAR_3 = 0;

 while ((VAR_2 = *VAR_0++) != ' ') {
  if (VAR_2 < '0' || VAR_2 > '7')
   return ((void*)0);
  VAR_3 = (VAR_3 << 3) + (VAR_2 - '0');
 }
 *VAR_1 = VAR_3;
 return VAR_0;
}
