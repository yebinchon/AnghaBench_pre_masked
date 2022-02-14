
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int boundary; int final_signature; int orig_signature; int orig_commit_id; int final_commit_id; } ;
typedef TYPE_2__ git_blame_hunk ;
struct TYPE_11__ {scalar_t__ is_boundary; TYPE_1__* suspect; scalar_t__ s_lno; int num_lines; scalar_t__ lno; } ;
typedef TYPE_3__ git_blame__entry ;
struct TYPE_12__ {int mailmap; } ;
typedef TYPE_4__ git_blame ;
struct TYPE_9__ {int commit; int path; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_2__* FUNC_4 (scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static git_blame_hunk* FUNC_5(git_blame__entry *VAR_0, git_blame *VAR_1)
{
 git_blame_hunk *VAR_2 = FUNC_4(
   VAR_0->lno+1, VAR_0->num_lines, VAR_0->s_lno+1, VAR_0->suspect->path);

 if (!VAR_2)
  return ((void*)0);

 FUNC_2(&VAR_2->final_commit_id, FUNC_1(VAR_0->suspect->commit));
 FUNC_2(&VAR_2->orig_commit_id, FUNC_1(VAR_0->suspect->commit));
 FUNC_0(
  &VAR_2->final_signature, VAR_0->suspect->commit, VAR_1->mailmap);
 FUNC_3(&VAR_2->orig_signature, VAR_2->final_signature);
 VAR_2->boundary = VAR_0->is_boundary ? 1 : 0;
 return VAR_2;
}
