
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__* lmc_cache; int lock; } ;
struct ib_device {TYPE_1__ cache; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_device*) ;
 scalar_t__ FUNC_1 (struct ib_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ib_device *VAR_1,
        u8 VAR_2,
        u8 *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (VAR_2 < FUNC_1(VAR_1) || VAR_2 > FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_1->cache.lock, VAR_4);
 *VAR_3 = VAR_1->cache.lmc_cache[VAR_2 - FUNC_1(VAR_1)];
 FUNC_3(&VAR_1->cache.lock, VAR_4);

 return VAR_5;
}
