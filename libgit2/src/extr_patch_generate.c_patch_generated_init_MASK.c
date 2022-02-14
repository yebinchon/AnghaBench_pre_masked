
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int delta; int diff_opts; int repo; } ;
struct TYPE_10__ {size_t delta_index; TYPE_1__ base; int nfile; int ofile; TYPE_3__* diff; } ;
typedef TYPE_2__ git_patch_generated ;
struct TYPE_11__ {int opts; int deltas; int repo; } ;
typedef TYPE_3__ git_diff ;


 int FUNC_0 (int *,TYPE_3__*,int ,int) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(
 git_patch_generated *VAR_0, git_diff *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->diff = VAR_1;
 VAR_0->base.repo = VAR_1->repo;
 VAR_0->base.delta = FUNC_1(&VAR_1->deltas, VAR_2);
 VAR_0->delta_index = VAR_2;

 if ((VAR_3 = FUNC_4(
   &VAR_0->base.diff_opts, &VAR_1->opts)) < 0 ||
  (VAR_3 = FUNC_0(
   &VAR_0->ofile, VAR_1, VAR_0->base.delta, 1)) < 0 ||
  (VAR_3 = FUNC_0(
   &VAR_0->nfile, VAR_1, VAR_0->base.delta, 0)) < 0)
  return VAR_3;

 FUNC_3(VAR_0);

 return 0;
}
