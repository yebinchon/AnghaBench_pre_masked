
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_blame_options ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_12__ {TYPE_4__ member_0; } ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_10__ {TYPE_2__ member_0; } ;
struct TYPE_14__ {int member_0; int member_2; char* member_5; int lines_in_hunk; int orig_path; int final_start_line_number; int member_6; TYPE_3__ member_4; int * member_3; TYPE_1__ member_1; } ;
typedef TYPE_5__ git_blame_hunk ;
struct TYPE_15__ {int hunks; } ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 TYPE_5__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,TYPE_5__*) ;

void FUNC_4(void)
{
 size_t VAR_2;
 git_blame_options VAR_3 = VAR_0;

 git_blame_hunk VAR_4[] = {
  { 3, {{0}}, 1, ((void*)0), {{0}}, "a", 0},
  { 3, {{0}}, 4, ((void*)0), {{0}}, "b", 0},
  { 3, {{0}}, 7, ((void*)0), {{0}}, "c", 0},
  { 3, {{0}}, 10, ((void*)0), {{0}}, "d", 0},
  { 3, {{0}}, 13, ((void*)0), {{0}}, "e", 0},
 };

 VAR_1 = FUNC_2(((void*)0), VAR_3, "");

 for (VAR_2=0; VAR_2<5; VAR_2++) {
  git_blame_hunk *VAR_5 = FUNC_0(1, sizeof(git_blame_hunk));
  VAR_5->final_start_line_number = VAR_4[VAR_2].final_start_line_number;
  VAR_5->orig_path = FUNC_1(VAR_4[VAR_2].orig_path);
  VAR_5->lines_in_hunk = VAR_4[VAR_2].lines_in_hunk;

  FUNC_3(&VAR_1->hunks, VAR_5);
 }
}
