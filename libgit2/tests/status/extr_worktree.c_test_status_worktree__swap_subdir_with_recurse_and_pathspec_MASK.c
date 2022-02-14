
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wrong_sorted_path; int wrong_status_flags_count; int entry_count; int expected_entry_count; int expected_statuses; int expected_paths; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (char*,char*) ;

void FUNC_8(void)
{
 status_entry_counts VAR_7;
 git_repository *VAR_8 = FUNC_3("status");
 git_status_options VAR_9 = VAR_0;


 FUNC_2(FUNC_7("status/current_file", "status/swap"));
 FUNC_2(FUNC_7("status/subdir", "status/current_file"));
 FUNC_2(FUNC_7("status/swap", "status/subdir"));
 FUNC_1("status/.new_file", "dummy");
 FUNC_2(FUNC_4("status/zzz_new_dir", 0777));
 FUNC_1("status/zzz_new_dir/new_file", "dummy");
 FUNC_1("status/zzz_new_file", "dummy");


 FUNC_6(&VAR_7, 0x0, sizeof(status_entry_counts));
 VAR_7.expected_entry_count = VAR_4;
 VAR_7.expected_paths = VAR_5;
 VAR_7.expected_statuses = VAR_6;

 VAR_9.flags = VAR_1 |
  VAR_2;


 FUNC_2(
  FUNC_5(VAR_8, &VAR_9, VAR_3, &VAR_7)
 );

 FUNC_0(VAR_7.expected_entry_count, VAR_7.entry_count);
 FUNC_0(0, VAR_7.wrong_status_flags_count);
 FUNC_0(0, VAR_7.wrong_sorted_path);
}
