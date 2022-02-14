
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int len; int buf; } ;
struct rerere_id {scalar_t__ variant; } ;
struct TYPE_2__ {int string; struct rerere_id* util; } ;


 struct rerere_id* VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rerere_id*) ;
 int FUNC_5 (struct strbuf*,char*,int ,scalar_t__,int ,...) ;
 int FUNC_6 (struct strbuf*) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct string_list *VAR_3, int VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_3->nr; VAR_5++) {
  struct strbuf VAR_6 = VAR_1;
  struct rerere_id *VAR_7;

  FUNC_1(VAR_3->items[VAR_5].util != VAR_0);

  VAR_7 = VAR_3->items[VAR_5].util;
  if (!VAR_7)
   continue;
  FUNC_1(VAR_7->variant >= 0);
  if (0 < VAR_7->variant)
   FUNC_5(&VAR_6, "%s.%d\t%s%c",
        FUNC_4(VAR_7), VAR_7->variant,
        VAR_3->items[VAR_5].string, 0);
  else
   FUNC_5(&VAR_6, "%s\t%s%c",
        FUNC_4(VAR_7),
        VAR_3->items[VAR_5].string, 0);

  if (FUNC_7(VAR_4, VAR_6.buf, VAR_6.len) < 0)
   FUNC_3(FUNC_0("unable to write rerere record"));

  FUNC_6(&VAR_6);
 }
 if (FUNC_2(&VAR_2) != 0)
  FUNC_3(FUNC_0("unable to write rerere record"));
 return 0;
}
