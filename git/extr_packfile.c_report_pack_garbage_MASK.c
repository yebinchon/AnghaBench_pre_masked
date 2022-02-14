
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {char* string; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct string_list*,int,int,int) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct string_list*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static void FUNC_6(struct string_list *VAR_1)
{
 int VAR_2, VAR_3 = -1, VAR_4 = 0, VAR_5 = 0;

 if (!&FUNC_0)
  return;

 FUNC_3(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  const char *VAR_6 = VAR_1->items[VAR_2].string;
  if (VAR_3 != -1 &&
      FUNC_4(VAR_6, VAR_1->items[VAR_4].string, VAR_3)) {
   FUNC_1(VAR_1, VAR_5, VAR_4, VAR_2);
   VAR_3 = -1;
   VAR_5 = 0;
  }
  if (VAR_3 == -1) {
   const char *VAR_7 = FUNC_5(VAR_6, '.');
   if (!VAR_7) {
    FUNC_0(VAR_0, VAR_6);
    continue;
   }
   VAR_3 = VAR_7 - VAR_6 + 1;
   VAR_4 = VAR_2;
  }
  if (!FUNC_2(VAR_6 + VAR_3, "pack"))
   VAR_5 |= 1;
  else if (!FUNC_2(VAR_6 + VAR_3, "idx"))
   VAR_5 |= 2;
 }
 FUNC_1(VAR_1, VAR_5, VAR_4, VAR_1->nr);
}
