
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int final_start_line_number; int lines_in_hunk; } ;
typedef TYPE_1__ git_blame_hunk ;



__attribute__((used)) static bool FUNC_0(git_blame_hunk *VAR_0, size_t VAR_1)
{
 return VAR_1 >= (VAR_0->final_start_line_number + VAR_0->lines_in_hunk - 1);
}
