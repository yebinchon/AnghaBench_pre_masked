
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int expected_entry_count; char const** expected_paths; unsigned int const* expected_statuses; int wrong_sorted_path; int wrong_status_flags_count; int entry_count; int member_0; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_7__ {int flags; int show; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_7 (char*,int) ;

void FUNC_8(void)
{

 const char *VAR_6[] = { "no_permission/" };
 const unsigned int VAR_7[] = {VAR_4};

 git_repository *VAR_8 = FUNC_3("empty_standard_repo");
 git_status_options VAR_9 = VAR_0;
 status_entry_counts VAR_10 = {0};


 FUNC_2(FUNC_5("empty_standard_repo/no_permission", 0777));
 FUNC_1("empty_standard_repo/no_permission/foo", "dummy");
 FUNC_7("empty_standard_repo/no_permission", 0644);

 VAR_10.expected_entry_count = 1;
 VAR_10.expected_paths = VAR_6;
 VAR_10.expected_statuses = VAR_7;

 VAR_9.show = VAR_3;
 VAR_9.flags = (VAR_1 | VAR_2);

 FUNC_2(
  FUNC_6(VAR_8, &VAR_9, VAR_5, &VAR_10) );


 FUNC_7("empty_standard_repo/no_permission", 0777);

 FUNC_0(VAR_10.expected_entry_count, VAR_10.entry_count);
 FUNC_0(0, VAR_10.wrong_status_flags_count);
 FUNC_0(0, VAR_10.wrong_sorted_path);



}
