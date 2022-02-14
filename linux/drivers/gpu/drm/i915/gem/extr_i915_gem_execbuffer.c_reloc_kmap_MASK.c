
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* mm; } ;
struct reloc_cache {long vaddr; unsigned long page; TYPE_1__ node; } ;
struct drm_i915_gem_object {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 void* FUNC_1 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct drm_i915_gem_object*,unsigned long) ;
 int FUNC_3 (struct drm_i915_gem_object*,unsigned int*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 unsigned long FUNC_7 (unsigned long) ;
 int FUNC_8 (long) ;

__attribute__((used)) static void *FUNC_9(struct drm_i915_gem_object *VAR_3,
   struct reloc_cache *VAR_4,
   unsigned long VAR_5)
{
 void *VAR_6;

 if (VAR_4->vaddr) {
  FUNC_5(FUNC_8(VAR_4->vaddr));
 } else {
  unsigned int VAR_7;
  int VAR_8;

  VAR_8 = FUNC_3(VAR_3, &VAR_7);
  if (VAR_8)
   return FUNC_1(VAR_8);

  FUNC_0(VAR_1 & VAR_0);
  FUNC_0((VAR_1 | VAR_0) & VAR_2);

  VAR_4->vaddr = VAR_7 | VAR_1;
  VAR_4->node.mm = (void *)VAR_3;
  if (VAR_7)
   FUNC_6();
 }

 VAR_6 = FUNC_4(FUNC_2(VAR_3, VAR_5));
 VAR_4->vaddr = FUNC_7(VAR_4->vaddr) | (unsigned long)VAR_6;
 VAR_4->page = VAR_5;

 return VAR_6;
}
