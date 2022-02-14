
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_7__ {TYPE_2__ info; } ;
struct TYPE_8__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_4__ client; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_5__ {int device; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;

__attribute__((used)) static inline bool
FUNC_1(struct drm_device *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_1);
 const int VAR_3 = VAR_1->pdev->device & 0x0ff0;

 if (VAR_2->client.device.info.family >= VAR_0 && VAR_3 != 0x0100 &&
     VAR_3 != 0x0150 && VAR_3 != 0x01a0 && VAR_3 != 0x0200)
  return 1;

 return 0;
}
