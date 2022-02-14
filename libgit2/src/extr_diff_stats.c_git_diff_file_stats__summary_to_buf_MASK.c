
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; int path; } ;
struct TYPE_5__ {scalar_t__ mode; int path; } ;
struct TYPE_7__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_buf ;


 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,...) ;

int FUNC_1(
 git_buf *VAR_0,
 const git_diff_delta *VAR_1)
{
 if (VAR_1->old_file.mode != VAR_1->new_file.mode) {
  if (VAR_1->old_file.mode == 0) {
   FUNC_0(VAR_0, " create mode %06o %s\n",
    VAR_1->new_file.mode, VAR_1->new_file.path);
  }
  else if (VAR_1->new_file.mode == 0) {
   FUNC_0(VAR_0, " delete mode %06o %s\n",
    VAR_1->old_file.mode, VAR_1->old_file.path);
  }
  else {
   FUNC_0(VAR_0, " mode change %06o => %06o %s\n",
    VAR_1->old_file.mode, VAR_1->new_file.mode, VAR_1->new_file.path);
  }
 }

 return 0;
}
