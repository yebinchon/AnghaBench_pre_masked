
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct drm_device {TYPE_4__* pdev; void* dev_private; TYPE_8__* agp; } ;
struct TYPE_11__ {unsigned long chipset; int mmio_size; int mmio_base; int usec_timeout; } ;
typedef TYPE_3__ drm_mga_private_t ;
struct TYPE_13__ {int agp_mtrr; } ;
struct TYPE_12__ {int device; TYPE_2__* bus; } ;
struct TYPE_10__ {TYPE_1__* self; } ;
struct TYPE_9__ {int vendor; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (TYPE_8__*) ;
 TYPE_3__* FUNC_3 (int,int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*) ;

int FUNC_8(struct drm_device *VAR_3, unsigned long VAR_4)
{
 drm_mga_private_t *VAR_5;
 int VAR_6;
 if ((VAR_3->pdev->device == 0x0525) && VAR_3->pdev->bus->self
     && (VAR_3->pdev->bus->self->vendor == 0x3388)
     && (VAR_3->pdev->bus->self->device == 0x0021)
     && VAR_3->agp) {


  FUNC_0(VAR_3->agp->agp_mtrr);
  FUNC_2(VAR_3->agp);
  VAR_3->agp = ((void*)0);
 }
 VAR_5 = FUNC_3(sizeof(drm_mga_private_t), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_3->dev_private = (void *)VAR_5;

 VAR_5->usec_timeout = VAR_2;
 VAR_5->chipset = VAR_4;

 FUNC_7(VAR_3->pdev);

 VAR_5->mmio_base = FUNC_6(VAR_3->pdev, 1);
 VAR_5->mmio_size = FUNC_5(VAR_3->pdev, 1);

 VAR_6 = FUNC_1(VAR_3, 1);

 if (VAR_6) {
  (void) FUNC_4(VAR_3);
  return VAR_6;
 }

 return 0;
}
