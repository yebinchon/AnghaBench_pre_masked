
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int old_start; int old_lines; int new_start; int new_lines; } ;
typedef TYPE_1__ git_diff_hunk ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const**,int*) ;

__attribute__((used)) static int FUNC_2(git_diff_hunk *VAR_1, const char *VAR_2)
{

 if (*VAR_2 != '@')
  goto fail;
 if (FUNC_1(&VAR_2, &VAR_1->old_start) < 0)
  goto fail;
 if (*VAR_2 == ',') {
  if (FUNC_1(&VAR_2, &VAR_1->old_lines) < 0)
   goto fail;
 } else
  VAR_1->old_lines = 1;
 if (FUNC_1(&VAR_2, &VAR_1->new_start) < 0)
  goto fail;
 if (*VAR_2 == ',') {
  if (FUNC_1(&VAR_2, &VAR_1->new_lines) < 0)
   goto fail;
 } else
  VAR_1->new_lines = 1;
 if (VAR_1->old_start < 0 || VAR_1->new_start < 0)
  goto fail;

 return 0;

fail:
 FUNC_0(VAR_0, "malformed hunk header from xdiff");
 return -1;
}
