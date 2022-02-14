
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {unsigned char* cstr; int * wstr; } ;
struct bwstring {int len; TYPE_1__ data; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char const) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int const* FUNC_3 (int const*,scalar_t__) ;
 scalar_t__* VAR_2 ;

int
FUNC_4(const struct bwstring *VAR_3)
{

 if (VAR_0 == 1) {
  const unsigned char *VAR_4, *VAR_5;

  VAR_5 = VAR_3->data.cstr;
  VAR_4 = VAR_5 + VAR_3->len;

  while (FUNC_0(*VAR_5) && VAR_5 < VAR_4)
   ++VAR_5;

  for (int VAR_6 = 11; VAR_6 >= 0; --VAR_6) {
   if (VAR_1[VAR_6] &&
       (VAR_5 == (unsigned char*)FUNC_2((const char*)VAR_5, (char*)(VAR_1[VAR_6]))))
    return (VAR_6);
  }

 } else {
  const wchar_t *VAR_7, *VAR_8;

  VAR_8 = VAR_3->data.wstr;
  VAR_7 = VAR_8 + VAR_3->len;

  while (FUNC_1(*VAR_8) && VAR_8 < VAR_7)
   ++VAR_8;

  for (int VAR_9 = 11; VAR_9 >= 0; --VAR_9) {
   if (VAR_2[VAR_9] && (VAR_8 == FUNC_3(VAR_8, VAR_2[VAR_9])))
    return (VAR_9);
  }
 }

 return (-1);
}
