
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


 scalar_t__ VAR_0 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;

__attribute__((used)) static inline uint32_t
FUNC_1(struct drm_device *VAR_1, uint32_t VAR_2, int VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 if (VAR_3 == 15)
  VAR_3 = 16;
 if (VAR_3 == 24)
  VAR_3 = 8;


 if (VAR_4->client.device.info.family == VAR_0)
  VAR_5 = 128 / VAR_3 - 1;
 else
  VAR_5 = 512 / VAR_3 - 1;

 return (VAR_2 + VAR_5) & ~VAR_5;
}
