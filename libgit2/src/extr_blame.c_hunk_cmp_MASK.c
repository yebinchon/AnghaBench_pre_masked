
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ final_start_line_number; } ;
typedef TYPE_1__ git_blame_hunk ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 git_blame_hunk *VAR_2 = (git_blame_hunk*)VAR_0,
      *VAR_3 = (git_blame_hunk*)VAR_1;

 if (VAR_2->final_start_line_number > VAR_3->final_start_line_number)
  return 1;
 else if (VAR_2->final_start_line_number < VAR_3->final_start_line_number)
  return -1;
 else
  return 0;
}
