
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expected_entry_count; int wrong_sorted_path; int wrong_status_flags_count; int entry_count; int * expected_statuses; int * expected_paths; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;
typedef int git_index ;
typedef int counts ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *,TYPE_2__*,int ,TYPE_1__*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (char*) ;

void FUNC_11(void)
{
 git_repository *VAR_9 = FUNC_3("icase");
 git_index *VAR_10;
 git_status_options VAR_11 = VAR_1;
 bool VAR_12;
 status_entry_counts VAR_13;

 FUNC_1(FUNC_7(&VAR_10, VAR_9));
 VAR_12 =
  (FUNC_5(VAR_10) & VAR_0) != 0;
 FUNC_6(VAR_10);

 FUNC_9(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.expected_entry_count = 0;
 VAR_13.expected_paths = ((void*)0);
 VAR_13.expected_statuses = ((void*)0);
 FUNC_1(
  FUNC_8(VAR_9, &VAR_11, VAR_6, &VAR_13));
 FUNC_0(VAR_13.expected_entry_count, VAR_13.entry_count);
 FUNC_0(0, VAR_13.wrong_status_flags_count);
 FUNC_0(0, VAR_13.wrong_sorted_path);

 FUNC_2("icase/B", "new stuff");
 FUNC_4(FUNC_10("icase/c"));
 FUNC_2("icase/g", "new stuff");
 FUNC_4(FUNC_10("icase/H"));

 FUNC_9(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.expected_entry_count = 4;
 if (VAR_12) {
  VAR_13.expected_paths = VAR_7;
  VAR_13.expected_statuses = VAR_8;
 } else {
  VAR_13.expected_paths = VAR_4;
  VAR_13.expected_statuses = VAR_5;
 }
 FUNC_1(
  FUNC_8(VAR_9, &VAR_11, VAR_6, &VAR_13));
 FUNC_0(VAR_13.expected_entry_count, VAR_13.entry_count);
 FUNC_0(0, VAR_13.wrong_status_flags_count);
 FUNC_0(0, VAR_13.wrong_sorted_path);

 VAR_11.flags = VAR_3;

 FUNC_9(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.expected_entry_count = 4;
 VAR_13.expected_paths = VAR_4;
 VAR_13.expected_statuses = VAR_5;
 FUNC_1(
  FUNC_8(VAR_9, &VAR_11, VAR_6, &VAR_13));
 FUNC_0(VAR_13.expected_entry_count, VAR_13.entry_count);
 FUNC_0(0, VAR_13.wrong_status_flags_count);
 FUNC_0(0, VAR_13.wrong_sorted_path);

 VAR_11.flags = VAR_2;

 FUNC_9(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.expected_entry_count = 4;
 VAR_13.expected_paths = VAR_7;
 VAR_13.expected_statuses = VAR_8;
 FUNC_1(
  FUNC_8(VAR_9, &VAR_11, VAR_6, &VAR_13));
 FUNC_0(VAR_13.expected_entry_count, VAR_13.entry_count);
 FUNC_0(0, VAR_13.wrong_status_flags_count);
 FUNC_0(0, VAR_13.wrong_sorted_path);
}
