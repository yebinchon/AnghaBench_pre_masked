
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;
 unsigned char *VAR_4 = (unsigned char *)VAR_0, *VAR_5 = (unsigned char *)VAR_1;

 for (VAR_3 = VAR_2 >> 3; VAR_3 > 0; VAR_3--) {
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
 }

 if (VAR_2 & 1 << 2) {
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
 }

 if (VAR_2 & 1 << 1) {
  *VAR_4++ = *VAR_5++;
  *VAR_4++ = *VAR_5++;
 }

 if (VAR_2 & 1)
  *VAR_4++ = *VAR_5++;

 return VAR_0;
}
