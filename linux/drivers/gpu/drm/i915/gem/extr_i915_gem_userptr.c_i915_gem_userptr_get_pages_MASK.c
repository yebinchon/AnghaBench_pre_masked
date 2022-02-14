
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct TYPE_7__ {int ptr; struct sg_table* work; TYPE_2__* mm; } ;
struct TYPE_5__ {int size; } ;
struct drm_i915_gem_object {TYPE_3__ userptr; TYPE_1__ base; } ;
struct TYPE_8__ {struct mm_struct* mm; } ;
struct TYPE_6__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sg_table*) ;
 int VAR_2 ;
 int FUNC_2 (struct sg_table*) ;
 int FUNC_3 (struct sg_table*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int const,int,struct page**) ;
 struct sg_table* FUNC_5 (struct drm_i915_gem_object*,struct page**,int const) ;
 struct sg_table* FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*,int) ;
 TYPE_4__* VAR_5 ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 int FUNC_9 (struct page**) ;
 struct page** FUNC_10 (int const,int,int) ;
 int FUNC_11 (struct page**,int) ;

__attribute__((used)) static int FUNC_12(struct drm_i915_gem_object *VAR_6)
{
 const int VAR_7 = VAR_6->base.size >> VAR_2;
 struct mm_struct *VAR_8 = VAR_6->userptr.mm->mm;
 struct page **VAR_9;
 struct sg_table *VAR_10;
 bool VAR_11;
 int VAR_12;
 if (VAR_6->userptr.work) {

  if (FUNC_1(VAR_6->userptr.work))
   return FUNC_2(VAR_6->userptr.work);
  else
   return -VAR_0;
 }

 VAR_9 = ((void*)0);
 VAR_12 = 0;

 if (VAR_8 == VAR_5->mm) {
  VAR_9 = FUNC_10(VAR_7, sizeof(struct page *),
          VAR_1 |
          VAR_3 |
          VAR_4);
  if (VAR_9)
   VAR_12 = FUNC_4(VAR_6->userptr.ptr,
             VAR_7,
             !FUNC_8(VAR_6),
             VAR_9);
 }

 VAR_11 = 0;
 if (VAR_12 < 0) {
  VAR_10 = FUNC_0(VAR_12);
  VAR_12 = 0;
 } else if (VAR_12 < VAR_7) {
  VAR_10 = FUNC_6(VAR_6);
  VAR_11 = VAR_10 == FUNC_0(-VAR_0);
 } else {
  VAR_10 = FUNC_5(VAR_6, VAR_9, VAR_7);
  VAR_11 = !FUNC_1(VAR_10);
 }
 if (VAR_11)
  FUNC_7(VAR_6, 1);

 if (FUNC_1(VAR_10))
  FUNC_11(VAR_9, VAR_12);
 FUNC_9(VAR_9);

 return FUNC_3(VAR_10);
}
