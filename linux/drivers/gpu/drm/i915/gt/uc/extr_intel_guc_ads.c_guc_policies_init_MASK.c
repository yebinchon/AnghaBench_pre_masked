
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct guc_policy {int dummy; } ;
struct guc_policies {int is_valid; struct guc_policy** policy; int max_num_work_items; int dpc_promote_time; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct guc_policy*) ;

__attribute__((used)) static void FUNC_1(struct guc_policies *VAR_4)
{
 struct guc_policy *VAR_5;
 u32 VAR_6, VAR_7;

 VAR_4->dpc_promote_time = VAR_2;
 VAR_4->max_num_work_items = VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   VAR_5 = &VAR_4->policy[VAR_6][VAR_7];

   FUNC_0(VAR_5);
  }
 }

 VAR_4->is_valid = 1;
}
