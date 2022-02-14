
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_printer {int dummy; } ;
struct a6xx_shader_block {int size; int name; } ;
struct a6xx_gpu_state_obj {scalar_t__ data; struct a6xx_shader_block* handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_printer*,char*,int) ;
 int FUNC_1 (struct drm_printer*,int,scalar_t__) ;
 int FUNC_2 (struct drm_printer*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct a6xx_gpu_state_obj *VAR_1,
  struct drm_printer *VAR_2)
{
 const struct a6xx_shader_block *VAR_3 = VAR_1->handle;
 int VAR_4;

 if (!VAR_1->handle)
  return;

 FUNC_2(VAR_2, "  - type: ", VAR_3->name);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_2, "    - bank: %d\n", VAR_4);
  FUNC_0(VAR_2, "      size: %d\n", VAR_3->size);

  if (!VAR_1->data)
   continue;

  FUNC_1(VAR_2, VAR_3->size << 2,
   VAR_1->data + (VAR_3->size * VAR_4));
 }
}
