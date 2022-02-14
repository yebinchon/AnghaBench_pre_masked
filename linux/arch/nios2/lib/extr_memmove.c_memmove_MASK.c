
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned long VAR_3, VAR_4;

 if (!VAR_2)
  return VAR_0;

 if (VAR_0 < VAR_1) {
  VAR_3 = (unsigned long) VAR_0;
  VAR_4 = (unsigned long) VAR_1;

  if ((VAR_2 < 8) || ((VAR_3 ^ VAR_4) & 3))
   goto restup;

  if (VAR_3 & 1) {
   *(char *)VAR_3++ = *(char *)VAR_4++;
   VAR_2--;
  }
  if (VAR_3 & 2) {
   *(short *)VAR_3 = *(short *)VAR_4;
   VAR_4 += 2;
   VAR_3 += 2;
   VAR_2 -= 2;
  }
  while (VAR_2 > 3) {
   *(long *)VAR_3 = *(long *)VAR_4;
   VAR_4 += 4;
   VAR_3 += 4;
   VAR_2 -= 4;
  }
restup:
  while (VAR_2--)
   *(char *)VAR_3++ = *(char *)VAR_4++;
 } else {
  VAR_3 = (unsigned long) VAR_0 + VAR_2;
  VAR_4 = (unsigned long) VAR_1 + VAR_2;

  if ((VAR_2 < 8) || ((VAR_3 ^ VAR_4) & 3))
   goto restdown;

  if (VAR_3 & 1) {
   VAR_4--;
   VAR_3--;
   VAR_2--;
   *(char *)VAR_3 = *(char *)VAR_4;
  }
  if (VAR_3 & 2) {
   VAR_4 -= 2;
   VAR_3 -= 2;
   VAR_2 -= 2;
   *(short *)VAR_3 = *(short *)VAR_4;
  }
  while (VAR_2 > 3) {
   VAR_4 -= 4;
   VAR_3 -= 4;
   VAR_2 -= 4;
   *(long *)VAR_3 = *(long *)VAR_4;
  }
restdown:
  while (VAR_2--) {
   VAR_4--;
   VAR_3--;
   *(char *)VAR_3 = *(char *)VAR_4;
  }
 }

 return VAR_0;
}
