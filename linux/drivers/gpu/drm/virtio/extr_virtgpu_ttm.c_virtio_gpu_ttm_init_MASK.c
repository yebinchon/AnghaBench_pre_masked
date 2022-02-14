
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int bdev; } ;
struct virtio_gpu_device {TYPE_3__ mman; TYPE_2__* ddev; } ;
struct TYPE_5__ {TYPE_1__* anon_inode; } ;
struct TYPE_4__ {int i_mapping; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_1 ;

int FUNC_4(struct virtio_gpu_device *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(&VAR_2->mman.bdev,
          &VAR_1,
          VAR_2->ddev->anon_inode->i_mapping,
          0);
 if (VAR_3) {
  FUNC_0("failed initializing buffer object driver(%d).\n", VAR_3);
  goto err_dev_init;
 }

 VAR_3 = FUNC_3(&VAR_2->mman.bdev, VAR_0, 0);
 if (VAR_3) {
  FUNC_0("Failed initializing GTT heap.\n");
  goto err_mm_init;
 }
 return 0;

err_mm_init:
 FUNC_2(&VAR_2->mman.bdev);
err_dev_init:
 return VAR_3;
}
