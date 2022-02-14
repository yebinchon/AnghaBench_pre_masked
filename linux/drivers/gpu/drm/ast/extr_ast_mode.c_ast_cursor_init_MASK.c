
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_vram_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {struct drm_gem_object* cursor_cache; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct drm_device*,int,int,struct drm_gem_object**) ;
 void* FUNC_3 (struct drm_gem_vram_object*,int,int *) ;
 struct drm_gem_vram_object* FUNC_4 (struct drm_gem_object*) ;
 scalar_t__ FUNC_5 (struct drm_gem_vram_object*) ;
 int FUNC_6 (struct drm_gem_vram_object*,int ) ;
 int FUNC_7 (struct drm_gem_vram_object*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_4)
{
 struct ast_private *VAR_5 = VAR_4->dev_private;
 int VAR_6;
 int VAR_7;
 struct drm_gem_object *VAR_8;
 struct drm_gem_vram_object *VAR_9;
 s64 VAR_10;
 void *VAR_11;

 VAR_6 = (VAR_2 + VAR_1) * VAR_0;

 VAR_7 = FUNC_2(VAR_4, VAR_6, 1, &VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_9 = FUNC_4(VAR_8);
 VAR_7 = FUNC_6(VAR_9, VAR_3);
 if (VAR_7)
  goto fail;
 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10 < 0) {
  FUNC_7(VAR_9);
  VAR_7 = (int)VAR_10;
  goto fail;
 }


 VAR_11 = FUNC_3(VAR_9, 1, ((void*)0));
 if (FUNC_0(VAR_11)) {
  VAR_7 = FUNC_1(VAR_11);
  goto fail;
 }

 VAR_5->cursor_cache = VAR_8;
 return 0;
fail:
 return VAR_7;
}
