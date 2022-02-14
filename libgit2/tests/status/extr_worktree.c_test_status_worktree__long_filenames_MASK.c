
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
 unsigned int const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,TYPE_2__*,int ,TYPE_1__*) ;
 char* VAR_5 ;
 int FUNC_6 (char*,char*,char*) ;

void FUNC_7(void)
{
 char VAR_6[260*4+1];
 const char *VAR_7[] = {VAR_6};
 const unsigned int VAR_8[] = {VAR_3};

 git_repository *VAR_9 = FUNC_3("empty_standard_repo");
 git_status_options VAR_10 = VAR_0;
 status_entry_counts VAR_11 = {0};


 FUNC_6(VAR_6, "empty_standard_repo/%s", VAR_5);
 FUNC_2(FUNC_4(VAR_6, 0777));
 FUNC_6(VAR_6, "empty_standard_repo/%s/foo", VAR_5);
 FUNC_1(VAR_6, "dummy");

 FUNC_6(VAR_6, "%s/foo", VAR_5);
 VAR_11.expected_entry_count = 1;
 VAR_11.expected_paths = VAR_7;
 VAR_11.expected_statuses = VAR_8;

 VAR_10.show = VAR_2;
 VAR_10.flags = VAR_1;

 FUNC_2(
  FUNC_5(VAR_9, &VAR_10, VAR_4, &VAR_11) );
 FUNC_0(VAR_11.expected_entry_count, VAR_11.entry_count);
 FUNC_0(0, VAR_11.wrong_status_flags_count);
 FUNC_0(0, VAR_11.wrong_sorted_path);
}
