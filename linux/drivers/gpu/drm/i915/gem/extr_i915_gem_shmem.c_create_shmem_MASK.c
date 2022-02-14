
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ gemfs; } ;
struct drm_i915_private {TYPE_1__ mm; int drm; } ;
struct drm_gem_object {struct file* filp; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 unsigned long VAR_0 ;
 int FUNC_2 (int *,struct drm_gem_object*,size_t) ;
 struct file* FUNC_3 (char*,size_t,unsigned long) ;
 struct file* FUNC_4 (scalar_t__,char*,size_t,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct drm_i915_private *VAR_1,
   struct drm_gem_object *VAR_2,
   size_t VAR_3)
{
 unsigned long VAR_4 = VAR_0;
 struct file *VAR_5;

 FUNC_2(&VAR_1->drm, VAR_2, VAR_3);

 if (VAR_1->mm.gemfs)
  VAR_5 = FUNC_4(VAR_1->mm.gemfs, "i915", VAR_3,
       VAR_4);
 else
  VAR_5 = FUNC_3("i915", VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_2->filp = VAR_5;
 return 0;
}
