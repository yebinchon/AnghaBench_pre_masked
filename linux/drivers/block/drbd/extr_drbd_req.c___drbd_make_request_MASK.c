
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_request {int dummy; } ;
struct drbd_device {int dummy; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (struct drbd_request*) ;
 struct drbd_request* FUNC_1 (struct drbd_device*,struct bio*,unsigned long) ;
 int FUNC_2 (struct drbd_device*,struct drbd_request*) ;

void FUNC_3(struct drbd_device *VAR_0, struct bio *VAR_1, unsigned long VAR_2)
{
 struct drbd_request *VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return;
 FUNC_2(VAR_0, VAR_3);
}
