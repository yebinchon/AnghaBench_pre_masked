
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drbd_state_change {unsigned int n_devices; unsigned int n_connections; TYPE_3__* connections; TYPE_2__* devices; TYPE_1__* resource; void* peer_devices; } ;
struct drbd_peer_device_state_change {int dummy; } ;
struct drbd_device_state_change {int dummy; } ;
struct drbd_connection_state_change {int dummy; } ;
typedef int gfp_t ;
struct TYPE_6__ {int * connection; } ;
struct TYPE_5__ {int * device; } ;
struct TYPE_4__ {int * resource; } ;


 struct drbd_state_change* FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static struct drbd_state_change *FUNC_1(unsigned int VAR_0, unsigned int VAR_1, gfp_t VAR_2)
{
 struct drbd_state_change *VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_4 = sizeof(struct drbd_state_change) +
        VAR_0 * sizeof(struct drbd_device_state_change) +
        VAR_1 * sizeof(struct drbd_connection_state_change) +
        VAR_0 * VAR_1 * sizeof(struct drbd_peer_device_state_change);
 VAR_3 = FUNC_0(VAR_4, VAR_2);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->n_devices = VAR_0;
 VAR_3->n_connections = VAR_1;
 VAR_3->devices = (void *)(VAR_3 + 1);
 VAR_3->connections = (void *)&VAR_3->devices[VAR_0];
 VAR_3->peer_devices = (void *)&VAR_3->connections[VAR_1];
 VAR_3->resource->resource = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3->devices[VAR_5].device = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_3->connections[VAR_5].connection = ((void*)0);
 return VAR_3;
}
