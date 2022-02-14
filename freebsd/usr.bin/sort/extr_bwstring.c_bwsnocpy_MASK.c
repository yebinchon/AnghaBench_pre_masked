
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* wstr; char* cstr; } ;
struct bwstring {size_t len; TYPE_1__ data; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*,size_t) ;

struct bwstring *
FUNC_2(struct bwstring *VAR_1, const struct bwstring *VAR_2, size_t VAR_3,
    size_t VAR_4)
{

 if (VAR_3 >= VAR_2->len) {
  VAR_1->data.wstr[0] = 0;
  VAR_1->len = 0;
 } else {
  size_t VAR_5 = VAR_2->len - VAR_3;

  if (VAR_5 > VAR_1->len)
   VAR_5 = VAR_1->len;
  if (VAR_5 > VAR_4)
   VAR_5 = VAR_4;
  VAR_1->len = VAR_5;
  if (VAR_0 == 1) {
   FUNC_1(VAR_1->data.cstr, VAR_2->data.cstr + VAR_3,
       (VAR_5));
   VAR_1->data.cstr[VAR_1->len] = '\0';
  } else {
   FUNC_1(VAR_1->data.wstr, VAR_2->data.wstr + VAR_3,
       FUNC_0(VAR_5));
   VAR_1->data.wstr[VAR_1->len] = L'\0';
  }
 }
 return (VAR_1);
}
