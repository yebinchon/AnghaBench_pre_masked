
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ignore_case; int reuc; int entries; int reuc_search; int entries_search_path; int entries_search; int entries_cmp_path; } ;
typedef TYPE_1__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_2(git_index *VAR_12, bool VAR_13)
{
 VAR_12->ignore_case = VAR_13;

 if (VAR_13) {
  VAR_12->entries_cmp_path = VAR_0;
  VAR_12->entries_search = VAR_4;
  VAR_12->entries_search_path = VAR_6;
  VAR_12->reuc_search = VAR_10;
 } else {
  VAR_12->entries_cmp_path = VAR_1;
  VAR_12->entries_search = VAR_5;
  VAR_12->entries_search_path = VAR_7;
  VAR_12->reuc_search = VAR_11;
 }

 FUNC_0(&VAR_12->entries,
  VAR_13 ? VAR_3 : VAR_2);
 FUNC_1(&VAR_12->entries);

 FUNC_0(&VAR_12->reuc, VAR_13 ? VAR_9 : VAR_8);
 FUNC_1(&VAR_12->reuc);
}
