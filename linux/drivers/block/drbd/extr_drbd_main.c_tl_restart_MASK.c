
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_connection {TYPE_1__* resource; } ;
typedef enum drbd_req_event { ____Placeholder_drbd_req_event } drbd_req_event ;
struct TYPE_2__ {int req_lock; } ;


 int FUNC_0 (struct drbd_connection*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drbd_connection *VAR_0, enum drbd_req_event VAR_1)
{
 FUNC_1(&VAR_0->resource->req_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->resource->req_lock);
}
