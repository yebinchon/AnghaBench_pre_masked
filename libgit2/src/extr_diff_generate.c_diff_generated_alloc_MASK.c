
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_11__ {int type; } ;
typedef TYPE_1__ git_iterator ;
typedef int git_diff_options ;
struct TYPE_13__ {int deltas; int pool; int opts; int attrsession; int free_fn; int patch_fn; int new_src; int old_src; int * repo; int type; } ;
struct TYPE_12__ {TYPE_4__ base; } ;
typedef TYPE_2__ git_diff_generated ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int *,int) ;

__attribute__((used)) static git_diff_generated *FUNC_10(
 git_repository *VAR_5,
 git_iterator *VAR_6,
 git_iterator *VAR_7)
{
 git_diff_generated *VAR_8;
 git_diff_options VAR_9 = VAR_0;

 FUNC_1(VAR_5 && VAR_6 && VAR_7);

 if ((VAR_8 = FUNC_2(1, sizeof(git_diff_generated))) == ((void*)0))
  return ((void*)0);

 FUNC_0(&VAR_8->base);
 VAR_8->base.type = VAR_1;
 VAR_8->base.repo = VAR_5;
 VAR_8->base.old_src = VAR_6->type;
 VAR_8->base.new_src = VAR_7->type;
 VAR_8->base.patch_fn = VAR_4;
 VAR_8->base.free_fn = VAR_2;
 FUNC_3(&VAR_8->base.attrsession, VAR_5);
 FUNC_9(&VAR_8->base.opts, &VAR_9, sizeof(git_diff_options));

 FUNC_7(&VAR_8->base.pool, 1);

 if (FUNC_8(&VAR_8->base.deltas, 0, VAR_3) < 0) {
  FUNC_5(&VAR_8->base);
  return ((void*)0);
 }



 FUNC_4(
  &VAR_8->base,
  FUNC_6(VAR_6) ||
  FUNC_6(VAR_7));

 return VAR_8;
}
