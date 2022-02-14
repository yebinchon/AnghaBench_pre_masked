
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expected_entry_count; scalar_t__* expected_statuses; int wrong_sorted_path; int wrong_status_flags_count; int entry_count; int expected_paths; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;
typedef int counts ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_5 (int *,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

void FUNC_7(void)
{
 git_repository *VAR_10 = FUNC_2("filemodes");
 status_entry_counts VAR_11;
 git_status_options VAR_12 = VAR_1;


 if (FUNC_3())
  FUNC_4(VAR_10, "core.filemode", 1);
 else {
  int VAR_13;

  FUNC_4(VAR_10, "core.filemode", 0);


  for (VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13)
   if (VAR_9[VAR_13] == VAR_5)
    VAR_9[VAR_13] = VAR_0;
 }

 VAR_12.flags = VAR_4 |
  VAR_2 |
  VAR_3;

 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.expected_entry_count = VAR_7;
 VAR_11.expected_paths = VAR_8;
 VAR_11.expected_statuses = VAR_9;

 FUNC_1(
  FUNC_5(VAR_10, &VAR_12, VAR_6, &VAR_11)
 );

 FUNC_0(VAR_11.expected_entry_count, VAR_11.entry_count);
 FUNC_0(0, VAR_11.wrong_status_flags_count);
 FUNC_0(0, VAR_11.wrong_sorted_path);
}
