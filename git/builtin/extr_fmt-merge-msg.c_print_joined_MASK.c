
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int FUNC_0 (struct strbuf*,char*,char const*,...) ;
 int FUNC_1 (struct strbuf*,char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, const char *VAR_1,
  struct string_list *VAR_2, struct strbuf *VAR_3)
{
 if (VAR_2->nr == 0)
  return;
 if (VAR_2->nr == 1) {
  FUNC_0(VAR_3, "%s%s", VAR_0, VAR_2->items[0].string);
 } else {
  int VAR_4;
  FUNC_1(VAR_3, VAR_1);
  for (VAR_4 = 0; VAR_4 < VAR_2->nr - 1; VAR_4++)
   FUNC_0(VAR_3, "%s%s", VAR_4 > 0 ? ", " : "",
        VAR_2->items[VAR_4].string);
  FUNC_0(VAR_3, " and %s", VAR_2->items[VAR_2->nr - 1].string);
 }
}
