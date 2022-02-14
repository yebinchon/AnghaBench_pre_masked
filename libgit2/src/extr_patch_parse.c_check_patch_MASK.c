
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hunks; TYPE_5__* delta; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
typedef TYPE_4__ git_patch_parsed ;
typedef int git_oid ;
struct TYPE_10__ {scalar_t__ mode; scalar_t__ id_abbrev; int id; } ;
struct TYPE_9__ {scalar_t__ mode; scalar_t__ id_abbrev; int id; scalar_t__ path; } ;
struct TYPE_12__ {scalar_t__ status; int flags; TYPE_3__ new_file; TYPE_2__ old_file; } ;
typedef TYPE_5__ git_diff_delta ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(git_patch_parsed *VAR_4)
{
 git_diff_delta *VAR_5 = VAR_4->base.delta;

 if (FUNC_0(VAR_4) < 0)
  return -1;

 if (VAR_5->old_file.path &&
     VAR_5->status != VAR_1 &&
     !VAR_5->new_file.mode)
  VAR_5->new_file.mode = VAR_5->old_file.mode;

 if (VAR_5->status == VAR_2 &&
     !(VAR_5->flags & VAR_3) &&
     VAR_5->new_file.mode == VAR_5->old_file.mode &&
     FUNC_1(VAR_4->base.hunks) == 0)
  return FUNC_2("patch with no hunks");

 if (VAR_5->status == VAR_0) {
  FUNC_3(&VAR_5->old_file.id, 0x0, sizeof(git_oid));
  VAR_5->old_file.id_abbrev = 0;
 }

 if (VAR_5->status == VAR_1) {
  FUNC_3(&VAR_5->new_file.id, 0x0, sizeof(git_oid));
  VAR_5->new_file.id_abbrev = 0;
 }

 return 0;
}
