
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(wchar_t *VAR_4, const char *VAR_5, size_t VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 const unsigned char *VAR_10 = (const unsigned char*) VAR_5;
 if (!VAR_10 || !VAR_4 || VAR_6 < 1) {
  VAR_3 = VAR_0;
  return -1;
 }

 VAR_6--;
 if (VAR_7 < 0)
  VAR_7 = VAR_2;

 while (VAR_8 < VAR_7) {
  int VAR_11 = VAR_10[VAR_8++] & 0xff;
  if (VAR_7 == VAR_2 && VAR_11 == 0)
   break;

  if (VAR_9 >= VAR_6) {
   VAR_4[VAR_9] = 0;
   VAR_3 = VAR_1;
   return -1;
  }

  if (VAR_11 < 0x80) {

   VAR_4[VAR_9++] = VAR_11;
  } else if (VAR_11 >= 0xc2 && VAR_11 < 0xe0 && VAR_8 < VAR_7 &&
    (VAR_10[VAR_8] & 0xc0) == 0x80) {

   VAR_11 = ((VAR_11 & 0x1f) << 6);
   VAR_11 |= (VAR_10[VAR_8++] & 0x3f);
   VAR_4[VAR_9++] = VAR_11;
  } else if (VAR_11 >= 0xe0 && VAR_11 < 0xf0 && VAR_8 + 1 < VAR_7 &&
    !(VAR_11 == 0xe0 && VAR_10[VAR_8] < 0xa0) &&
    (VAR_10[VAR_8] & 0xc0) == 0x80 &&
    (VAR_10[VAR_8 + 1] & 0xc0) == 0x80) {

   VAR_11 = ((VAR_11 & 0x0f) << 12);
   VAR_11 |= ((VAR_10[VAR_8++] & 0x3f) << 6);
   VAR_11 |= (VAR_10[VAR_8++] & 0x3f);
   VAR_4[VAR_9++] = VAR_11;
  } else if (VAR_11 >= 0xf0 && VAR_11 < 0xf5 && VAR_8 + 2 < VAR_7 &&
    VAR_9 + 1 < VAR_6 &&
    !(VAR_11 == 0xf0 && VAR_10[VAR_8] < 0x90) &&
    !(VAR_11 == 0xf4 && VAR_10[VAR_8] >= 0x90) &&
    (VAR_10[VAR_8] & 0xc0) == 0x80 &&
    (VAR_10[VAR_8 + 1] & 0xc0) == 0x80 &&
    (VAR_10[VAR_8 + 2] & 0xc0) == 0x80) {

   VAR_11 = ((VAR_11 & 0x07) << 18);
   VAR_11 |= ((VAR_10[VAR_8++] & 0x3f) << 12);
   VAR_11 |= ((VAR_10[VAR_8++] & 0x3f) << 6);
   VAR_11 |= (VAR_10[VAR_8++] & 0x3f);
   VAR_11 -= 0x10000;
   VAR_4[VAR_9++] = 0xd800 | (VAR_11 >> 10);
   VAR_4[VAR_9++] = 0xdc00 | (VAR_11 & 0x3ff);
  } else if (VAR_11 >= 0xa0) {

   VAR_4[VAR_9++] = VAR_11;
  } else {

   static const char *VAR_12 = "0123456789abcdef";
   VAR_4[VAR_9++] = VAR_12[VAR_11 >> 4];
   if (VAR_9 < VAR_6)
    VAR_4[VAR_9++] = VAR_12[VAR_11 & 0x0f];
  }
 }
 VAR_4[VAR_9] = 0;
 return VAR_9;
}
