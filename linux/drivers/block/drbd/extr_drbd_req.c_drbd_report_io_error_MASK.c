
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__ sector; } ;
struct drbd_request {int rq_state; TYPE_1__ i; } ;
struct drbd_device {TYPE_2__* ldev; } ;
struct TYPE_4__ {int backing_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct drbd_device*,char*,char*,unsigned long long,int,int ) ;

__attribute__((used)) static void FUNC_3(struct drbd_device *VAR_3, struct drbd_request *VAR_4)
{
        char VAR_5[VAR_0];

 if (!FUNC_0(&VAR_2))
  return;

 FUNC_2(VAR_3, "local %s IO error sector %llu+%u on %s\n",
   (VAR_4->rq_state & VAR_1) ? "WRITE" : "READ",
   (unsigned long long)VAR_4->i.sector,
   VAR_4->i.size >> 9,
   FUNC_1(VAR_3->ldev->backing_bdev, VAR_5));
}
