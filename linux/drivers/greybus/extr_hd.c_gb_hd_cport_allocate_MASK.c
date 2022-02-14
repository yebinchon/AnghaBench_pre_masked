
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ida {int dummy; } ;
struct gb_host_device {int num_cports; int dev; TYPE_1__* driver; struct ida cport_id_map; } ;
struct TYPE_2__ {int (* cport_allocate ) (struct gb_host_device*,int,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ida*,int,int,int ) ;
 int FUNC_2 (struct gb_host_device*,int,unsigned long) ;

int FUNC_3(struct gb_host_device *VAR_2, int VAR_3,
    unsigned long VAR_4)
{
 struct ida *VAR_5 = &VAR_2->cport_id_map;
 int VAR_6, VAR_7;

 if (VAR_2->driver->cport_allocate)
  return VAR_2->driver->cport_allocate(VAR_2, VAR_3, VAR_4);

 if (VAR_3 < 0) {
  VAR_6 = 0;
  VAR_7 = VAR_2->num_cports;
 } else if (VAR_3 < VAR_2->num_cports) {
  VAR_6 = VAR_3;
  VAR_7 = VAR_3 + 1;
 } else {
  FUNC_0(&VAR_2->dev, "cport %d not available\n", VAR_3);
  return -VAR_0;
 }

 return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_1);
}
