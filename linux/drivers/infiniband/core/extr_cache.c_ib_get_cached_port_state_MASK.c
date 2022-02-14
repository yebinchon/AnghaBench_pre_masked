
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {int lock; } ;
struct ib_device {TYPE_3__ cache; TYPE_2__* port_data; } ;
typedef enum ib_port_state { ____Placeholder_ib_port_state } ib_port_state ;
struct TYPE_4__ {int port_state; } ;
struct TYPE_5__ {TYPE_1__ cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ib_device *VAR_1,
        u8 VAR_2,
        enum ib_port_state *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_1->cache.lock, VAR_4);
 *VAR_3 = VAR_1->port_data[VAR_2].cache.port_state;
 FUNC_2(&VAR_1->cache.lock, VAR_4);

 return VAR_5;
}
