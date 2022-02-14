
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct TYPE_12__ {TYPE_2__ opts; } ;
typedef TYPE_4__ git_status_list ;
struct TYPE_9__ {scalar_t__ mode; } ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_13__ {scalar_t__ status; TYPE_1__ new_file; TYPE_3__ old_file; } ;
typedef TYPE_5__ git_diff_delta ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(
 git_status_list *VAR_4,
 git_diff_delta *VAR_5,
 git_diff_delta *VAR_6)
{
 if (!(VAR_4->opts.flags & VAR_3))
  return 1;


 if (VAR_5) {
  if (VAR_5->status != VAR_0 &&
   VAR_5->old_file.mode != VAR_2)
   return 1;
  if (VAR_5->status != VAR_1 &&
   VAR_5->new_file.mode != VAR_2)
   return 1;
 }
 if (VAR_6) {
  if (VAR_6->status != VAR_0 &&
   VAR_6->old_file.mode != VAR_2)
   return 1;
  if (VAR_6->status != VAR_1 &&
   VAR_6->new_file.mode != VAR_2)
   return 1;
 }


 return 0;
}
