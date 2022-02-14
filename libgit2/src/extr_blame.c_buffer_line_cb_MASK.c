
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_18__ {scalar_t__ origin; } ;
typedef TYPE_1__ git_diff_line ;
typedef TYPE_1__ git_diff_hunk ;
typedef TYPE_1__ git_diff_delta ;
struct TYPE_19__ {int lines_in_hunk; } ;
typedef TYPE_4__ git_blame_hunk ;
struct TYPE_20__ {int current_diff_line; int hunks; TYPE_4__* current_hunk; int path; } ;
typedef TYPE_5__ git_blame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (int *,TYPE_4__*,int *) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (size_t*,int *,int ,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (size_t,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_10 (int *,size_t,int) ;

__attribute__((used)) static int FUNC_11(
 const git_diff_delta *VAR_3,
 const git_diff_hunk *VAR_4,
 const git_diff_line *VAR_5,
 void *VAR_6)
{
 git_blame *VAR_7 = (git_blame*)VAR_6;

 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 if (VAR_5->origin == VAR_0) {
  if (FUNC_8(VAR_7->current_hunk) &&
      FUNC_7(VAR_7->current_hunk, VAR_7->current_diff_line)) {

   VAR_7->current_hunk->lines_in_hunk++;
   FUNC_10(&VAR_7->hunks, VAR_7->current_diff_line+1, 1);
  } else {

   FUNC_10(&VAR_7->hunks, VAR_7->current_diff_line, 1);
   VAR_7->current_hunk = FUNC_9(VAR_7->current_diff_line, 1, 0, VAR_7->path);
   FUNC_0(VAR_7->current_hunk);

   FUNC_4(&VAR_7->hunks, VAR_7->current_hunk, ((void*)0));
  }
  VAR_7->current_diff_line++;
 }

 if (VAR_5->origin == VAR_1) {

  size_t VAR_8 = VAR_7->current_diff_line + VAR_7->current_hunk->lines_in_hunk+1;

  if (--(VAR_7->current_hunk->lines_in_hunk) == 0) {
   size_t VAR_9;
   VAR_8--;
   if (!FUNC_6(&VAR_9, &VAR_7->hunks, VAR_2, VAR_7->current_hunk)) {
    FUNC_5(&VAR_7->hunks, VAR_9);
    FUNC_2(VAR_7->current_hunk);
    VAR_7->current_hunk = (git_blame_hunk*)FUNC_3(VAR_7, (uint32_t)VAR_9);
   }
  }
  FUNC_10(&VAR_7->hunks, VAR_8, -1);
 }
 return 0;
}
