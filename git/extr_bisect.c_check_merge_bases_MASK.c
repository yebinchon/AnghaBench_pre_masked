
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {int dummy; } ;
struct TYPE_3__ {struct object_id oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (struct object_id const*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct commit_list*) ;
 struct commit_list* FUNC_4 (struct commit*,int,struct commit**) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (struct object_id const*) ;
 scalar_t__ FUNC_7 (int *,struct object_id const*) ;
 scalar_t__ FUNC_8 (struct object_id const*,int ) ;
 int FUNC_9 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_10(int VAR_3, struct commit **VAR_4, int VAR_5)
{
 struct commit_list *VAR_6;

 VAR_6 = FUNC_4(VAR_4[0], VAR_3 - 1, VAR_4 + 1);

 for (; VAR_6; VAR_6 = VAR_6->next) {
  const struct object_id *VAR_7 = &VAR_6->item->object.oid;
  if (FUNC_8(VAR_7, VAR_0)) {
   FUNC_5();
  } else if (0 <= FUNC_7(&VAR_1, VAR_7)) {
   continue;
  } else if (0 <= FUNC_7(&VAR_2, VAR_7)) {
   FUNC_6(VAR_7);
  } else {
   FUNC_9(FUNC_0("Bisecting: a merge base must be tested\n"));
   FUNC_2(FUNC_1(VAR_7, VAR_5));
  }
 }

 FUNC_3(VAR_6);
}
