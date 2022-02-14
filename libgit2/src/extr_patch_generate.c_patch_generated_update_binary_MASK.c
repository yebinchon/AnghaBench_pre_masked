
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* delta; } ;
struct TYPE_12__ {TYPE_3__* file; } ;
struct TYPE_10__ {TYPE_1__* file; } ;
struct TYPE_15__ {TYPE_6__ base; TYPE_4__ nfile; TYPE_2__ ofile; } ;
typedef TYPE_7__ git_patch_generated ;
struct TYPE_13__ {int flags; } ;
struct TYPE_11__ {int flags; scalar_t__ size; } ;
struct TYPE_9__ {int flags; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(git_patch_generated *VAR_5)
{
 if ((VAR_5->base.delta->flags & VAR_0) != 0)
  return;

 if ((VAR_5->ofile.file->flags & VAR_2) != 0 ||
  (VAR_5->nfile.file->flags & VAR_2) != 0)
  VAR_5->base.delta->flags |= VAR_2;

 else if (VAR_5->ofile.file->size > VAR_4 ||
  VAR_5->nfile.file->size > VAR_4)
  VAR_5->base.delta->flags |= VAR_2;

 else if ((VAR_5->ofile.file->flags & VAR_1) != 0 &&
  (VAR_5->nfile.file->flags & VAR_1) != 0)
  VAR_5->base.delta->flags |= VAR_3;
}
