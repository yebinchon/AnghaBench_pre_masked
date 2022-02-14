
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct nvkm_gpio {int dummy; } ;
struct nvif_object {int dummy; } ;
struct TYPE_7__ {scalar_t__ family; } ;
struct TYPE_9__ {TYPE_2__ info; struct nvif_object object; } ;
struct TYPE_8__ {TYPE_4__ device; } ;
struct TYPE_6__ {int tvdactestval; int dactestval; } ;
struct nouveau_drm {TYPE_3__ client; TYPE_1__ vbios; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct dcb_output {scalar_t__ type; } ;
struct TYPE_10__ {struct dcb_output* dcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct drm_device*,int,scalar_t__) ;
 int FUNC_1 (struct drm_device*,int,int ) ;
 int FUNC_2 (struct drm_device*,int,scalar_t__,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 TYPE_5__* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct nvif_object*,int ) ;
 int FUNC_9 (struct nvif_object*,int ,int) ;
 int FUNC_10 (struct nvkm_gpio*,int ,int ,int) ;
 int FUNC_11 (struct nvkm_gpio*,int ,int ,int,int) ;
 struct nvkm_gpio* FUNC_12 (TYPE_4__*) ;

uint32_t FUNC_13(struct drm_encoder *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->dev;
 struct nouveau_drm *VAR_15 = FUNC_5(VAR_14);
 struct nvif_object *VAR_16 = &FUNC_5(VAR_14)->client.device.object;
 struct nvkm_gpio *VAR_17 = FUNC_12(&VAR_15->client.device);
 struct dcb_output *VAR_18 = FUNC_6(VAR_13)->dcb;
 uint32_t VAR_19, VAR_20, VAR_21 = FUNC_7(VAR_13);
 uint32_t VAR_22 = 0, VAR_23 = 0, VAR_24,
  VAR_25, VAR_26 = 0, VAR_27 = 0, VAR_28, VAR_29;
 int VAR_30;


 if (VAR_18->type == VAR_2) {
  VAR_20 = (0xa0 << 0 | 0xa0 << 10 | 0xa0 << 20);

  if (VAR_15->vbios.tvdactestval)
   VAR_20 = VAR_15->vbios.tvdactestval;
 } else {
  VAR_20 = (0x140 << 0 | 0x140 << 10 | 0x140 << 20);

  if (VAR_15->vbios.dactestval)
   VAR_20 = VAR_15->vbios.dactestval;
 }

 VAR_25 = FUNC_0(VAR_14, 0, VAR_10 + VAR_21);
 FUNC_2(VAR_14, 0, VAR_10 + VAR_21,
        VAR_25 & ~VAR_11);

 VAR_22 = FUNC_8(VAR_16, VAR_5);

 FUNC_9(VAR_16, VAR_5, VAR_22 & 0xd7ffffff);
 if (VAR_21 == 0x68) {
  VAR_23 = FUNC_8(VAR_16, VAR_6);
  FUNC_9(VAR_16, VAR_6, VAR_23 & 0xffffffcf);
 }

 if (VAR_17) {
  VAR_27 = FUNC_10(VAR_17, 0, VAR_1, 0xff);
  VAR_26 = FUNC_10(VAR_17, 0, VAR_0, 0xff);
  FUNC_11(VAR_17, 0, VAR_1, 0xff, VAR_18->type == VAR_2);
  FUNC_11(VAR_17, 0, VAR_0, 0xff, VAR_18->type == VAR_2);
 }

 FUNC_4(4);

 VAR_24 = FUNC_0(VAR_14, 0, VAR_7 + VAR_21);
 VAR_30 = (VAR_24 & 0x100) >> 8;


 if (!(FUNC_1(VAR_14, VAR_30, VAR_3) & 0xC0))
  VAR_30 ^= 1;


 VAR_29 = (VAR_24 & 0xfffffece) | VAR_30 << 8;

 if (VAR_15->client.device.info.family >= VAR_4) {
  if (VAR_18->type == VAR_2)
   VAR_29 |= 0x1a << 16;
  else
   VAR_29 &= ~(0x1a << 16);
 }

 FUNC_2(VAR_14, 0, VAR_7 + VAR_21, VAR_29);
 FUNC_4(1);

 VAR_28 = FUNC_0(VAR_14, 0, VAR_7 + VAR_21);
 FUNC_2(VAR_14, 0, VAR_7 + VAR_21, VAR_28 | 1);

 FUNC_2(VAR_14, VAR_30, VAR_8,
        VAR_9 | VAR_20);
 VAR_28 = FUNC_0(VAR_14, VAR_30, VAR_10);
 FUNC_2(VAR_14, VAR_30, VAR_10,
        VAR_28 | VAR_12);
 FUNC_4(5);

 VAR_19 = FUNC_0(VAR_14, 0, VAR_10 + VAR_21);

 VAR_19 &= FUNC_0(VAR_14, 0, VAR_10 + VAR_21);

 VAR_28 = FUNC_0(VAR_14, VAR_30, VAR_10);
 FUNC_2(VAR_14, VAR_30, VAR_10,
        VAR_28 & ~VAR_12);
 FUNC_2(VAR_14, VAR_30, VAR_8, 0);


 FUNC_2(VAR_14, 0, VAR_7 + VAR_21, VAR_24);
 FUNC_2(VAR_14, 0, VAR_10 + VAR_21, VAR_25);
 if (VAR_21 == 0x68)
  FUNC_9(VAR_16, VAR_6, VAR_23);
 FUNC_9(VAR_16, VAR_5, VAR_22);

 if (VAR_17) {
  FUNC_11(VAR_17, 0, VAR_1, 0xff, VAR_27);
  FUNC_11(VAR_17, 0, VAR_0, 0xff, VAR_26);
 }

 return VAR_19;
}
