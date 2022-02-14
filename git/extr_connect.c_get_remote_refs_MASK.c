
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct ref {int dummy; } ;
struct packet_reader {scalar_t__ status; int line; } ;
struct argv_array {int argc; int * argv; } ;
struct TYPE_2__ {int string; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct packet_reader*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ,struct ref***) ;
 scalar_t__ FUNC_8 (char*,int) ;

struct ref **FUNC_9(int VAR_2, struct packet_reader *VAR_3,
        struct ref **VAR_4, int VAR_5,
        const struct argv_array *VAR_6,
        const struct string_list *VAR_7)
{
 int VAR_8;
 *VAR_4 = ((void*)0);

 if (FUNC_8("ls-refs", 1))
  FUNC_6(VAR_2, "command=ls-refs\n");

 if (FUNC_8("agent", 0))
  FUNC_6(VAR_2, "agent=%s", FUNC_2());

 if (VAR_7 && VAR_7->nr &&
     FUNC_8("server-option", 1))
  for (VAR_8 = 0; VAR_8 < VAR_7->nr; VAR_8++)
   FUNC_6(VAR_2, "server-option=%s",
      VAR_7->items[VAR_8].string);

 FUNC_3(VAR_2);

 if (!VAR_5)
  FUNC_6(VAR_2, "peel\n");
 FUNC_6(VAR_2, "symrefs\n");
 for (VAR_8 = 0; VAR_6 && VAR_8 < VAR_6->argc; VAR_8++) {
  FUNC_6(VAR_2, "ref-prefix %s\n",
     VAR_6->argv[VAR_8]);
 }
 FUNC_4(VAR_2);


 while (FUNC_5(VAR_3) == VAR_1) {
  if (!FUNC_7(VAR_3->line, &VAR_4))
   FUNC_1(FUNC_0("invalid ls-refs response: %s"), VAR_3->line);
 }

 if (VAR_3->status != VAR_0)
  FUNC_1(FUNC_0("expected flush after ref listing"));

 return VAR_4;
}
