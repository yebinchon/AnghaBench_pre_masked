
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int orig_signature; int final_signature; int boundary; int final_commit_id; int orig_commit_id; int orig_path; int orig_start_line_number; int lines_in_hunk; int final_start_line_number; } ;
typedef TYPE_1__ git_blame_hunk ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static git_blame_hunk* FUNC_3(git_blame_hunk *VAR_0)
{
 git_blame_hunk *VAR_1 = FUNC_2(
   VAR_0->final_start_line_number,
   VAR_0->lines_in_hunk,
   VAR_0->orig_start_line_number,
   VAR_0->orig_path);

 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->orig_commit_id, &VAR_0->orig_commit_id);
 FUNC_0(&VAR_1->final_commit_id, &VAR_0->final_commit_id);
 VAR_1->boundary = VAR_0->boundary;
 FUNC_1(&VAR_1->final_signature, VAR_0->final_signature);
 FUNC_1(&VAR_1->orig_signature, VAR_0->orig_signature);
 return VAR_1;
}
