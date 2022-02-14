
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int member_0; } ;
struct TYPE_11__ {char* path; int mode; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
struct TYPE_12__ {int context_lines; int interhunk_lines; } ;
typedef TYPE_3__ git_diff_options ;
typedef int git_diff ;
struct TYPE_13__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; int member_0; } ;
typedef TYPE_4__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,int ,TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_6 (int *,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int **,int ) ;

void FUNC_10(void)
{
 git_diff_options VAR_10 = VAR_4;
 git_diff *VAR_11 = ((void*)0);
 git_index *VAR_12;
 git_index_entry VAR_13 = {0}, VAR_14 = {0};
 diff_expects VAR_15 = {0};

 VAR_9 = FUNC_2("status");

 VAR_10.context_lines = 3;
 VAR_10.interhunk_lines = 1;


 VAR_13.path = "subdir/modified_file";
 VAR_13.mode = 0100644;
 FUNC_8(&VAR_13.id, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf");

 VAR_14.path = "subdir/rename_conflict";
 VAR_14.mode = 0100644;
 FUNC_8(&VAR_14.id, "2bd0a343aeef7a2cf0d158478966a6e587ff3863");

 FUNC_1(FUNC_9(&VAR_12, VAR_9));
 FUNC_1(FUNC_6(VAR_12, ((void*)0), &VAR_13, &VAR_14));

 FUNC_1(FUNC_5(&VAR_11, VAR_9, VAR_12, &VAR_10));

 FUNC_1(FUNC_3(
  VAR_11, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_15));

 FUNC_0(9, VAR_15.files);
 FUNC_0(0, VAR_15.file_status[VAR_0]);
 FUNC_0(4, VAR_15.file_status[VAR_2]);
 FUNC_0(3, VAR_15.file_status[VAR_3]);
 FUNC_0(2, VAR_15.file_status[VAR_1]);

 FUNC_0(7, VAR_15.hunks);

 FUNC_0(12, VAR_15.lines);
 FUNC_0(4, VAR_15.line_ctxt);
 FUNC_0(3, VAR_15.line_adds);
 FUNC_0(5, VAR_15.line_dels);

 FUNC_4(VAR_11);
 FUNC_7(VAR_12);
}
