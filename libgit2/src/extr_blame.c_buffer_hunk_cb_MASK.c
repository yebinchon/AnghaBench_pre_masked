
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {scalar_t__ old_lines; scalar_t__ old_start; scalar_t__ new_start; } ;
typedef TYPE_1__ git_diff_hunk ;
typedef int git_diff_delta ;
struct TYPE_13__ {scalar_t__ orig_start_line_number; } ;
typedef TYPE_2__ git_blame_hunk ;
struct TYPE_14__ {TYPE_2__* current_hunk; int hunks; int path; scalar_t__ current_diff_line; } ;
typedef TYPE_3__ git_blame ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 TYPE_2__* FUNC_5 (scalar_t__,int ,scalar_t__,int ) ;
 TYPE_2__* FUNC_6 (int *,TYPE_2__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(
 const git_diff_delta *VAR_0,
 const git_diff_hunk *VAR_1,
 void *VAR_2)
{
 git_blame *VAR_3 = (git_blame*)VAR_2;
 uint32_t VAR_4;

 FUNC_1(VAR_0);

 VAR_4 = (VAR_1->old_lines == 0) ? VAR_1->new_start : VAR_1->old_start;
 VAR_3->current_diff_line = VAR_4;

 VAR_3->current_hunk = (git_blame_hunk*)FUNC_2(VAR_3, VAR_4);
 if (!VAR_3->current_hunk) {

  VAR_3->current_hunk = FUNC_5(VAR_4, 0, VAR_4, VAR_3->path);
  FUNC_0(VAR_3->current_hunk);

  FUNC_3(&VAR_3->hunks, VAR_3->current_hunk);
 } else if (!FUNC_4(VAR_3->current_hunk, VAR_4)){

  VAR_3->current_hunk = FUNC_6(&VAR_3->hunks, VAR_3->current_hunk,
    VAR_4 - VAR_3->current_hunk->orig_start_line_number, 1);
  FUNC_0(VAR_3->current_hunk);
 }

 return 0;
}
