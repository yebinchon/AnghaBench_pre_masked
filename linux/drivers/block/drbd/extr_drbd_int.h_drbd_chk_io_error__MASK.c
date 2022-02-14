
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_device {TYPE_1__* resource; } ;
typedef enum drbd_force_detach_flags { ____Placeholder_drbd_force_detach_flags } drbd_force_detach_flags ;
struct TYPE_2__ {int req_lock; } ;


 int FUNC_0 (struct drbd_device*,int,char const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct drbd_device *VAR_0,
 int VAR_1, enum drbd_force_detach_flags VAR_2, const char *VAR_3)
{
 if (VAR_1) {
  unsigned long VAR_4;
  FUNC_1(&VAR_0->resource->req_lock, VAR_4);
  FUNC_0(VAR_0, VAR_2, VAR_3);
  FUNC_2(&VAR_0->resource->req_lock, VAR_4);
 }
}
