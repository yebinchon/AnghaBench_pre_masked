
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void scatterlist ;
struct i915_gem_object_page_iter {unsigned int sg_idx; int radix; int lock; void* sg_pos; } ;
struct TYPE_4__ {unsigned int size; } ;
struct TYPE_3__ {struct i915_gem_object_page_iter get_page; } ;
struct drm_i915_gem_object {TYPE_2__ base; TYPE_1__ mm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 void* FUNC_2 (void*) ;
 unsigned int FUNC_3 (void*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned int,void*) ;
 void* FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (void*) ;
 void* FUNC_14 (unsigned int) ;
 unsigned long FUNC_15 (void*) ;

struct scatterlist *
FUNC_16(struct drm_i915_gem_object *VAR_2,
         unsigned int VAR_3,
         unsigned int *VAR_4)
{
 struct i915_gem_object_page_iter *VAR_5 = &VAR_2->mm.get_page;
 struct scatterlist *VAR_6;
 unsigned int VAR_7, VAR_8;

 FUNC_5();
 FUNC_0(VAR_3 >= VAR_2->base.size >> VAR_1);
 FUNC_0(!FUNC_4(VAR_2));
 if (VAR_3 < FUNC_1(VAR_5->sg_idx))
  goto lookup;

 FUNC_6(&VAR_5->lock);






 VAR_6 = VAR_5->sg_pos;
 VAR_7 = VAR_5->sg_idx;
 VAR_8 = FUNC_3(VAR_6);

 while (VAR_7 + VAR_8 <= VAR_3) {
  void *VAR_9;
  unsigned long VAR_10;
  int VAR_11;
  VAR_11 = FUNC_8(&VAR_5->radix, VAR_7, VAR_6);
  if (VAR_11 && VAR_11 != -VAR_0)
   goto scan;

  VAR_9 = FUNC_14(VAR_7);
  for (VAR_10 = 1; VAR_10 < VAR_8; VAR_10++) {
   VAR_11 = FUNC_8(&VAR_5->radix, VAR_7 + VAR_10, VAR_9);
   if (VAR_11 && VAR_11 != -VAR_0)
    goto scan;
  }

  VAR_7 += VAR_8;
  VAR_6 = FUNC_2(VAR_6);
  VAR_8 = FUNC_3(VAR_6);
 }

scan:
 VAR_5->sg_pos = VAR_6;
 VAR_5->sg_idx = VAR_7;

 FUNC_7(&VAR_5->lock);

 if (FUNC_12(VAR_3 < VAR_7))
  goto lookup;




 while (VAR_7 + VAR_8 <= VAR_3) {
  VAR_7 += VAR_8;
  VAR_6 = FUNC_2(VAR_6);
  VAR_8 = FUNC_3(VAR_6);
 }

 *VAR_4 = VAR_3 - VAR_7;
 return VAR_6;

lookup:
 FUNC_10();

 VAR_6 = FUNC_9(&VAR_5->radix, VAR_3);
 FUNC_0(!VAR_6);







 *VAR_4 = 0;
 if (FUNC_12(FUNC_13(VAR_6))) {
  unsigned long VAR_12 = FUNC_15(VAR_6);

  VAR_6 = FUNC_9(&VAR_5->radix, VAR_12);
  FUNC_0(!VAR_6);

  *VAR_4 = VAR_3 - VAR_12;
 }

 FUNC_11();

 return VAR_6;
}
