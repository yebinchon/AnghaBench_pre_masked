
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union drbd_state {int dummy; } drbd_state ;
struct drbd_connection {TYPE_1__* resource; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum chg_state_flags { ____Placeholder_chg_state_flags } chg_state_flags ;
struct TYPE_2__ {int req_lock; } ;


 int FUNC_0 (struct drbd_connection*,union drbd_state,union drbd_state,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

enum drbd_state_rv
FUNC_3(struct drbd_connection *VAR_0, union drbd_state VAR_1, union drbd_state VAR_2,
     enum chg_state_flags VAR_3)
{
 enum drbd_state_rv VAR_4;

 FUNC_1(&VAR_0->resource->req_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->resource->req_lock);

 return VAR_4;
}
