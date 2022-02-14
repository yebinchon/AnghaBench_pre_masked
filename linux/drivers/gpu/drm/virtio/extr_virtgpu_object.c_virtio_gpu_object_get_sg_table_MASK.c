
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int num_pages; TYPE_4__* ttm; } ;
struct virtio_gpu_object {int * pages; TYPE_3__ tbo; } ;
struct virtio_gpu_device {int vdev; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_2__* bdev; struct page** pages; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {int (* ttm_tt_populate ) (TYPE_4__*,struct ttm_operation_ctx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,struct page**,int,int ,int,size_t,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_4__*,struct ttm_operation_ctx*) ;
 scalar_t__ VAR_5 ;
 size_t FUNC_4 (int ) ;

int FUNC_5(struct virtio_gpu_device *VAR_6,
       struct virtio_gpu_object *VAR_7)
{
 int VAR_8;
 struct page **VAR_9 = VAR_7->tbo.ttm->pages;
 int VAR_10 = VAR_7->tbo.num_pages;
 struct ttm_operation_ctx VAR_11 = {
  .interruptible = 0,
  .no_wait_gpu = 0
 };
 size_t VAR_12;


 if (VAR_7->pages)
  return 0;

 if (VAR_7->tbo.ttm->state == VAR_5)
  VAR_7->tbo.ttm->bdev->driver->ttm_tt_populate(VAR_7->tbo.ttm, &VAR_11);
 VAR_7->pages = FUNC_2(sizeof(struct sg_table), VAR_1);
 if (!VAR_7->pages)
  goto out;

 VAR_12 = FUNC_4(VAR_6->vdev);
 VAR_12 &= VAR_2;
 if (VAR_12 > VAR_4)
  VAR_12 = VAR_4;
 VAR_8 = FUNC_0(VAR_7->pages, VAR_9, VAR_10, 0,
       VAR_10 << VAR_3,
       VAR_12, VAR_1);
 if (VAR_8)
  goto out;
 return 0;
out:
 FUNC_1(VAR_7->pages);
 VAR_7->pages = ((void*)0);
 return -VAR_0;
}
