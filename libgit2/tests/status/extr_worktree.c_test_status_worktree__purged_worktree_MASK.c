
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wrong_sorted_path; int wrong_status_flags_count; int entry_count; int expected_entry_count; int expected_statuses; int expected_paths; } ;
typedef TYPE_1__ status_entry_counts ;
typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int VAR_5 ;

void FUNC_9(void)
{
 status_entry_counts VAR_6;
 git_repository *VAR_7 = FUNC_2("status");
 git_buf VAR_8 = VAR_0;


 FUNC_1(FUNC_4(&VAR_8, FUNC_6(VAR_7)));
 FUNC_1(FUNC_5(&VAR_8, 0, VAR_5, ((void*)0)));
 FUNC_3(&VAR_8);


 FUNC_8(&VAR_6, 0x0, sizeof(status_entry_counts));
 VAR_6.expected_entry_count = VAR_2;
 VAR_6.expected_paths = VAR_3;
 VAR_6.expected_statuses = VAR_4;

 FUNC_1(
  FUNC_7(VAR_7, VAR_1, &VAR_6)
 );

 FUNC_0(VAR_6.expected_entry_count, VAR_6.entry_count);
 FUNC_0(0, VAR_6.wrong_status_flags_count);
 FUNC_0(0, VAR_6.wrong_sorted_path);
}
