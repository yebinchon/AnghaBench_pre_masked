
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct drbd_interval {scalar_t__ waiting; } ;
struct drbd_request {struct drbd_interval i; struct drbd_device* device; } ;
struct drbd_device {int misc_wait; } ;


 int FUNC_0 (struct rb_root*,struct drbd_interval*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rb_root *VAR_0,
      struct drbd_request *VAR_1)
{
 struct drbd_device *VAR_2 = VAR_1->device;
 struct drbd_interval *VAR_3 = &VAR_1->i;

 FUNC_0(VAR_0, VAR_3);


 if (VAR_3->waiting)
  FUNC_1(&VAR_2->misc_wait);
}
