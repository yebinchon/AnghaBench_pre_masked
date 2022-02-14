
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_6__ {size_t lines_in_hunk; int orig_commit_id; int final_commit_id; int orig_path; scalar_t__ orig_start_line_number; scalar_t__ final_start_line_number; } ;
typedef TYPE_1__ git_blame_hunk ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (scalar_t__,size_t,scalar_t__,int ) ;

__attribute__((used)) static git_blame_hunk *FUNC_3(
  git_vector *VAR_0,
  git_blame_hunk *VAR_1,
  size_t VAR_2,
  bool VAR_3)
{
 size_t VAR_4;
 git_blame_hunk *VAR_5;


 if (VAR_2 <= 0 ||
     VAR_2 >= VAR_1->lines_in_hunk)
 {
  return VAR_1;
 }

 VAR_4 = VAR_1->lines_in_hunk - VAR_2;
 VAR_5 = FUNC_2(VAR_1->final_start_line_number + VAR_2, VAR_4,
   VAR_1->orig_start_line_number + VAR_2, VAR_1->orig_path);

 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->final_commit_id, &VAR_1->final_commit_id);
 FUNC_0(&VAR_5->orig_commit_id, &VAR_1->orig_commit_id);


 VAR_1->lines_in_hunk -= VAR_4;
 FUNC_1(VAR_0, VAR_5, ((void*)0));
 {
  git_blame_hunk *VAR_6 = VAR_3 ? VAR_5 : VAR_1;
  return VAR_6;
 }
}
