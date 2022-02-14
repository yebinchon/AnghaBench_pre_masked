
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drbd_state_change {unsigned int n_devices; unsigned int n_connections; TYPE_2__* connections; TYPE_1__* devices; TYPE_3__* resource; } ;
struct drbd_device {int kref; } ;
struct drbd_connection {int kref; } ;
struct TYPE_8__ {int kref; } ;
struct TYPE_7__ {TYPE_4__* resource; } ;
struct TYPE_6__ {struct drbd_connection* connection; } ;
struct TYPE_5__ {struct drbd_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drbd_state_change*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct drbd_state_change *VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_3)
  return;

 if (VAR_3->resource->resource)
  FUNC_1(&VAR_3->resource->resource->kref, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3->n_devices; VAR_4++) {
  struct drbd_device *VAR_5 = VAR_3->devices[VAR_4].device;

  if (VAR_5)
   FUNC_1(&VAR_5->kref, VAR_1);
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->n_connections; VAR_4++) {
  struct drbd_connection *VAR_6 =
   VAR_3->connections[VAR_4].connection;

  if (VAR_6)
   FUNC_1(&VAR_6->kref, VAR_0);
 }
 FUNC_0(VAR_3);
}
