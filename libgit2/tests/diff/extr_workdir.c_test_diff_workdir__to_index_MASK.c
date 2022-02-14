
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int oid_calculations; int stat_calls; } ;
typedef TYPE_1__ git_diff_perfdata ;
struct TYPE_12__ {int context_lines; int interhunk_lines; int flags; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_13__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_3__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

void FUNC_10(void)
{
 git_diff_options VAR_14 = VAR_7;
 git_diff *VAR_15 = ((void*)0);
 diff_expects VAR_16;
 int VAR_17;

 VAR_13 = FUNC_3("status");

 VAR_14.context_lines = 3;
 VAR_14.interhunk_lines = 1;
 VAR_14.flags |= VAR_5 | VAR_6;

 FUNC_2(FUNC_8(&VAR_15, VAR_13, ((void*)0), &VAR_14));

 for (VAR_17 = 0; VAR_17 <= 1; VAR_17++) {
  FUNC_9(&VAR_16, 0, sizeof(VAR_16));

  if (VAR_17)
   FUNC_2(FUNC_4(
    VAR_15, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_16));
  else
   FUNC_2(FUNC_5(
    VAR_15, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_16));
  FUNC_0(13, VAR_16.files);
  FUNC_0(0, VAR_16.file_status[VAR_0]);
  FUNC_0(4, VAR_16.file_status[VAR_1]);
  FUNC_0(4, VAR_16.file_status[VAR_3]);
  FUNC_0(1, VAR_16.file_status[VAR_2]);
  FUNC_0(4, VAR_16.file_status[VAR_4]);

  FUNC_0(8, VAR_16.hunks);

  FUNC_0(14, VAR_16.lines);
  FUNC_0(5, VAR_16.line_ctxt);
  FUNC_0(4, VAR_16.line_adds);
  FUNC_0(5, VAR_16.line_dels);
 }

 {
  git_diff_perfdata VAR_18 = VAR_8;
  FUNC_2(FUNC_7(&VAR_18, VAR_15));
  FUNC_1(
   13 + 3 , VAR_18.stat_calls);
  FUNC_1(5, VAR_18.oid_calculations);
 }

 FUNC_6(VAR_15);
}
