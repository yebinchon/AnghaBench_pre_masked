
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {int data_cb; int hunk_cb; int binary_cb; } ;
typedef TYPE_3__ git_patch_generated_output ;
struct TYPE_14__ {TYPE_1__* delta; int diff_opts; } ;
struct TYPE_12__ {int opts_flags; int flags; TYPE_6__* file; } ;
struct TYPE_16__ {int flags; TYPE_2__ base; TYPE_11__ nfile; TYPE_11__ ofile; } ;
typedef TYPE_4__ git_patch_generated ;
struct TYPE_17__ {int flags; scalar_t__ mode; int id; } ;
struct TYPE_13__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_11__*,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_5(git_patch_generated *VAR_8, git_patch_generated_output *VAR_9)
{
 int VAR_10 = 0;
 bool VAR_11;

 if ((VAR_8->flags & VAR_7) != 0)
  return 0;




 if ((VAR_8->ofile.opts_flags & VAR_4) != 0 &&
  VAR_9 && !VAR_9->binary_cb && !VAR_9->hunk_cb && !VAR_9->data_cb)
  return 0;

 VAR_11 =
  (((VAR_8->ofile.flags & VAR_3) != 0 ||
    (VAR_8->ofile.file->flags & VAR_2) != 0) &&
   ((VAR_8->nfile.flags & VAR_3) != 0 ||
    (VAR_8->nfile.file->flags & VAR_2) != 0));

 if ((VAR_10 = FUNC_0(
   &VAR_8->ofile, &VAR_8->base.diff_opts)) < 0 ||
  FUNC_4(VAR_8, VAR_8->ofile.file))
  goto cleanup;
 if ((VAR_10 = FUNC_0(
   &VAR_8->nfile, &VAR_8->base.diff_opts)) < 0 ||
  FUNC_4(VAR_8, VAR_8->nfile.file))
  goto cleanup;




 if (VAR_11 &&
  VAR_8->ofile.file->mode == VAR_8->nfile.file->mode &&
  VAR_8->ofile.file->mode != VAR_5 &&
  FUNC_1(&VAR_8->ofile.file->id, &VAR_8->nfile.file->id) &&
  VAR_8->base.delta->status == VAR_0)
  VAR_8->base.delta->status = VAR_1;

cleanup:
 FUNC_3(VAR_8);

 if (!VAR_10) {
  if (FUNC_2(VAR_8))
   VAR_8->flags |= VAR_6;

  VAR_8->flags |= VAR_7;
 }

 return VAR_10;
}
