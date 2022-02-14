
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
typedef int git_index ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (char*,char*) ;

void FUNC_10(void)
{
 status_entry_counts VAR_10;
 git_repository *VAR_11 = FUNC_3("status");
 git_index *VAR_12;
 git_status_options VAR_13 = VAR_1;
 bool VAR_14;

 FUNC_2(FUNC_6(&VAR_12, VAR_11));
 VAR_14 = (FUNC_4(VAR_12) & VAR_0) != 0;
 FUNC_5(VAR_12);


 FUNC_2(FUNC_9("status/current_file", "status/swap"));
 FUNC_2(FUNC_9("status/subdir", "status/current_file"));
 FUNC_2(FUNC_9("status/swap", "status/subdir"));

 FUNC_1("status/.HEADER", "dummy");
 FUNC_1("status/42-is-not-prime.sigh", "dummy");
 FUNC_1("status/README.md", "dummy");


 FUNC_8(&VAR_10, 0x0, sizeof(status_entry_counts));
 VAR_10.expected_entry_count = VAR_5;
 VAR_10.expected_paths = VAR_14 ? VAR_7 : VAR_6;
 VAR_10.expected_statuses = VAR_14 ? VAR_9 : VAR_8;

 VAR_13.flags = VAR_3 |
  VAR_2;

 FUNC_2(
  FUNC_7(VAR_11, &VAR_13, VAR_4, &VAR_10)
 );

 FUNC_0(VAR_10.expected_entry_count, VAR_10.entry_count);
 FUNC_0(0, VAR_10.wrong_status_flags_count);
 FUNC_0(0, VAR_10.wrong_sorted_path);
}
