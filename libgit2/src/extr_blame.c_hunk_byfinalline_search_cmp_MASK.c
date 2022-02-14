
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lines_in_hunk; size_t final_start_line_number; } ;
typedef TYPE_1__ git_blame_hunk ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 git_blame_hunk *VAR_2 = (git_blame_hunk*)VAR_1;

 size_t VAR_3 = *(size_t*)VAR_0;
 size_t VAR_4 = VAR_2->lines_in_hunk;
 size_t VAR_5 = VAR_2->final_start_line_number;

 if (VAR_3 < VAR_5)
  return -1;
 if (VAR_3 >= VAR_5 + VAR_4)
  return 1;
 return 0;
}
