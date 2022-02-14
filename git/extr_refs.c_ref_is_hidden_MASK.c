
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct TYPE_3__ {char* string; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*,char const**) ;

int FUNC_1(const char *VAR_1, const char *VAR_2)
{
 int VAR_3;

 if (!VAR_0)
  return 0;
 for (VAR_3 = VAR_0->nr - 1; VAR_3 >= 0; VAR_3--) {
  const char *VAR_4 = VAR_0->items[VAR_3].string;
  const char *VAR_5;
  int VAR_6 = 0;
  const char *VAR_7;

  if (*VAR_4 == '!') {
   VAR_6 = 1;
   VAR_4++;
  }

  if (*VAR_4 == '^') {
   VAR_5 = VAR_2;
   VAR_4++;
  } else {
   VAR_5 = VAR_1;
  }


  if (VAR_5 &&
      FUNC_0(VAR_5, VAR_4, &VAR_7) &&
      (!*VAR_7 || *VAR_7 == '/'))
   return !VAR_6;
 }
 return 0;
}
