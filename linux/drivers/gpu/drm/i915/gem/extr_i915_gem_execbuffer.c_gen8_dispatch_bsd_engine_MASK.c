
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_i915_file_private {int bsd_engine; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static unsigned int
FUNC_2(struct drm_i915_private *VAR_0,
    struct drm_file *VAR_1)
{
 struct drm_i915_file_private *VAR_2 = VAR_1->driver_priv;


 if ((int)VAR_2->bsd_engine < 0)
  VAR_2->bsd_engine =
   FUNC_0() % FUNC_1(VAR_0);

 return VAR_2->bsd_engine;
}
