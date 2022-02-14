
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ family; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
struct TYPE_7__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {TYPE_4__* pdev; } ;
struct TYPE_8__ {int device; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,int,int,int*,int*) ;
 int FUNC_2 (int*,int*) ;

void
FUNC_3(struct drm_device *VAR_1, int VAR_2, int VAR_3, int *VAR_4, int *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_0(VAR_1);

 if (VAR_6->client.device.info.family < VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else if ((VAR_1->pdev->device & 0xfff0) == 0x0240 ||
   (VAR_1->pdev->device & 0xfff0) == 0x03d0 ) {
  *VAR_4 = 128;
  *VAR_5 = 0x0480;
 } else
  FUNC_2(VAR_4, VAR_5);
}
