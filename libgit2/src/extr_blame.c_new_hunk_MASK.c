
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t lines_in_hunk; size_t final_start_line_number; size_t orig_start_line_number; int * orig_path; } ;
typedef TYPE_1__ git_blame_hunk ;


 TYPE_1__* FUNC_0 (int,int) ;
 int * FUNC_1 (char const*) ;

__attribute__((used)) static git_blame_hunk* FUNC_2(
  size_t VAR_0,
  size_t VAR_1,
  size_t VAR_2,
  const char *VAR_3)
{
 git_blame_hunk *VAR_4 = FUNC_0(1, sizeof(git_blame_hunk));
 if (!VAR_4) return ((void*)0);

 VAR_4->lines_in_hunk = VAR_1;
 VAR_4->final_start_line_number = VAR_0;
 VAR_4->orig_start_line_number = VAR_2;
 VAR_4->orig_path = VAR_3 ? FUNC_1(VAR_3) : ((void*)0);

 return VAR_4;
}
