
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int max_recovery; int context; int (* wakeup_workers ) (int ) ;int recovery_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dm_region_hash *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_recovery; VAR_1++)
  FUNC_1(&VAR_0->recovery_count);

 VAR_0->wakeup_workers(VAR_0->context);
}
