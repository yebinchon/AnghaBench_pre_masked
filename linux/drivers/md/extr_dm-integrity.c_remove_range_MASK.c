
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_range {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct dm_integrity_c {TYPE_1__ endio_wait; } ;


 int FUNC_0 (struct dm_integrity_c*,struct dm_integrity_range*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct dm_integrity_c *VAR_0, struct dm_integrity_range *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->endio_wait.lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->endio_wait.lock, VAR_2);
}
