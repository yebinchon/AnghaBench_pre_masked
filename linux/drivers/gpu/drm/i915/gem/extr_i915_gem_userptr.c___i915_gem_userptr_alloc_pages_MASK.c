
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int sgl; } ;
struct page {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct drm_i915_gem_object*,struct sg_table*,unsigned int) ;
 int FUNC_2 (struct sg_table*,struct page**,int,int ,int,unsigned int,int ) ;
 int FUNC_3 (struct drm_i915_gem_object*,struct sg_table*) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (struct sg_table*) ;
 struct sg_table* FUNC_7 (int,int ) ;
 int FUNC_8 (struct sg_table*) ;

__attribute__((used)) static struct sg_table *
FUNC_9(struct drm_i915_gem_object *VAR_4,
          struct page **VAR_5, int VAR_6)
{
 unsigned int VAR_7 = FUNC_5();
 struct sg_table *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

alloc_table:
 VAR_10 = FUNC_2(VAR_8, VAR_5, VAR_6,
       0, VAR_6 << VAR_2,
       VAR_7,
       VAR_1);
 if (VAR_10) {
  FUNC_6(VAR_8);
  return FUNC_0(VAR_10);
 }

 VAR_10 = FUNC_3(VAR_4, VAR_8);
 if (VAR_10) {
  FUNC_8(VAR_8);

  if (VAR_7 > VAR_3) {
   VAR_7 = VAR_3;
   goto alloc_table;
  }

  FUNC_6(VAR_8);
  return FUNC_0(VAR_10);
 }

 VAR_9 = FUNC_4(VAR_8->sgl);

 FUNC_1(VAR_4, VAR_8, VAR_9);

 return VAR_8;
}
