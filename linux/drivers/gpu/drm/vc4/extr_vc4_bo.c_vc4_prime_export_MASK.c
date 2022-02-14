
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_bo {scalar_t__ validated_shader; } ;
struct drm_gem_object {int dummy; } ;
struct dma_buf {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct dma_buf* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct dma_buf*) ;
 struct dma_buf* FUNC_4 (struct drm_gem_object*,int) ;
 struct vc4_bo* FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct vc4_bo*) ;
 int FUNC_7 (struct vc4_bo*) ;

struct dma_buf * FUNC_8(struct drm_gem_object *VAR_1, int VAR_2)
{
 struct vc4_bo *VAR_3 = FUNC_5(VAR_1);
 struct dma_buf *VAR_4;
 int VAR_5;

 if (VAR_3->validated_shader) {
  FUNC_0("Attempting to export shader BO\n");
  return FUNC_2(-VAR_0);
 }






 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5) {
  FUNC_1("Failed to increment BO usecnt\n");
  return FUNC_2(VAR_5);
 }

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_3(VAR_4))
  FUNC_6(VAR_3);

 return VAR_4;
}
