
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zstream; int ctx; int object_pool; scalar_t__ walk_objects; struct TYPE_4__* object_list; scalar_t__ object_ix; scalar_t__ odb; int progress_cond; int progress_mutex; int cache_mutex; } ;
typedef TYPE_1__ git_packbuilder ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(git_packbuilder *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_0->odb)
  FUNC_4(VAR_0->odb);

 if (VAR_0->object_ix)
  FUNC_5(VAR_0->object_ix);

 if (VAR_0->object_list)
  FUNC_0(VAR_0->object_list);

 FUNC_5(VAR_0->walk_objects);
 FUNC_6(&VAR_0->object_pool);

 FUNC_2(&VAR_0->ctx);
 FUNC_7(&VAR_0->zstream);

 FUNC_0(VAR_0);
}
