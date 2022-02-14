
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {size_t nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,int ,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct string_list *VAR_0,
     struct strbuf *VAR_1)
{
 size_t VAR_2, VAR_3 = VAR_0->nr;

 FUNC_2(VAR_1);

 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++) {
  int VAR_4 = FUNC_4(VAR_0->items[VAR_2 - 1].string,
     VAR_0->items[VAR_2].string);

  if (!VAR_4) {
   FUNC_3(VAR_1,
        FUNC_1("multiple updates for ref '%s' not allowed"),
        VAR_0->items[VAR_2].string);
   return 1;
  } else if (VAR_4 > 0) {
   FUNC_0("ref_update_reject_duplicates() received unsorted list");
  }
 }
 return 0;
}
