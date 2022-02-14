
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_19__ {scalar_t__ status; } ;
struct TYPE_22__ {int contains_data; } ;
struct TYPE_21__ {int flags; } ;
struct TYPE_23__ {TYPE_7__ binary; TYPE_6__ diff_opts; TYPE_4__* delta; } ;
struct TYPE_20__ {int flags; int opts_flags; TYPE_3__* file; } ;
struct TYPE_17__ {int flags; TYPE_1__* file; } ;
struct TYPE_15__ {TYPE_8__ base; TYPE_5__ ofile; TYPE_2__ nfile; } ;
struct TYPE_24__ {TYPE_4__ delta; TYPE_10__ patch; } ;
typedef TYPE_9__ patch_generated_with_delta ;
typedef int git_xdiff_output ;
typedef int git_patch_generated_output ;
typedef TYPE_10__ git_patch_generated ;
struct TYPE_18__ {int id; } ;
struct TYPE_16__ {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_10__*,int *) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_10__*,int *) ;

__attribute__((used)) static int FUNC_4(patch_generated_with_delta *VAR_8, git_xdiff_output *VAR_9)
{
 int VAR_10 = 0;
 git_patch_generated *VAR_11 = &VAR_8->patch;
 bool VAR_12 = ((VAR_11->ofile.flags & VAR_5) == 0);
 bool VAR_13 = ((VAR_11->nfile.flags & VAR_5) == 0);

 VAR_8->delta.status = VAR_13 ?
  (VAR_12 ? VAR_2 : VAR_0) :
  (VAR_12 ? VAR_1 : VAR_4);

 if (FUNC_0(&VAR_11->nfile.file->id, &VAR_11->ofile.file->id))
  VAR_8->delta.status = VAR_3;

 VAR_11->base.delta = &VAR_8->delta;

 FUNC_2(VAR_11);

 if (VAR_8->delta.status == VAR_3 &&
  !(VAR_11->ofile.opts_flags & VAR_6)) {





  if (VAR_11->base.diff_opts.flags & VAR_7)
   VAR_11->base.binary.contains_data = 1;

  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_11, (git_patch_generated_output *)VAR_9);

 if (!VAR_10)
  VAR_10 = FUNC_1(VAR_11, (git_patch_generated_output *)VAR_9);

 return VAR_10;
}
