
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct walk_object {int dummy; } ;
typedef int git_repository ;
struct TYPE_7__ {int nr_threads; int progress_cond; int progress_mutex; int cache_mutex; int odb; int zstream; int ctx; int * repo; int object_pool; int walk_objects; int object_ix; } ;
typedef TYPE_1__ git_packbuilder ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;

int FUNC_12(git_packbuilder **VAR_2, git_repository *VAR_3)
{
 git_packbuilder *VAR_4;

 *VAR_2 = ((void*)0);

 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 FUNC_0(VAR_4);

 if (FUNC_6(&VAR_4->object_ix) < 0)
  goto on_error;

 if (FUNC_6(&VAR_4->walk_objects) < 0)
  goto on_error;

 FUNC_8(&VAR_4->object_pool, sizeof(struct walk_object));

 VAR_4->repo = VAR_3;
 VAR_4->nr_threads = 1;

 if (FUNC_4(&VAR_4->ctx) < 0 ||
  FUNC_10(&VAR_4->zstream, VAR_1) < 0 ||
  FUNC_9(&VAR_4->odb, VAR_3) < 0 ||
  FUNC_11(VAR_4) < 0)
  goto on_error;
 *VAR_2 = VAR_4;
 return 0;

on_error:
 FUNC_7(VAR_4);
 return -1;
}
