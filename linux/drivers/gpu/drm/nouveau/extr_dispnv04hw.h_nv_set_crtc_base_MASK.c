
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int,int ,int) ;
 int FUNC_2 (struct drm_device*,int,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static inline void
FUNC_4(struct drm_device *VAR_3, int VAR_4, uint32_t VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_3(VAR_3);

 FUNC_1(VAR_3, VAR_4, VAR_2, VAR_5);

 if (VAR_6->client.device.info.family == VAR_1) {




  int VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_0);

  FUNC_2(VAR_3, VAR_4, VAR_0,
          (VAR_7 & ~0x40) | ((VAR_5 >> 18) & 0x40));
 }
}
