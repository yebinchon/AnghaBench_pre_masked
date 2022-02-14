
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,int) ;
 scalar_t__ VAR_0 ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;

__attribute__((used)) static bool
FUNC_2(struct drm_device *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_1(VAR_1);
 unsigned VAR_3;

 if (VAR_2->client.device.info.family >= VAR_0)
  return 1;

 VAR_3 = FUNC_0(VAR_1, 0, 0x06);
 VAR_3 |= (FUNC_0(VAR_1, 0, 0x07) & 0x01) << 8;
 VAR_3 |= (FUNC_0(VAR_1, 0, 0x07) & 0x20) << 4;
 VAR_3 |= (FUNC_0(VAR_1, 0, 0x25) & 0x01) << 10;
 VAR_3 |= (FUNC_0(VAR_1, 0, 0x41) & 0x01) << 11;
 return (VAR_3 != 0);
}
