
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gendisk {TYPE_2__* queue; } ;
struct TYPE_6__ {int ioctl; int cache_miss; struct gendisk* disk; } ;
struct cached_dev {TYPE_3__ disk; } ;
struct TYPE_5__ {TYPE_1__* backing_dev_info; int make_request_fn; } ;
struct TYPE_4__ {int congested_fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct cached_dev *VAR_4)
{
 struct gendisk *VAR_5 = VAR_4->disk.disk;

 VAR_5->queue->make_request_fn = VAR_3;
 VAR_5->queue->backing_dev_info->congested_fn = VAR_1;
 VAR_4->disk.cache_miss = VAR_0;
 VAR_4->disk.ioctl = VAR_2;
}
