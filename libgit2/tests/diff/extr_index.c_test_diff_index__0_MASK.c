
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_7__ {int context_lines; int interhunk_lines; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int * FUNC_8 (int ,char const*) ;

void FUNC_9(void)
{

 const char *VAR_9 = "26a125ee1bf";
 const char *VAR_10 = "0017bd4ab1ec3";
 git_tree *VAR_11 = FUNC_8(VAR_8, VAR_9);
 git_tree *VAR_12 = FUNC_8(VAR_8, VAR_10);
 git_diff_options VAR_13 = VAR_3;
 git_diff *VAR_14 = ((void*)0);
 diff_expects VAR_15;

 FUNC_0(VAR_11);
 FUNC_0(VAR_12);

 VAR_13.context_lines = 1;
 VAR_13.interhunk_lines = 1;

 FUNC_7(&VAR_15, 0, sizeof(VAR_15));

 FUNC_2(FUNC_5(&VAR_14, VAR_8, VAR_11, ((void*)0), &VAR_13));

 FUNC_2(FUNC_3(
  VAR_14, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_15));
 FUNC_1(8, VAR_15.files);
 FUNC_1(3, VAR_15.file_status[VAR_0]);
 FUNC_1(2, VAR_15.file_status[VAR_1]);
 FUNC_1(3, VAR_15.file_status[VAR_2]);

 FUNC_1(8, VAR_15.hunks);

 FUNC_1(11, VAR_15.lines);
 FUNC_1(3, VAR_15.line_ctxt);
 FUNC_1(6, VAR_15.line_adds);
 FUNC_1(2, VAR_15.line_dels);

 FUNC_4(VAR_14);
 VAR_14 = ((void*)0);
 FUNC_7(&VAR_15, 0, sizeof(VAR_15));

 FUNC_2(FUNC_5(&VAR_14, VAR_8, VAR_12, ((void*)0), &VAR_13));

 FUNC_2(FUNC_3(
  VAR_14, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_15));
 FUNC_1(12, VAR_15.files);
 FUNC_1(7, VAR_15.file_status[VAR_0]);
 FUNC_1(2, VAR_15.file_status[VAR_1]);
 FUNC_1(3, VAR_15.file_status[VAR_2]);

 FUNC_1(12, VAR_15.hunks);

 FUNC_1(16, VAR_15.lines);
 FUNC_1(3, VAR_15.line_ctxt);
 FUNC_1(11, VAR_15.line_adds);
 FUNC_1(2, VAR_15.line_dels);

 FUNC_4(VAR_14);
 VAR_14 = ((void*)0);

 FUNC_6(VAR_11);
 FUNC_6(VAR_12);
}
