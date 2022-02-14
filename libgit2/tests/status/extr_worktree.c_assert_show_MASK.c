
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expected_entry_count; char const** expected_paths; unsigned int const* expected_statuses; int wrong_sorted_path; int wrong_status_flags_count; int entry_count; } ;
typedef TYPE_1__ status_entry_counts ;
typedef int git_status_show_t ;
struct TYPE_8__ {unsigned int flags; int show; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;


 TYPE_2__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

void FUNC_4(
 const int VAR_3,
 const char *VAR_4[],
 const unsigned int VAR_5[],
 git_repository *VAR_6,
 git_status_show_t VAR_7,
 unsigned int VAR_8)
{
 status_entry_counts VAR_9;
 git_status_options VAR_10 = VAR_0;

 FUNC_3(&VAR_9, 0x0, sizeof(status_entry_counts));
 VAR_9.expected_entry_count = VAR_3;
 VAR_9.expected_paths = VAR_4;
 VAR_9.expected_statuses = VAR_5;

 VAR_10.flags = VAR_1 | VAR_8;
 VAR_10.show = VAR_7;

 FUNC_1(
  FUNC_2(VAR_6, &VAR_10, VAR_2, &VAR_9)
 );

 FUNC_0(VAR_9.expected_entry_count, VAR_9.entry_count);
 FUNC_0(0, VAR_9.wrong_status_flags_count);
 FUNC_0(0, VAR_9.wrong_sorted_path);
}
