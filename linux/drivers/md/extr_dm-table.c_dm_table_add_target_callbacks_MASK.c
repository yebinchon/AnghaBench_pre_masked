
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target_callbacks {int list; } ;
struct dm_table {int target_callbacks; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct dm_table *VAR_0, struct dm_target_callbacks *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->target_callbacks);
}
