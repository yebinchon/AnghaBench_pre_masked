
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wrong_sorted_path; int wrong_status_flags_count; int entry_count; int expected_entry_count; int expected_statuses; int expected_paths; } ;
typedef TYPE_1__ status_entry_counts ;
typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

void FUNC_5(void)
{
 status_entry_counts VAR_4;
 git_repository *VAR_5 = FUNC_2("status");

 FUNC_4(&VAR_4, 0x0, sizeof(status_entry_counts));
 VAR_4.expected_entry_count = VAR_1;
 VAR_4.expected_paths = VAR_2;
 VAR_4.expected_statuses = VAR_3;

 FUNC_1(
  FUNC_3(VAR_5, VAR_0, &VAR_4)
 );

 FUNC_0(VAR_4.expected_entry_count, VAR_4.entry_count);
 FUNC_0(0, VAR_4.wrong_status_flags_count);
 FUNC_0(0, VAR_4.wrong_sorted_path);
}
