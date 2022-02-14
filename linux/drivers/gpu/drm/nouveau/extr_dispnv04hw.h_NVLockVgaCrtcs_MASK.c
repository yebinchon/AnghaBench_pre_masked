
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chipset; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,int ) ;
 int FUNC_1 (struct drm_device*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static inline bool
FUNC_4(struct drm_device *VAR_3, bool VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_2(VAR_3);
 bool VAR_6 = !FUNC_0(VAR_3, 0, VAR_0);

 FUNC_1(VAR_3, 0, VAR_0,
         VAR_4 ? VAR_1 : VAR_2);

 if (VAR_5->client.device.info.chipset == 0x11 && !FUNC_3(VAR_3))
  FUNC_1(VAR_3, 1, VAR_0,
          VAR_4 ? VAR_1 :
          VAR_2);

 return VAR_6;
}
