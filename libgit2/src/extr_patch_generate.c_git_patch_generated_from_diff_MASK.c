
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int xo ;
struct TYPE_19__ {int output; } ;
typedef TYPE_1__ git_xdiff_output ;
struct TYPE_20__ {int base; } ;
typedef TYPE_2__ git_patch_generated ;
typedef int git_patch ;
struct TYPE_21__ {int flags; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_18__ {int flags; } ;
struct TYPE_22__ {TYPE_11__ opts; int deltas; } ;
typedef TYPE_4__ git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_11__*,TYPE_3__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *,size_t) ;
 int FUNC_6 (TYPE_1__*,TYPE_11__*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_2__**,TYPE_4__*,size_t) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int *) ;

int FUNC_11(
 git_patch **VAR_4, git_diff *VAR_5, size_t VAR_6)
{
 int VAR_7 = 0;
 git_xdiff_output VAR_8;
 git_diff_delta *VAR_9 = ((void*)0);
 git_patch_generated *VAR_10 = ((void*)0);

 if (VAR_4) *VAR_4 = ((void*)0);

 if (FUNC_1(VAR_5, "git_patch_from_diff") < 0)
  return -1;

 VAR_9 = FUNC_5(&VAR_5->deltas, VAR_6);
 if (!VAR_9) {
  FUNC_3(VAR_3, "index out of range for delta in diff");
  return VAR_2;
 }

 if (FUNC_2(&VAR_5->opts, VAR_9))
  return 0;


 if (!VAR_4 &&
  ((VAR_9->flags & VAR_0) != 0 ||
   (VAR_5->opts.flags & VAR_1) != 0))
  return 0;

 if ((VAR_7 = FUNC_8(&VAR_10, VAR_5, VAR_6)) < 0)
  return VAR_7;

 FUNC_7(&VAR_8, 0, sizeof(VAR_8));
 FUNC_0(&VAR_8.output, VAR_10);
 FUNC_6(&VAR_8, &VAR_5->opts);

 VAR_7 = FUNC_10(VAR_10, &VAR_8.output);

 if (!VAR_7)
  VAR_7 = FUNC_9(VAR_10, &VAR_8.output);

 if (!VAR_7) {


 }

 if (VAR_7 || !VAR_4)
  FUNC_4(&VAR_10->base);
 else
  *VAR_4 = &VAR_10->base;

 return VAR_7;
}
