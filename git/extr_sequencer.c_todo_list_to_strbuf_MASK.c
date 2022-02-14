
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct todo_list {int nr; struct todo_item* items; } ;
struct todo_item {scalar_t__ command; int flags; int arg_len; TYPE_2__* commit; } ;
struct strbuf {int dummy; } ;
struct repository {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 char FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct strbuf*,char*,char const*,...) ;
 int FUNC_6 (struct strbuf*,char*) ;
 int FUNC_7 (struct todo_list*,struct todo_item*) ;

__attribute__((used)) static void FUNC_8(struct repository *VAR_5, struct todo_list *VAR_6,
    struct strbuf *VAR_7, int VAR_8, unsigned VAR_9)
{
 struct todo_item *VAR_10;
 int VAR_11, VAR_12 = VAR_6->nr;

 if (VAR_8 > 0 && VAR_8 < VAR_12)
  VAR_12 = VAR_8;

 for (VAR_10 = VAR_6->items, VAR_11 = 0; VAR_11 < VAR_12; VAR_11++, VAR_10++) {

  if (VAR_10->command >= VAR_0) {
   FUNC_5(VAR_7, "%.*s\n", VAR_10->arg_len,
        FUNC_7(VAR_6, VAR_10));
   continue;
  }


  if (VAR_9 & VAR_2)
   FUNC_4(VAR_7, FUNC_0(VAR_10->command));
  else
   FUNC_6(VAR_7, FUNC_1(VAR_10->command));


  if (VAR_10->commit) {
   const char *VAR_13 = VAR_9 & VAR_3 ?
       FUNC_3(VAR_10->commit) :
       FUNC_2(&VAR_10->commit->object.oid);

   if (VAR_10->command == VAR_4) {
    if (VAR_10->flags & VAR_1)
     FUNC_6(VAR_7, " -c");
    else
     FUNC_6(VAR_7, " -C");
   }

   FUNC_5(VAR_7, " %s", VAR_13);
  }


  if (!VAR_10->arg_len)
   FUNC_4(VAR_7, '\n');
  else
   FUNC_5(VAR_7, " %.*s\n", VAR_10->arg_len,
        FUNC_7(VAR_6, VAR_10));
 }
}
