
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ib_pkey_cache {int table_len; int* table; } ;
struct TYPE_6__ {int lock; } ;
struct ib_device {TYPE_3__ cache; TYPE_2__* port_data; } ;
struct TYPE_4__ {struct ib_pkey_cache* pkey; } ;
struct TYPE_5__ {TYPE_1__ cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ib_device *VAR_2,
   u8 VAR_3,
   u16 VAR_4,
   u16 *VAR_5)
{
 struct ib_pkey_cache *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = -VAR_1;
 int VAR_10 = -1;

 if (!FUNC_0(VAR_2, VAR_3))
  return -VAR_0;

 FUNC_1(&VAR_2->cache.lock, VAR_7);

 VAR_6 = VAR_2->port_data[VAR_3].cache.pkey;

 *VAR_5 = -1;

 for (VAR_8 = 0; VAR_8 < VAR_6->table_len; ++VAR_8)
  if ((VAR_6->table[VAR_8] & 0x7fff) == (VAR_4 & 0x7fff)) {
   if (VAR_6->table[VAR_8] & 0x8000) {
    *VAR_5 = VAR_8;
    VAR_9 = 0;
    break;
   } else
    VAR_10 = VAR_8;
  }

 if (VAR_9 && VAR_10 >= 0) {
  *VAR_5 = VAR_10;
  VAR_9 = 0;
 }

 FUNC_2(&VAR_2->cache.lock, VAR_7);

 return VAR_9;
}
