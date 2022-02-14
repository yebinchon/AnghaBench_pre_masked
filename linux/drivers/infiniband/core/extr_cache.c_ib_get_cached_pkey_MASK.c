
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ib_pkey_cache {int table_len; int * table; } ;
struct TYPE_6__ {int lock; } ;
struct ib_device {TYPE_3__ cache; TYPE_2__* port_data; } ;
struct TYPE_4__ {struct ib_pkey_cache* pkey; } ;
struct TYPE_5__ {TYPE_1__ cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ib_device *VAR_1,
         u8 VAR_2,
         int VAR_3,
         u16 *VAR_4)
{
 struct ib_pkey_cache *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_1->cache.lock, VAR_6);

 VAR_5 = VAR_1->port_data[VAR_2].cache.pkey;

 if (VAR_3 < 0 || VAR_3 >= VAR_5->table_len)
  VAR_7 = -VAR_0;
 else
  *VAR_4 = VAR_5->table[VAR_3];

 FUNC_2(&VAR_1->cache.lock, VAR_6);

 return VAR_7;
}
