
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct ib_pkey_cache {int table_len; int * table; } ;
struct TYPE_2__ {int lock; struct ib_pkey_cache** pkey_cache; } ;
struct ib_device {TYPE_1__ cache; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_device*) ;
 scalar_t__ FUNC_1 (struct ib_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ib_device *VAR_1,
         u8 VAR_2,
         int VAR_3,
         u16 *VAR_4)
{
 struct ib_pkey_cache *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (VAR_2 < FUNC_1(VAR_1) || VAR_2 > FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_1->cache.lock, VAR_6);

 VAR_5 = VAR_1->cache.pkey_cache[VAR_2 - FUNC_1(VAR_1)];

 if (VAR_3 < 0 || VAR_3 >= VAR_5->table_len)
  VAR_7 = -VAR_0;
 else
  *VAR_4 = VAR_5->table[VAR_3];

 FUNC_3(&VAR_1->cache.lock, VAR_6);

 return VAR_7;
}
