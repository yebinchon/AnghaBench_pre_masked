
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {struct drm_gem_vram_object* pixels_current; struct drm_gem_vram_object* pixels_2; struct drm_gem_vram_object* pixels_1; } ;
struct mga_device {TYPE_1__ cursor; } ;
struct drm_gem_vram_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_2__* pdev; scalar_t__ dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*) ;
 struct drm_gem_object* FUNC_8 (struct drm_file*,int) ;
 int FUNC_9 (struct drm_gem_object*) ;
 int* FUNC_10 (struct drm_gem_vram_object*,int,int *) ;
 int FUNC_11 (struct drm_gem_vram_object*) ;
 struct drm_gem_vram_object* FUNC_12 (struct drm_gem_object*) ;
 scalar_t__ FUNC_13 (struct drm_gem_vram_object*) ;
 int FUNC_14 (struct drm_gem_vram_object*,int ) ;
 int FUNC_15 (struct drm_gem_vram_object*) ;
 int FUNC_16 (int*) ;
 int FUNC_17 (int*,int*,int) ;
 int FUNC_18 (int*,int ,int) ;
 int FUNC_19 (struct mga_device*) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_20(struct drm_crtc *VAR_11,
   struct drm_file *VAR_12,
   uint32_t VAR_13,
   uint32_t VAR_14,
   uint32_t VAR_15)
{
 struct drm_device *VAR_16 = VAR_11->dev;
 struct mga_device *VAR_17 = (struct mga_device *)VAR_16->dev_private;
 struct drm_gem_vram_object *VAR_18 = VAR_17->cursor.pixels_1;
 struct drm_gem_vram_object *VAR_19 = VAR_17->cursor.pixels_2;
 struct drm_gem_vram_object *VAR_20 = VAR_17->cursor.pixels_current;
 struct drm_gem_vram_object *VAR_21;
 struct drm_gem_object *VAR_22;
 struct drm_gem_vram_object *VAR_23 = ((void*)0);
 int VAR_24 = 0;
 u8 *VAR_25, *VAR_26;
 unsigned int VAR_27, VAR_28, VAR_29;
 uint32_t VAR_30[16];
 uint32_t *VAR_31 = &VAR_30[0];
 uint32_t *VAR_32;
 uint32_t VAR_33;
 bool VAR_34 = 0;
 int VAR_35 = 0;
 s64 VAR_36;
 u64 VAR_37;
 u8 VAR_38;
 u8 VAR_39[48];

 if (!VAR_18 || !VAR_19) {
  FUNC_4(VAR_8, 0);
  FUNC_4(VAR_7, 0);
  return -VAR_3;
 }

 if (FUNC_3(VAR_20 &&
      VAR_18 != VAR_20 &&
      VAR_19 != VAR_20)) {
  return -VAR_3;
 }

 if (!VAR_13 || !VAR_12) {
  FUNC_19(VAR_17);
  return 0;
 }

 if (VAR_14 != 64 || VAR_15 != 64) {
  FUNC_4(VAR_8, 0);
  FUNC_4(VAR_7, 0);
  return -VAR_1;
 }

 if (VAR_20 == VAR_18)
  VAR_21 = VAR_19;
 else
  VAR_21 = VAR_18;

 VAR_22 = FUNC_8(VAR_12, VAR_13);
 if (!VAR_22)
  return -VAR_2;
 VAR_23 = FUNC_12(VAR_22);
 VAR_24 = FUNC_14(VAR_23, 0);
 if (VAR_24) {
  FUNC_6(&VAR_16->pdev->dev, "failed to lock user bo\n");
  goto err_drm_gem_object_put_unlocked;
 }
 VAR_25 = FUNC_10(VAR_23, 1, ((void*)0));
 if (FUNC_1(VAR_25)) {
  VAR_24 = FUNC_2(VAR_25);
  FUNC_6(&VAR_16->pdev->dev,
   "failed to kmap user buffer updates\n");
  goto err_drm_gem_vram_unpin_src;
 }


 VAR_24 = FUNC_14(VAR_21, VAR_0);
 if (VAR_24) {
  FUNC_6(&VAR_16->pdev->dev,
   "failed to pin cursor buffer: %d\n", VAR_24);
  goto err_drm_gem_vram_kunmap_src;
 }
 VAR_26 = FUNC_10(VAR_21, 1, ((void*)0));
 if (FUNC_1(VAR_26)) {
  VAR_24 = FUNC_2(VAR_26);
  FUNC_6(&VAR_16->pdev->dev,
   "failed to kmap cursor updates: %d\n", VAR_24);
  goto err_drm_gem_vram_unpin_dst;
 }
 VAR_36 = FUNC_13(VAR_21);
 if (VAR_36 < 0) {
  VAR_24 = (int)VAR_36;
  FUNC_6(&VAR_16->pdev->dev,
   "failed to get cursor scanout address: %d\n", VAR_24);
  goto err_drm_gem_vram_kunmap_dst;
 }
 VAR_37 = (u64)VAR_36;

 FUNC_18(&VAR_30[0], 0, sizeof(uint32_t)*16);

 for (VAR_27 = 0; VAR_27 < 16384; VAR_27 += 4) {
  VAR_33 = FUNC_16(VAR_25 + VAR_27);

  if (VAR_33>>24 != 0xff &&
   VAR_33>>24 != 0x0) {
   if (VAR_10) {
    FUNC_7(&VAR_16->pdev->dev, "Video card doesn't support cursors with partial transparency.\n");
    FUNC_7(&VAR_16->pdev->dev, "Not enabling hardware cursor.\n");
    VAR_10 = 0;
   }
   VAR_24 = -VAR_1;
   goto err_drm_gem_vram_kunmap_dst;
  }

  if (VAR_33>>24 == 0x0)
   continue;
  VAR_34 = 0;
  for (VAR_32 = &VAR_30[0]; VAR_32 != VAR_31; VAR_32++) {
   if (*VAR_32 == VAR_33) {
    VAR_34 = 1;
    break;
   }
  }
  if (VAR_34)
   continue;

  if (VAR_35 >= 16) {
   if (VAR_9) {
    FUNC_7(&VAR_16->pdev->dev, "Video card only supports cursors with up to 16 colours.\n");
    FUNC_7(&VAR_16->pdev->dev, "Not enabling hardware cursor.\n");
    VAR_9 = 0;
   }
   VAR_24 = -VAR_1;
   goto err_drm_gem_vram_kunmap_dst;
  }
  *VAR_31 = VAR_33;
  VAR_31++;
  VAR_35++;
 }


 for (VAR_27 = 0; VAR_27 < VAR_35; VAR_27++) {
  if (VAR_27 <= 2)
   VAR_38 = 0x8 + VAR_27*0x4;
  else
   VAR_38 = 0x60 + VAR_27*0x3;
  FUNC_5(VAR_38, VAR_30[VAR_27] & 0xff);
  FUNC_5(VAR_38+1, VAR_30[VAR_27]>>8 & 0xff);
  FUNC_5(VAR_38+2, VAR_30[VAR_27]>>16 & 0xff);
  FUNC_0((VAR_30[VAR_27]>>24 & 0xff) != 0xff);
 }


 for (VAR_28 = 0; VAR_28 < 64; VAR_28++) {
  FUNC_18(&VAR_39[0], 0, 48);
  for (VAR_29 = 0; VAR_29 < 64; VAR_29++) {
   VAR_33 = FUNC_16(VAR_25 + 4*(VAR_29 + 64*VAR_28));

   if (VAR_33>>24 == 0x0) {
    VAR_39[47 - VAR_29/8] |= 0x80>>(VAR_29%8);
    continue;
   }


   for (VAR_27 = 0; VAR_27 < VAR_35; VAR_27++) {
    if (VAR_30[VAR_27] == VAR_33) {
     if (VAR_29 % 2)
      VAR_39[VAR_29/2] |= VAR_27<<4;
     else
      VAR_39[VAR_29/2] |= VAR_27;
     break;
    }
   }
  }
  FUNC_17(VAR_26 + VAR_28*48, &VAR_39[0], 48);
 }


 FUNC_5(VAR_5, (u8)((VAR_37>>10) & 0xff));
 FUNC_5(VAR_4, (u8)((VAR_37>>18) & 0x3f));


 FUNC_5(VAR_6, 4);


 if (VAR_20)
  FUNC_15(VAR_20);
 VAR_17->cursor.pixels_current = VAR_21;

 FUNC_11(VAR_21);
 FUNC_11(VAR_23);
 FUNC_15(VAR_23);
 FUNC_9(VAR_22);

 return 0;

err_drm_gem_vram_kunmap_dst:
 FUNC_11(VAR_21);
err_drm_gem_vram_unpin_dst:
 FUNC_15(VAR_21);
err_drm_gem_vram_kunmap_src:
 FUNC_11(VAR_23);
err_drm_gem_vram_unpin_src:
 FUNC_15(VAR_23);
err_drm_gem_object_put_unlocked:
 FUNC_9(VAR_22);
 return VAR_24;
}
