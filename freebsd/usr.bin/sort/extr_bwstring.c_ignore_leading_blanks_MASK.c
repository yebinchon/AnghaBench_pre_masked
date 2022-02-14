
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {unsigned char* cstr; int * wstr; } ;
struct bwstring {int len; TYPE_1__ data; } ;


 int FUNC_0 (struct bwstring*) ;
 int VAR_0 ;
 int FUNC_1 (struct bwstring*,size_t) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int ) ;

struct bwstring *
FUNC_4(struct bwstring *VAR_1)
{

 if (VAR_0 == 1) {
  unsigned char *VAR_2, *VAR_3, *VAR_4;

  VAR_4 = VAR_1->data.cstr;
  VAR_2 = VAR_4;
  VAR_3 = VAR_4 + VAR_1->len;

  while (VAR_4 < VAR_3 && FUNC_2(*VAR_4))
   ++VAR_4;

  if (VAR_4 != VAR_2) {
   size_t VAR_5;

   VAR_5 = FUNC_0(VAR_1) - (VAR_4 - VAR_2);

   while (VAR_4 < VAR_3) {
    *VAR_2 = *VAR_4;
    ++VAR_2;
    ++VAR_4;
   }
   FUNC_1(VAR_1, VAR_5);
  }
 } else {
  wchar_t *VAR_6, *VAR_7, *VAR_8;

  VAR_8 = VAR_1->data.wstr;
  VAR_6 = VAR_8;
  VAR_7 = VAR_8 + VAR_1->len;

  while (VAR_8 < VAR_7 && FUNC_3(*VAR_8))
   ++VAR_8;

  if (VAR_8 != VAR_6) {

   size_t VAR_9 = FUNC_0(VAR_1) - (VAR_8 - VAR_6);

   while (VAR_8 < VAR_7) {
    *VAR_6 = *VAR_8;
    ++VAR_6;
    ++VAR_8;
   }
   FUNC_1(VAR_1, VAR_9);

  }
 }
 return (VAR_1);
}
