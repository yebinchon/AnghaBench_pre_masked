
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_request {struct drbd_device* device; } ;
struct drbd_device {int dummy; } ;
struct bio_and_error {scalar_t__ bio; } ;
typedef enum drbd_req_event { ____Placeholder_drbd_req_event } drbd_req_event ;


 int FUNC_0 (struct drbd_request*,int,struct bio_and_error*) ;
 int FUNC_1 (struct drbd_device*,struct bio_and_error*) ;

__attribute__((used)) static inline int FUNC_2(struct drbd_request *VAR_0, enum drbd_req_event VAR_1)
{
 struct drbd_device *VAR_2 = VAR_0->device;
 struct bio_and_error VAR_3;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_3.bio)
  FUNC_1(VAR_2, &VAR_3);

 return VAR_4;
}
