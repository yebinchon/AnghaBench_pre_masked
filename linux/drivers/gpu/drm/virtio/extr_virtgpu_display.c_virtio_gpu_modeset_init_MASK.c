
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtio_gpu_device {int num_scanouts; TYPE_2__* ddev; } ;
struct TYPE_4__ {int quirk_addfb_prefer_host_byte_order; int max_height; int max_width; int min_height; int min_width; int * helper_private; int * funcs; } ;
struct TYPE_5__ {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct virtio_gpu_device*,int) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_3(struct virtio_gpu_device *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_6->ddev);
 VAR_6->ddev->mode_config.quirk_addfb_prefer_host_byte_order = 1;
 VAR_6->ddev->mode_config.funcs = &VAR_4;
 VAR_6->ddev->mode_config.helper_private = &VAR_5;


 VAR_6->ddev->mode_config.min_width = VAR_1;
 VAR_6->ddev->mode_config.min_height = VAR_3;
 VAR_6->ddev->mode_config.max_width = VAR_0;
 VAR_6->ddev->mode_config.max_height = VAR_2;

 for (VAR_7 = 0 ; VAR_7 < VAR_6->num_scanouts; ++VAR_7)
  FUNC_2(VAR_6, VAR_7);

 FUNC_1(VAR_6->ddev);
}
