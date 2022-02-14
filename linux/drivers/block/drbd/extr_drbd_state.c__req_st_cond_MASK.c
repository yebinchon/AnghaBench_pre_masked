
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union drbd_state {int dummy; } drbd_state ;
struct drbd_device {TYPE_1__* resource; int flags; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
struct TYPE_4__ {int connection; } ;
struct TYPE_3__ {int req_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (union drbd_state,union drbd_state,union drbd_state) ;
 int FUNC_1 (struct drbd_device*,union drbd_state,union drbd_state) ;
 union drbd_state FUNC_2 (struct drbd_device*) ;
 TYPE_2__* FUNC_3 (struct drbd_device*) ;
 int FUNC_4 (union drbd_state,union drbd_state,int ) ;
 int FUNC_5 (struct drbd_device*,union drbd_state) ;
 int FUNC_6 (union drbd_state,union drbd_state) ;
 union drbd_state FUNC_7 (struct drbd_device*,union drbd_state,int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static enum drbd_state_rv
FUNC_11(struct drbd_device *VAR_7, union drbd_state VAR_8,
      union drbd_state VAR_9)
{
 union drbd_state VAR_10, VAR_11;
 unsigned long VAR_12;
 enum drbd_state_rv VAR_13;

 if (FUNC_10(VAR_1, &VAR_7->flags))
  return VAR_4;

 if (FUNC_10(VAR_0, &VAR_7->flags))
  return VAR_2;

 FUNC_8(&VAR_7->resource->req_lock, VAR_12);
 VAR_10 = FUNC_2(VAR_7);
 VAR_11 = FUNC_7(VAR_7, VAR_10, FUNC_0(VAR_10, VAR_8, VAR_9), ((void*)0));
 VAR_13 = FUNC_6(VAR_10, VAR_11);
 if (VAR_13 >= VAR_5)
  VAR_13 = VAR_6;

 if (!FUNC_1(VAR_7, VAR_10, VAR_11))
  VAR_13 = VAR_3;
 if (VAR_13 == VAR_6) {
  VAR_13 = FUNC_5(VAR_7, VAR_11);
  if (VAR_13 >= VAR_5) {
   VAR_13 = FUNC_4(VAR_10, VAR_11, FUNC_3(VAR_7)->connection);
   if (VAR_13 >= VAR_5)
    VAR_13 = VAR_6;
  }
 }
 FUNC_9(&VAR_7->resource->req_lock, VAR_12);

 return VAR_13;
}
