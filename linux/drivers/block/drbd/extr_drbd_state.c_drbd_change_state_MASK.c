
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union drbd_state {int dummy; } drbd_state ;
struct drbd_device {TYPE_1__* resource; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum chg_state_flags { ____Placeholder_chg_state_flags } chg_state_flags ;
struct TYPE_2__ {int req_lock; } ;


 int FUNC_0 (struct drbd_device*,union drbd_state,int,int *) ;
 union drbd_state FUNC_1 (int ,union drbd_state,union drbd_state) ;
 int FUNC_2 (struct drbd_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

enum drbd_state_rv
FUNC_5(struct drbd_device *VAR_0, enum chg_state_flags VAR_1,
    union drbd_state VAR_2, union drbd_state VAR_3)
{
 unsigned long VAR_4;
 union drbd_state VAR_5;
 enum drbd_state_rv VAR_6;

 FUNC_3(&VAR_0->resource->req_lock, VAR_4);
 VAR_5 = FUNC_1(FUNC_2(VAR_0), VAR_2, VAR_3);
 VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_1, ((void*)0));
 FUNC_4(&VAR_0->resource->req_lock, VAR_4);

 return VAR_6;
}
