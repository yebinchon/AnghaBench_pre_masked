
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct gb_host_device {int cport_id_map; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* cport_release ) (struct gb_host_device*,int ) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct gb_host_device*,int ) ;

void FUNC_2(struct gb_host_device *VAR_0, u16 VAR_1)
{
 if (VAR_0->driver->cport_release) {
  VAR_0->driver->cport_release(VAR_0, VAR_1);
  return;
 }

 FUNC_0(&VAR_0->cport_id_map, VAR_1);
}
