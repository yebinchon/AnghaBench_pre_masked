
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_request {struct drbd_device* device; } ;
struct drbd_device {TYPE_1__* resource; } ;
struct bio_and_error {scalar_t__ bio; } ;
typedef enum drbd_req_event { ____Placeholder_drbd_req_event } drbd_req_event ;
struct TYPE_2__ {int req_lock; } ;


 int FUNC_0 (struct drbd_request*,int,struct bio_and_error*) ;
 int FUNC_1 (struct drbd_device*,struct bio_and_error*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_4(struct drbd_request *VAR_0,
  enum drbd_req_event VAR_1)
{
 unsigned long VAR_2;
 struct drbd_device *VAR_3 = VAR_0->device;
 struct bio_and_error VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3->resource->req_lock, VAR_2);
 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 FUNC_3(&VAR_3->resource->req_lock, VAR_2);

 if (VAR_4.bio)
  FUNC_1(VAR_3, &VAR_4);

 return VAR_5;
}
