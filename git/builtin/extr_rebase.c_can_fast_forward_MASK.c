
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {TYPE_3__* item; scalar_t__ next; } ;
struct TYPE_4__ {struct object_id oid; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_5__ {struct object_id oid; } ;
struct TYPE_6__ {TYPE_2__ object; } ;


 int FUNC_0 (struct commit_list*) ;
 struct commit_list* FUNC_1 (struct commit*,struct commit*) ;
 scalar_t__ FUNC_2 (struct commit*,struct commit*) ;
 struct commit* FUNC_3 (int ,struct object_id*) ;
 struct object_id VAR_0 ;
 int FUNC_4 (struct object_id*,struct object_id*) ;
 int FUNC_5 (struct object_id*,struct object_id*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct commit *VAR_2, struct commit *VAR_3,
       struct commit *VAR_4,
       struct object_id *VAR_5, struct object_id *VAR_6)
{
 struct commit *VAR_7 = FUNC_3(VAR_1, VAR_5);
 struct commit_list *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (!VAR_7)
  goto done;

 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (!VAR_8 || VAR_8->next) {
  FUNC_4(VAR_6, &VAR_0);
  goto done;
 }

 FUNC_4(VAR_6, &VAR_8->item->object.oid);
 if (!FUNC_5(VAR_6, &VAR_2->object.oid))
  goto done;

 if (VAR_4 && !FUNC_5(&VAR_4->object.oid, VAR_6))
  goto done;

 if (!VAR_3)
  goto done;

 FUNC_0(VAR_8);
 VAR_8 = FUNC_1(VAR_3, VAR_7);
 if (!VAR_8 || VAR_8->next)
  goto done;

 if (!FUNC_5(&VAR_2->object.oid, &VAR_8->item->object.oid))
  goto done;

 VAR_9 = 1;

done:
 FUNC_0(VAR_8);
 return VAR_9 && FUNC_2(VAR_2, VAR_7);
}
