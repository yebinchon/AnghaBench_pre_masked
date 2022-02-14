
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int * update_ref; int dirty; int initialized; } ;
struct notes_cache {TYPE_1__ tree; int validity; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct object_id*,int *,struct object_id*,int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int *,struct object_id*,int *,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct object_id*) ;

int FUNC_4(struct notes_cache *VAR_1)
{
 struct object_id VAR_2, VAR_3;

 if (!VAR_1 || !VAR_1->tree.initialized || !VAR_1->tree.update_ref ||
     !*VAR_1->tree.update_ref)
  return -1;
 if (!VAR_1->tree.dirty)
  return 0;

 if (FUNC_3(&VAR_1->tree, &VAR_2))
  return -1;
 if (FUNC_0(VAR_1->validity, FUNC_1(VAR_1->validity), &VAR_2, ((void*)0),
   &VAR_3, ((void*)0), ((void*)0)) < 0)
  return -1;
 if (FUNC_2("update notes cache", VAR_1->tree.update_ref, &VAR_3,
         ((void*)0), 0, VAR_0) < 0)
  return -1;

 return 0;
}
