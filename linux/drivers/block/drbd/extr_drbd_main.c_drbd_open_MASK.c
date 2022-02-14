
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ role; } ;
struct drbd_device {TYPE_3__* resource; int open_cnt; TYPE_1__ state; } ;
struct block_device {TYPE_2__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_6__ {int req_lock; } ;
struct TYPE_5__ {struct drbd_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct block_device *VAR_6, fmode_t VAR_7)
{
 struct drbd_device *VAR_8 = VAR_6->bd_disk->private_data;
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_0(&VAR_5);
 FUNC_2(&VAR_8->resource->req_lock, VAR_9);



 if (VAR_8->state.role != VAR_3) {
  if (VAR_7 & VAR_2)
   VAR_10 = -VAR_1;
  else if (!VAR_4)
   VAR_10 = -VAR_0;
 }

 if (!VAR_10)
  VAR_8->open_cnt++;
 FUNC_3(&VAR_8->resource->req_lock, VAR_9);
 FUNC_1(&VAR_5);

 return VAR_10;
}
