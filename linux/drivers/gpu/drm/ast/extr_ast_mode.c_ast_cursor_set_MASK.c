
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int u8 ;
typedef int u64 ;
typedef void* u32 ;
struct drm_gem_vram_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct ast_private {int next_cursor; struct drm_gem_object* cursor_cache; } ;
struct ast_crtc {void* offset_y; void* offset_x; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (char*,void*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct ast_private*,int ,int,int) ;
 int FUNC_5 (struct drm_crtc*) ;
 void* FUNC_6 (int *,int *,void*,void*) ;
 struct drm_gem_object* FUNC_7 (struct drm_file*,void*) ;
 int FUNC_8 (struct drm_gem_object*) ;
 int * FUNC_9 (struct drm_gem_vram_object*,int,int *) ;
 int FUNC_10 (struct drm_gem_vram_object*) ;
 struct drm_gem_vram_object* FUNC_11 (struct drm_gem_object*) ;
 scalar_t__ FUNC_12 (struct drm_gem_vram_object*) ;
 int FUNC_13 (struct drm_gem_vram_object*,int ) ;
 int FUNC_14 (struct drm_gem_vram_object*) ;
 struct ast_crtc* FUNC_15 (struct drm_crtc*) ;
 int FUNC_16 (void*,int *) ;

__attribute__((used)) static int FUNC_17(struct drm_crtc *VAR_12,
     struct drm_file *VAR_13,
     uint32_t VAR_14,
     uint32_t VAR_15,
     uint32_t VAR_16)
{
 struct ast_private *VAR_17 = VAR_12->dev->dev_private;
 struct ast_crtc *VAR_18 = FUNC_15(VAR_12);
 struct drm_gem_object *VAR_19;
 struct drm_gem_vram_object *VAR_20;
 s64 VAR_21;
 u64 VAR_22;
 u32 VAR_23;
 int VAR_24;
 u8 *VAR_25, *VAR_26;

 if (!VAR_14) {
  FUNC_3(VAR_12);
  return 0;
 }

 if (VAR_15 > VAR_9 || VAR_16 > VAR_8)
  return -VAR_10;

 VAR_19 = FUNC_7(VAR_13, VAR_14);
 if (!VAR_19) {
  FUNC_0("Cannot find cursor object %x for crtc\n", VAR_14);
  return -VAR_11;
 }
 VAR_20 = FUNC_11(VAR_19);

 VAR_24 = FUNC_13(VAR_20, 0);
 if (VAR_24)
  goto err_drm_gem_object_put_unlocked;
 VAR_25 = FUNC_9(VAR_20, 1, ((void*)0));
 if (FUNC_1(VAR_25)) {
  VAR_24 = FUNC_2(VAR_25);
  goto err_drm_gem_vram_unpin;
 }

 VAR_26 = FUNC_9(FUNC_11(VAR_17->cursor_cache),
    0, ((void*)0));
 if (FUNC_1(VAR_26)) {
  VAR_24 = FUNC_2(VAR_26);
  goto err_drm_gem_vram_kunmap;
 }
 VAR_21 = FUNC_12(FUNC_11(VAR_17->cursor_cache));
 if (VAR_21 < 0) {
  VAR_24 = (int)VAR_21;
  goto err_drm_gem_vram_kunmap;
 }

 VAR_26 += (VAR_6 + VAR_3)*VAR_17->next_cursor;


 VAR_23 = FUNC_6(VAR_25, VAR_26, VAR_15, VAR_16);


 {
  struct drm_gem_vram_object *VAR_27 =
   FUNC_11(VAR_17->cursor_cache);
  u8 *VAR_28 = FUNC_9(VAR_27, 0, ((void*)0));
  VAR_28 += (VAR_6 + VAR_3)*VAR_17->next_cursor + VAR_6;
  FUNC_16(VAR_23, VAR_28);
  FUNC_16(VAR_15, VAR_28 + VAR_4);
  FUNC_16(VAR_16, VAR_28 + VAR_5);
  FUNC_16(0, VAR_28 + VAR_1);
  FUNC_16(0, VAR_28 + VAR_2);


  VAR_22 = (u64)VAR_21;
  VAR_22 += (VAR_6 + VAR_3)*VAR_17->next_cursor;
  VAR_22 >>= 3;
  FUNC_4(VAR_17, VAR_7, 0xc8, VAR_22 & 0xff);
  FUNC_4(VAR_17, VAR_7, 0xc9, (VAR_22 >> 8) & 0xff);
  FUNC_4(VAR_17, VAR_7, 0xca, (VAR_22 >> 16) & 0xff);
 }
 VAR_18->offset_x = VAR_9 - VAR_15;
 VAR_18->offset_y = VAR_9 - VAR_16;

 VAR_17->next_cursor = (VAR_17->next_cursor + 1) % VAR_0;

 FUNC_5(VAR_12);

 FUNC_10(VAR_20);
 FUNC_14(VAR_20);
 FUNC_8(VAR_19);

 return 0;

err_drm_gem_vram_kunmap:
 FUNC_10(VAR_20);
err_drm_gem_vram_unpin:
 FUNC_14(VAR_20);
err_drm_gem_object_put_unlocked:
 FUNC_8(VAR_19);
 return VAR_24;
}
