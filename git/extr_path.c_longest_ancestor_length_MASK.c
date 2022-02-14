
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

int FUNC_3(const char *VAR_0, struct string_list *VAR_1)
{
 int VAR_2, VAR_3 = -1;

 if (!FUNC_0(VAR_0, "/"))
  return -1;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  const char *VAR_4 = VAR_1->items[VAR_2].string;
  int VAR_5 = FUNC_1(VAR_4);

  if (VAR_5 == 1 && VAR_4[0] == '/')
   VAR_5 = 0;
  else if (!FUNC_2(VAR_0, VAR_4, VAR_5) && VAR_0[VAR_5] == '/')
   ;
  else
   continue;

  if (VAR_5 > VAR_3)
   VAR_3 = VAR_5;
 }

 return VAR_3;
}
