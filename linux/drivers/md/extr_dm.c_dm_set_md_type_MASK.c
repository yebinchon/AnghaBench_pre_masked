
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int type; int type_lock; } ;
typedef enum dm_queue_mode { ____Placeholder_dm_queue_mode } dm_queue_mode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mapped_device *VAR_0, enum dm_queue_mode VAR_1)
{
 FUNC_0(!FUNC_1(&VAR_0->type_lock));
 VAR_0->type = VAR_1;
}
