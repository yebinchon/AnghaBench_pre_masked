
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {unsigned char* cstr; int * wstr; } ;
struct bwstring {size_t len; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwstring*,size_t) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

struct bwstring *
FUNC_5(struct bwstring *VAR_1)
{
 size_t VAR_2 = VAR_1->len;

 if (VAR_0 == 1) {
  unsigned char *VAR_3, *VAR_4, *VAR_5;
  unsigned char VAR_6;

  VAR_5 = VAR_1->data.cstr;
  VAR_3 = VAR_5;
  VAR_4 = VAR_5 + VAR_1->len;

  while (VAR_5 < VAR_4) {
   VAR_6 = *VAR_5;
   if (FUNC_1(VAR_6) || FUNC_2(VAR_6)) {
    *VAR_3 = VAR_6;
    ++VAR_3;
    ++VAR_5;
   } else {
    ++VAR_5;
    --VAR_2;
   }
  }
 } else {
  wchar_t *VAR_7, *VAR_8, *VAR_9;
  wchar_t VAR_10;

  VAR_9 = VAR_1->data.wstr;
  VAR_7 = VAR_9;
  VAR_8 = VAR_9 + VAR_1->len;

  while (VAR_9 < VAR_8) {
   VAR_10 = *VAR_9;
   if (FUNC_3(VAR_10) || FUNC_4(VAR_10)) {
    *VAR_7 = VAR_10;
    ++VAR_7;
    ++VAR_9;
   } else {
    ++VAR_9;
    --VAR_2;
   }
  }
 }
 FUNC_0(VAR_1, VAR_2);

 return (VAR_1);
}
