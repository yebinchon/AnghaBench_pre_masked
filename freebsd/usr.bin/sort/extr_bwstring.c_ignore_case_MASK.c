
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {unsigned char* cstr; int * wstr; } ;
struct bwstring {int len; TYPE_1__ data; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (unsigned char) ;
 int FUNC_1 (int ) ;

struct bwstring *
FUNC_2(struct bwstring *VAR_1)
{

 if (VAR_0 == 1) {
  unsigned char *VAR_2, *VAR_3;

  VAR_3 = VAR_1->data.cstr;
  VAR_2 = VAR_3 + VAR_1->len;

  while (VAR_3 < VAR_2) {
   *VAR_3 = FUNC_0(*VAR_3);
   ++VAR_3;
  }
 } else {
  wchar_t *VAR_4, *VAR_5;

  VAR_5 = VAR_1->data.wstr;
  VAR_4 = VAR_5 + VAR_1->len;

  while (VAR_5 < VAR_4) {
   *VAR_5 = FUNC_1(*VAR_5);
   ++VAR_5;
  }
 }
 return (VAR_1);
}
