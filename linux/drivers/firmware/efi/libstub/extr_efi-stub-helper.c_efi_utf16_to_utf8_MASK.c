
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u8 *FUNC_0(u8 *VAR_0, const u16 *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 while (VAR_2--) {
  VAR_3 = *VAR_1++;
  if (VAR_2 && VAR_3 >= 0xd800 && VAR_3 <= 0xdbff &&
      *VAR_1 >= 0xdc00 && *VAR_1 <= 0xdfff) {
   VAR_3 = 0x10000 + ((VAR_3 & 0x3ff) << 10) + (*VAR_1 & 0x3ff);
   VAR_1++;
   VAR_2--;
  }
  if (VAR_3 >= 0xd800 && VAR_3 <= 0xdfff)
   VAR_3 = 0xfffd;
  if (VAR_3 < 0x80) {
   *VAR_0++ = VAR_3;
   continue;
  }
  if (VAR_3 < 0x800) {
   *VAR_0++ = 0xc0 + (VAR_3 >> 6);
   goto t1;
  }
  if (VAR_3 < 0x10000) {
   *VAR_0++ = 0xe0 + (VAR_3 >> 12);
   goto t2;
  }
  *VAR_0++ = 0xf0 + (VAR_3 >> 18);
  *VAR_0++ = 0x80 + ((VAR_3 >> 12) & 0x3f);
 t2:
  *VAR_0++ = 0x80 + ((VAR_3 >> 6) & 0x3f);
 t1:
  *VAR_0++ = 0x80 + (VAR_3 & 0x3f);
 }

 return VAR_0;
}
