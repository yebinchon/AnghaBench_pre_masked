
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct nvkm_gpio {int dummy; } ;
struct TYPE_4__ {int tvdactestval; } ;
struct TYPE_3__ {int device; } ;
struct nouveau_drm {TYPE_2__ vbios; TYPE_1__ client; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int,int) ;
 int FUNC_1 (struct drm_device*,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct nvkm_gpio*,int ,int ,int) ;
 int FUNC_7 (struct nvkm_gpio*,int ,int ,int,int) ;
 struct nvkm_gpio* FUNC_8 (int *) ;

__attribute__((used)) static uint32_t FUNC_9(struct drm_encoder *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->dev;
 struct nouveau_drm *VAR_15 = FUNC_4(VAR_14);
 struct nvkm_gpio *VAR_16 = FUNC_8(&VAR_15->client.device);
 uint32_t VAR_17, VAR_18 = FUNC_5(VAR_13);
 uint32_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23,
  VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 uint32_t VAR_30 = 0;
 int VAR_31;


 VAR_17 = (0x82 << 0 | 0xeb << 10 | 0x82 << 20);
 if (VAR_15->vbios.tvdactestval)
  VAR_17 = VAR_15->vbios.tvdactestval;

 VAR_26 = FUNC_0(VAR_14, 0, VAR_2 + VAR_18);
 VAR_31 = (VAR_26 & 0x100) >> 8;


 VAR_20 = FUNC_6(VAR_16, 0, VAR_1, 0xff);
 VAR_19 = FUNC_6(VAR_16, 0, VAR_0, 0xff);
 VAR_21 = FUNC_0(VAR_14, VAR_31, VAR_5);
 VAR_22 = FUNC_0(VAR_14, VAR_31, VAR_4);
 VAR_23 = FUNC_0(VAR_14, VAR_31, VAR_3);
 VAR_24 = FUNC_0(VAR_14, VAR_31, VAR_6);
 VAR_25 = FUNC_0(VAR_14, 0, VAR_12 + VAR_18);
 VAR_28 = FUNC_0(VAR_14, VAR_31, 0x680c1c);
 VAR_27 = FUNC_0(VAR_14, VAR_31, 0x680c14);
 VAR_29 = FUNC_0(VAR_14, VAR_31, 0x680c6c);


 FUNC_7(VAR_16, 0, VAR_1, 0xff, 1);
 FUNC_7(VAR_16, 0, VAR_0, 0xff, 1);

 FUNC_1(VAR_14, VAR_31, VAR_5, 1343);
 FUNC_1(VAR_14, VAR_31, VAR_4, 1047);
 FUNC_1(VAR_14, VAR_31, VAR_3, 1183);
 FUNC_1(VAR_14, VAR_31, VAR_6,
        VAR_7 |
        VAR_11 |
        VAR_9 |
        VAR_8 |
        VAR_10);

 FUNC_1(VAR_14, 0, VAR_12 + VAR_18, 0);

 FUNC_1(VAR_14, 0, VAR_2 + VAR_18,
        (VAR_26 & ~0xff) | 0x22);
 FUNC_3(1);
 FUNC_1(VAR_14, 0, VAR_2 + VAR_18,
        (VAR_26 & ~0xff) | 0x21);

 FUNC_1(VAR_14, VAR_31, 0x680c1c, 1 << 20);
 FUNC_1(VAR_14, VAR_31, 0x680c14, 4 << 16);


 FUNC_1(VAR_14, VAR_31, 0x680c6c, VAR_17 >> 10 & 0x3ff);
 FUNC_3(20);
 VAR_30 |= FUNC_0(VAR_14, 0, VAR_12 + VAR_18)
  & 0x4 << 28;


 FUNC_1(VAR_14, VAR_31, 0x680c6c, VAR_17 & 0x3ff);
 FUNC_3(20);
 VAR_30 |= FUNC_0(VAR_14, 0, VAR_12 + VAR_18)
  & 0xa << 28;


 FUNC_1(VAR_14, VAR_31, 0x680c1c, VAR_28);
 FUNC_1(VAR_14, VAR_31, 0x680c14, VAR_27);
 FUNC_1(VAR_14, VAR_31, 0x680c6c, VAR_29);
 FUNC_1(VAR_14, 0, VAR_2 + VAR_18, VAR_26);
 FUNC_1(VAR_14, 0, VAR_12 + VAR_18, VAR_25);
 FUNC_1(VAR_14, VAR_31, VAR_6, VAR_24);
 FUNC_1(VAR_14, VAR_31, VAR_3, VAR_23);
 FUNC_1(VAR_14, VAR_31, VAR_4, VAR_22);
 FUNC_1(VAR_14, VAR_31, VAR_5, VAR_21);
 FUNC_7(VAR_16, 0, VAR_1, 0xff, VAR_20);
 FUNC_7(VAR_16, 0, VAR_0, 0xff, VAR_19);

 return VAR_30;
}
