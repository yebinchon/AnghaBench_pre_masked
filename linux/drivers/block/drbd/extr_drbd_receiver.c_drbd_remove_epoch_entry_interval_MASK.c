
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_interval {scalar_t__ waiting; } ;
struct drbd_peer_request {struct drbd_interval i; } ;
struct drbd_device {int misc_wait; int write_requests; } ;


 int FUNC_0 (struct drbd_interval*) ;
 int FUNC_1 (int *,struct drbd_interval*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drbd_device *VAR_0,
          struct drbd_peer_request *VAR_1)
{
 struct drbd_interval *VAR_2 = &VAR_1->i;

 FUNC_1(&VAR_0->write_requests, VAR_2);
 FUNC_0(VAR_2);


 if (VAR_2->waiting)
  FUNC_2(&VAR_0->misc_wait);
}
