
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int debug; int wrong_sorted_path; int wrong_status_flags_count; int entry_count; int expected_statuses; int expected_paths; int expected_entry_count; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_9__ {int count; char** strings; } ;
typedef TYPE_2__ git_strarray ;
struct TYPE_10__ {int flags; TYPE_2__ pathspec; } ;
typedef TYPE_3__ git_status_options ;
typedef int git_repository ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,TYPE_3__*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int *,char*) ;

void FUNC_8(void)
{
 status_entry_counts VAR_8;
 git_repository *VAR_9 = FUNC_3("status");
 git_status_options VAR_10 = VAR_0;
 char *VAR_11[] = { "zzz_new_dir" };
 git_strarray VAR_12;


 FUNC_1("status/.new_file", "dummy");
 FUNC_2(FUNC_4("status/zzz_new_dir", 0777));
 FUNC_1("status/zzz_new_dir/new_file", "dummy");
 FUNC_1("status/zzz_new_file", "dummy");
 FUNC_1("status/wut", "dummy");

 FUNC_7(VAR_9, "zzz_new_dir/new_file");


 FUNC_6(&VAR_8, 0x0, sizeof(status_entry_counts));
 VAR_8.expected_entry_count = VAR_5;
 VAR_8.expected_paths = VAR_6;
 VAR_8.expected_statuses = VAR_7;
 VAR_8.debug = 1;

 VAR_10.flags = VAR_2 |
  VAR_3 |
  VAR_1;

 VAR_12.count = 1;
 VAR_12.strings = VAR_11;
 VAR_10.pathspec = VAR_12;


 FUNC_2(
  FUNC_5(VAR_9, &VAR_10, VAR_4, &VAR_8)
 );

 FUNC_0(0, VAR_8.entry_count);
 FUNC_0(0, VAR_8.wrong_status_flags_count);
 FUNC_0(0, VAR_8.wrong_sorted_path);
}
