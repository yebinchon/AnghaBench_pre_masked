
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct intel_rotation_info {TYPE_1__* plane; } ;
struct drm_i915_gem_object {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {unsigned int width; unsigned int height; } ;


 int VAR_0 ;
 struct scatterlist* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_i915_gem_object*,unsigned long) ;
 int FUNC_2 (char*,unsigned int,unsigned int,unsigned long,...) ;
 unsigned long FUNC_3 (struct intel_rotation_info const*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*) ;
 struct scatterlist* FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static struct scatterlist *
FUNC_7(struct drm_i915_gem_object *VAR_2,
        const struct intel_rotation_info *VAR_3, unsigned int VAR_4,
        struct scatterlist *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->plane[VAR_4].width; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_3->plane[VAR_4].height; VAR_7++) {
   unsigned long VAR_8;
   dma_addr_t VAR_9;

   if (!VAR_5) {
    FUNC_2("Invalid sg table: too short at plane %d, (%d, %d)!\n",
           VAR_4, VAR_6, VAR_7);
    return FUNC_0(-VAR_0);
   }

   VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_6, VAR_7);
   VAR_9 = FUNC_1(VAR_2, VAR_8);

   if (FUNC_5(VAR_5) != VAR_1) {
    FUNC_2("Invalid sg.length, found %d, expected %lu for rotated page (%d, %d) [src index %lu]\n",
           FUNC_5(VAR_5), VAR_1,
           VAR_6, VAR_7, VAR_8);
    return FUNC_0(-VAR_0);
   }

   if (FUNC_4(VAR_5) != VAR_9) {
    FUNC_2("Invalid address for rotated page (%d, %d) [src index %lu]\n",
           VAR_6, VAR_7, VAR_8);
    return FUNC_0(-VAR_0);
   }

   VAR_5 = FUNC_6(VAR_5);
  }
 }

 return VAR_5;
}
