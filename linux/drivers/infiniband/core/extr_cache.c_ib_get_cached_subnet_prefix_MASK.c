
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct TYPE_6__ {int lock; } ;
struct ib_device {TYPE_3__ cache; TYPE_2__* port_data; } ;
struct TYPE_4__ {int subnet_prefix; } ;
struct TYPE_5__ {TYPE_1__ cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ib_device *VAR_1,
    u8 VAR_2,
    u64 *VAR_3)
{
 unsigned long VAR_4;

 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_1->cache.lock, VAR_4);
 *VAR_3 = VAR_1->port_data[VAR_2].cache.subnet_prefix;
 FUNC_2(&VAR_1->cache.lock, VAR_4);

 return 0;
}
