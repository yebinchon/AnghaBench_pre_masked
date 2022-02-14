
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {struct object_id oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct object_id*) ;

__attribute__((used)) static void FUNC_4(struct commit *VAR_0, struct commit_list **VAR_1)
{
 struct object_id *VAR_2 = &VAR_0->object.oid;
 struct commit_list *VAR_3;
 for (VAR_3 = *VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->item == VAR_0) {
   FUNC_2(FUNC_0("duplicate parent %s ignored"), FUNC_3(VAR_2));
   return;
  }
  VAR_1 = &VAR_3->next;
 }
 FUNC_1(VAR_0, VAR_1);
}
