
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *
FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3, *VAR_4;

 if (VAR_2<=0)
  return VAR_0;
 VAR_3 = VAR_0;
 VAR_4 = (unsigned char *)VAR_1;
 if (VAR_3 < VAR_4) {
  do {
   *VAR_3++ = *VAR_4++;
  } while (--VAR_2);
 } else {
  VAR_3 += VAR_2;
  VAR_4 += VAR_2;
  do {
   *--VAR_3 = *--VAR_4;
  } while (--VAR_2);
 }
 return VAR_0;
}
