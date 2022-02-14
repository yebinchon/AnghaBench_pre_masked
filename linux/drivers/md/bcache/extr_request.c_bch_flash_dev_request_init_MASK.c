
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {TYPE_2__* queue; } ;
struct bcache_device {int ioctl; int cache_miss; struct gendisk* disk; } ;
struct TYPE_4__ {TYPE_1__* backing_dev_info; int make_request_fn; } ;
struct TYPE_3__ {int congested_fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct bcache_device *VAR_4)
{
 struct gendisk *VAR_5 = VAR_4->disk;

 VAR_5->queue->make_request_fn = VAR_3;
 VAR_5->queue->backing_dev_info->congested_fn = VAR_1;
 VAR_4->cache_miss = VAR_0;
 VAR_4->ioctl = VAR_2;
}
