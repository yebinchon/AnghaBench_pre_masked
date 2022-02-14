
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_vram_object {int dummy; } ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int cursor_cache; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_gem_vram_object*) ;
 struct drm_gem_vram_object* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_gem_vram_object*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0)
{
 struct ast_private *VAR_1 = VAR_0->dev_private;
 struct drm_gem_vram_object *VAR_2 =
  FUNC_2(VAR_1->cursor_cache);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_1->cursor_cache);
}
