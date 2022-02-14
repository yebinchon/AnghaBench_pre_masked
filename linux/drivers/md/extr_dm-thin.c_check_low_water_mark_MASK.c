
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {scalar_t__ low_water_blocks; int low_water_triggered; TYPE_1__* ti; int lock; int pool_md; } ;
typedef scalar_t__ dm_block_t ;
struct TYPE_2__ {int table; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pool *VAR_0, dm_block_t VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1 <= VAR_0->low_water_blocks && !VAR_0->low_water_triggered) {
  FUNC_0("%s: reached low water mark for data device: sending event.",
         FUNC_1(VAR_0->pool_md));
  FUNC_3(&VAR_0->lock, VAR_2);
  VAR_0->low_water_triggered = 1;
  FUNC_4(&VAR_0->lock, VAR_2);
  FUNC_2(VAR_0->ti->table);
 }
}
