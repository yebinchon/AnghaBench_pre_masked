
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int git_blame_hunk ;
typedef int git_blame__origin ;
struct TYPE_15__ {scalar_t__ num_lines; scalar_t__ lno; scalar_t__ s_lno; struct TYPE_15__* next; int * suspect; } ;
typedef TYPE_2__ git_blame__entry ;
struct TYPE_14__ {scalar_t__ min_line; scalar_t__ max_line; int flags; } ;
struct TYPE_16__ {int hunks; TYPE_2__* ent; TYPE_1__ options; int final_blob; int final_buf_size; int final_buf; int path; int final; } ;
typedef TYPE_3__ git_blame ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int **,TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(git_blame *VAR_0)
{
 int VAR_1;
 git_blame__entry *VAR_2 = ((void*)0);
 git_blame__origin *VAR_3;

 if ((VAR_1 = FUNC_10(VAR_0)) < 0 ||
     (VAR_1 = FUNC_3(&VAR_3, VAR_0, VAR_0->final, VAR_0->path)) < 0)
  goto cleanup;
 VAR_0->final_buf = FUNC_5(VAR_0->final_blob);
 VAR_0->final_buf_size = FUNC_6(VAR_0->final_blob);

 VAR_2 = FUNC_1(1, sizeof(git_blame__entry));
 FUNC_0(VAR_2);

 VAR_2->num_lines = FUNC_9(VAR_0);
 VAR_2->lno = VAR_0->options.min_line - 1;
 VAR_2->num_lines = VAR_2->num_lines - VAR_0->options.min_line + 1;
 if (VAR_0->options.max_line > 0)
  VAR_2->num_lines = VAR_0->options.max_line - VAR_0->options.min_line + 1;
 VAR_2->s_lno = VAR_2->lno;
 VAR_2->suspect = VAR_3;

 VAR_0->ent = VAR_2;

 VAR_1 = FUNC_4(VAR_0, VAR_0->options.flags);

cleanup:
 for (VAR_2 = VAR_0->ent; VAR_2; ) {
  git_blame__entry *VAR_4 = VAR_2->next;
  git_blame_hunk *VAR_5 = FUNC_8(VAR_2, VAR_0);

  FUNC_7(&VAR_0->hunks, VAR_5);

  FUNC_2(VAR_2);
  VAR_2 = VAR_4;
 }

 return VAR_1;
}
