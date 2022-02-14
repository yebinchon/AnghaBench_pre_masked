
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rb_root {int dummy; } ;
struct drbd_request {int dummy; } ;
struct drbd_device {TYPE_1__* resource; } ;
struct bio_and_error {scalar_t__ bio; } ;
typedef int sector_t ;
typedef enum drbd_req_event { ____Placeholder_drbd_req_event } drbd_req_event ;
struct TYPE_2__ {int req_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_request*,int,struct bio_and_error*) ;
 int FUNC_1 (struct drbd_device*,struct bio_and_error*) ;
 struct drbd_request* FUNC_2 (struct drbd_device*,struct rb_root*,int ,int ,int,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct drbd_device *VAR_1, u64 VAR_2, sector_t VAR_3,
         struct rb_root *VAR_4, const char *VAR_5,
         enum drbd_req_event VAR_6, bool VAR_7)
{
 struct drbd_request *VAR_8;
 struct bio_and_error VAR_9;

 FUNC_3(&VAR_1->resource->req_lock);
 VAR_8 = FUNC_2(VAR_1, VAR_4, VAR_2, VAR_3, VAR_7, VAR_5);
 if (FUNC_5(!VAR_8)) {
  FUNC_4(&VAR_1->resource->req_lock);
  return -VAR_0;
 }
 FUNC_0(VAR_8, VAR_6, &VAR_9);
 FUNC_4(&VAR_1->resource->req_lock);

 if (VAR_9.bio)
  FUNC_1(VAR_1, &VAR_9);
 return 0;
}
