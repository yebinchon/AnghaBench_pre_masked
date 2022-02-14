
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_host_device {int dev; TYPE_1__* driver; } ;
struct gb_connection {int name; int hd_cport_id; struct gb_host_device* hd; } ;
struct TYPE_2__ {int (* cport_connected ) (struct gb_host_device*,int ) ;} ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct gb_host_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct gb_connection *VAR_0)
{
 struct gb_host_device *VAR_1 = VAR_0->hd;
 int VAR_2;

 if (!VAR_1->driver->cport_connected)
  return 0;

 VAR_2 = VAR_1->driver->cport_connected(VAR_1, VAR_0->hd_cport_id);
 if (VAR_2) {
  FUNC_0(&VAR_1->dev, "%s: failed to set connected state: %d\n",
   VAR_0->name, VAR_2);
  return VAR_2;
 }

 return 0;
}
