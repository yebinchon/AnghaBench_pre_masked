
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int chipset; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct nouveau_bo {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct nouveau_bo*,int) ;
 int FUNC_1 (struct nouveau_bo*,int,int) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0, struct nouveau_bo *VAR_1,
          struct nouveau_bo *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4, VAR_5;







 for (VAR_5 = 0; VAR_5 < 64 * 64; VAR_5++) {
  VAR_3 = FUNC_0(VAR_1, VAR_5);






  VAR_4 = VAR_3 >> 24;
  if (VAR_4 > 0 && VAR_4 < 255)
   VAR_3 = (VAR_3 & 0x00ffffff) | ((VAR_4 + 1) << 24);
  FUNC_1(VAR_2, VAR_5, VAR_3);
 }
}
