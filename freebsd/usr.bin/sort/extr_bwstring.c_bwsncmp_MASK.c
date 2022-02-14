
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char wchar_t ;
struct TYPE_2__ {unsigned char* cstr; unsigned char* wstr; } ;
struct bwstring {size_t len; TYPE_1__ data; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

int
FUNC_2(const struct bwstring *VAR_1, const struct bwstring *VAR_2,
    size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 VAR_6 = VAR_1->len;
 VAR_7 = VAR_2->len;

 if (VAR_6 <= VAR_3) {
  return ((VAR_7 <= VAR_3) ? 0 : -1);
 } else {
  if (VAR_7 <= VAR_3)
   return (+1);
  else {
   VAR_6 -= VAR_3;
   VAR_7 -= VAR_3;

   VAR_5 = VAR_6;

   if (VAR_7 < VAR_5)
    VAR_5 = VAR_7;

   if (VAR_4 < VAR_5)
    VAR_5 = VAR_4;

   if (VAR_0 == 1) {
    const unsigned char *VAR_9, *VAR_10;

    VAR_9 = VAR_1->data.cstr + VAR_3;
    VAR_10 = VAR_2->data.cstr + VAR_3;

    VAR_8 = FUNC_1(VAR_9, VAR_10, VAR_5);

   } else {
    const wchar_t *VAR_11, *VAR_12;

    VAR_11 = VAR_1->data.wstr + VAR_3;
    VAR_12 = VAR_2->data.wstr + VAR_3;

    VAR_8 = FUNC_1(VAR_11, VAR_12, FUNC_0(VAR_5));
   }
  }
 }

 if (VAR_8 == 0) {
  if (VAR_6 < VAR_5 && VAR_6 < VAR_7)
   VAR_8 = -1;
  else if (VAR_7 < VAR_5 && VAR_7 < VAR_6)
   VAR_8 = +1;
 }

 return (VAR_8);
}
