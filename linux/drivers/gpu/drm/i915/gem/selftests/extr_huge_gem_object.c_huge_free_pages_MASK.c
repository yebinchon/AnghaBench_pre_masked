
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {struct scatterlist* sgl; } ;
struct scatterlist {int dummy; } ;
struct drm_i915_gem_object {unsigned long scratch; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct sg_table*) ;
 int FUNC_3 (struct sg_table*) ;
 int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_gem_object *VAR_1,
       struct sg_table *VAR_2)
{
 unsigned long VAR_3 = VAR_1->scratch / VAR_0;
 struct scatterlist *VAR_4;

 for (VAR_4 = VAR_2->sgl; VAR_4 && VAR_3--; VAR_4 = FUNC_1(VAR_4))
  FUNC_0(FUNC_4(VAR_4));

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}
