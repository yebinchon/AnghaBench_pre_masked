
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_device {TYPE_1__* resource; int ap_bio_cnt; } ;
struct TYPE_2__ {int req_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline bool FUNC_4(struct drbd_device *VAR_0)
{
 bool VAR_1 = 0;

 FUNC_2(&VAR_0->resource->req_lock);
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_0->ap_bio_cnt);
 FUNC_3(&VAR_0->resource->req_lock);

 return VAR_1;
}
