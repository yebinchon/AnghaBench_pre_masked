
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvif_object {int dummy; } ;
struct nv04_mode_state {TYPE_1__* crtc_reg; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {struct nvif_object object; } ;
struct TYPE_7__ {TYPE_2__ device; } ;
struct TYPE_8__ {TYPE_3__ client; } ;
struct TYPE_5__ {int* DAC; } ;


 int FUNC_0 (struct drm_device*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nvif_object*,scalar_t__,int) ;

void
FUNC_3(struct drm_device *VAR_5, int VAR_6,
         struct nv04_mode_state *VAR_7)
{
 struct nvif_object *VAR_8 = &FUNC_1(VAR_5)->client.device.object;
 int VAR_9 = VAR_6 * VAR_3, VAR_10;

 FUNC_2(VAR_8, VAR_1 + VAR_9,
    VAR_2);
 FUNC_2(VAR_8, VAR_4 + VAR_9, 0x0);

 for (VAR_10 = 0; VAR_10 < 768; VAR_10++) {
  FUNC_2(VAR_8, VAR_0 + VAR_9,
    VAR_7->crtc_reg[VAR_6].DAC[VAR_10]);
 }

 FUNC_0(VAR_5, VAR_6, 0);
}
