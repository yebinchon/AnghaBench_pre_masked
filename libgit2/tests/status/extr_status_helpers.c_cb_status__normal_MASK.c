
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t entry_count; size_t expected_entry_count; unsigned int* expected_statuses; int wrong_status_flags_count; int wrong_sorted_path; int * expected_paths; scalar_t__ debug; } ;
typedef TYPE_1__ status_entry_counts ;


 int FUNC_0 (char const*,unsigned int,int *) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

int FUNC_2(
 const char *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 status_entry_counts *VAR_3 = VAR_2;

 if (VAR_3->debug)
  FUNC_0(VAR_0, VAR_1, ((void*)0));

 if (VAR_3->entry_count >= VAR_3->expected_entry_count)
  VAR_3->wrong_status_flags_count++;
 else if (FUNC_1(VAR_0, VAR_3->expected_paths[VAR_3->entry_count]))
  VAR_3->wrong_sorted_path++;
 else if (VAR_1 != VAR_3->expected_statuses[VAR_3->entry_count])
  VAR_3->wrong_status_flags_count++;

 VAR_3->entry_count++;
 return 0;
}
