
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvif_object {int dummy; } ;
struct TYPE_7__ {int dev; } ;
struct nouveau_plane {int brightness; int contrast; int colorkey; scalar_t__ color_encoding; int flip; scalar_t__ cur; int saturation; int hue; TYPE_3__ base; } ;
struct TYPE_5__ {struct nvif_object object; } ;
struct TYPE_6__ {TYPE_1__ device; } ;
struct TYPE_8__ {TYPE_2__ client; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (struct nvif_object*,int ,int,int) ;
 int FUNC_6 (struct nvif_object*,int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct nouveau_plane *VAR_4)
{
 struct nvif_object *VAR_5 = &FUNC_4(VAR_4->base.dev)->client.device.object;
 u32 VAR_6 = (VAR_4->brightness - 512) << 16 | VAR_4->contrast;
 u32 VAR_7 = ((FUNC_7(VAR_4->hue, VAR_4->saturation) & 0xffff) << 16) |
  (FUNC_3(VAR_4->hue, VAR_4->saturation) & 0xffff);
 u32 VAR_8 = 0;

 FUNC_6(VAR_5, FUNC_2(0), VAR_6);
 FUNC_6(VAR_5, FUNC_2(1), VAR_6);
 FUNC_6(VAR_5, FUNC_0(0), VAR_7);
 FUNC_6(VAR_5, FUNC_0(1), VAR_7);
 FUNC_6(VAR_5, VAR_1, VAR_4->colorkey & 0xffffff);

 if (VAR_4->cur) {
  if (VAR_4->color_encoding == VAR_0)
   VAR_8 |= VAR_3;
  if (VAR_4->colorkey & (1 << 24))
   VAR_8 |= VAR_2;
  FUNC_5(VAR_5, FUNC_1(VAR_4->flip),
   VAR_3 |
   VAR_2,
   VAR_8);
 }
}
