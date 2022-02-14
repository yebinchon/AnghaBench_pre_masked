
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int FUNC_0 (struct strbuf*,char*,int ,int,...) ;
 int FUNC_1 (struct strbuf*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, struct string_list *VAR_1)
{
 if (VAR_1->nr == 1)
  FUNC_1(VAR_0, VAR_1->items[0].string);
 else if (VAR_1->nr == 2)
  FUNC_0(VAR_0, "%s (%d) and %s (%d)",
       VAR_1->items[0].string,
       (int)FUNC_2(&VAR_1->items[0]),
       VAR_1->items[1].string,
       (int)FUNC_2(&VAR_1->items[1]));
 else if (VAR_1->nr)
  FUNC_0(VAR_0, "%s (%d) and others",
       VAR_1->items[0].string,
       (int)FUNC_2(&VAR_1->items[0]));
}
