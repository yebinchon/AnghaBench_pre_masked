
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {size_t len; } ;
struct TYPE_21__ {TYPE_8__* file; TYPE_5__ map; } ;
struct TYPE_16__ {size_t len; } ;
struct TYPE_19__ {TYPE_6__* file; TYPE_4__ map; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_15__ {TYPE_2__ diff_opts; TYPE_1__* delta; } ;
struct TYPE_12__ {TYPE_9__ nfile; TYPE_7__ ofile; TYPE_3__ base; } ;
typedef TYPE_10__ git_patch_generated ;
struct TYPE_20__ {int id; scalar_t__ size; } ;
struct TYPE_18__ {int id; scalar_t__ size; } ;
struct TYPE_13__ {scalar_t__ status; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static bool FUNC_1(git_patch_generated *VAR_3)
{
 size_t VAR_4, VAR_5;

 if (VAR_3->base.delta->status == VAR_0)
  return 0;





 if ((VAR_3->base.delta->flags & VAR_1) != 0 &&
  (VAR_3->base.diff_opts.flags & VAR_2) == 0) {
  VAR_4 = (size_t)VAR_3->ofile.file->size;
  VAR_5 = (size_t)VAR_3->nfile.file->size;
 } else {
  VAR_4 = VAR_3->ofile.map.len;
  VAR_5 = VAR_3->nfile.map.len;
 }


 if (!VAR_4 && !VAR_5)
  return 0;


 return (VAR_4 != VAR_5 ||
  !FUNC_0(&VAR_3->ofile.file->id, &VAR_3->nfile.file->id));
}
