
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct notes_tree {int ref; int initialized; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_2 (char const*,size_t,struct object_id*,struct commit_list*,struct object_id*,int *,int *) ;
 int FUNC_3 (char*,...) ;
 struct commit* FUNC_4 (struct repository*,struct object_id*) ;
 scalar_t__ FUNC_5 (struct commit*) ;
 int FUNC_6 (int ,struct object_id*) ;
 scalar_t__ FUNC_7 (struct notes_tree*,struct object_id*) ;

void FUNC_8(struct repository *VAR_0,
    struct notes_tree *VAR_1,
    struct commit_list *VAR_2,
    const char *VAR_3, size_t VAR_4,
    struct object_id *VAR_5)
{
 struct object_id VAR_6;

 FUNC_0(VAR_1->initialized);

 if (FUNC_7(VAR_1, &VAR_6))
  FUNC_3("Failed to write notes tree to database");

 if (!VAR_2) {

  struct object_id VAR_7;
  if (!FUNC_6(VAR_1->ref, &VAR_7)) {
   struct commit *VAR_8 = FUNC_4(VAR_0, &VAR_7);
   if (FUNC_5(VAR_8))
    FUNC_3("Failed to find/parse commit %s", VAR_1->ref);
   FUNC_1(VAR_8, &VAR_2);
  }

 }

 if (FUNC_2(VAR_3, VAR_4, &VAR_6, VAR_2, VAR_5, ((void*)0),
   ((void*)0)))
  FUNC_3("Failed to commit notes tree to database");
}
