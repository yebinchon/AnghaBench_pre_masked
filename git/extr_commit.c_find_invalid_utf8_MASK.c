
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 static const unsigned int VAR_3[] = {
  0x7f, 0x7ff, 0xffff, 0x10ffff
 };

 while (VAR_1) {
  unsigned char VAR_4 = *VAR_0++;
  int VAR_5, VAR_6;
  unsigned int VAR_7;
  unsigned int VAR_8, VAR_9;

  VAR_1--;
  VAR_2++;


  if (VAR_4 < 0x80)
   continue;

  VAR_6 = VAR_2-1;





  VAR_5 = 0;
  while (VAR_4 & 0x40) {
   VAR_4 <<= 1;
   VAR_5++;
  }





  if (VAR_5 < 1 || 3 < VAR_5)
   return VAR_6;


  if (VAR_1 < VAR_5)
   return VAR_6;





  VAR_7 = (VAR_4 & 0x7f) >> VAR_5;
  VAR_8 = VAR_3[VAR_5-1] + 1;
  VAR_9 = VAR_3[VAR_5];

  VAR_2 += VAR_5;
  VAR_1 -= VAR_5;


  do {
   VAR_7 <<= 6;
   VAR_7 |= *VAR_0 & 0x3f;
   if ((*VAR_0++ & 0xc0) != 0x80)
    return VAR_6;
  } while (--VAR_5);


  if (VAR_7 < VAR_8 || VAR_7 > VAR_9)
   return VAR_6;

  if ((VAR_7 & 0x1ff800) == 0xd800)
   return VAR_6;

  if ((VAR_7 & 0xfffe) == 0xfffe)
   return VAR_6;

  if (VAR_7 >= 0xfdd0 && VAR_7 <= 0xfdef)
   return VAR_6;
 }
 return -1;
}
