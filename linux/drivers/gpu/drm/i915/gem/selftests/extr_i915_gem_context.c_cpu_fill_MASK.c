
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_gem_object {int read_domains; scalar_t__ write_domain; TYPE_1__ base; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*,unsigned int) ;
 int FUNC_4 (struct drm_i915_gem_object*,unsigned int*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct drm_i915_gem_object *VAR_4, u32 VAR_5)
{
 const bool VAR_6 = FUNC_0(FUNC_8(VAR_4->base.dev));
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_4, &VAR_9);
 if (VAR_10)
  return VAR_10;

 for (VAR_7 = 0; VAR_7 < FUNC_7(VAR_4); VAR_7++) {
  u32 *VAR_11;

  VAR_11 = FUNC_5(FUNC_3(VAR_4, VAR_7));
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   VAR_11[VAR_8] = VAR_5;
  if (!VAR_6)
   FUNC_1(VAR_11, VAR_3);
  FUNC_6(VAR_11);
 }

 FUNC_2(VAR_4);
 VAR_4->read_domains = VAR_2 | VAR_1;
 VAR_4->write_domain = 0;
 return 0;
}
