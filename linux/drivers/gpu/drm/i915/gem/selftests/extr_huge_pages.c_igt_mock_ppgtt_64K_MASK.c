
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct object_info TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int sg; unsigned int gtt; } ;
struct TYPE_9__ {int size; int start; } ;
struct TYPE_7__ {int sg; } ;
struct TYPE_8__ {TYPE_1__ page_sizes; } ;
struct i915_vma {TYPE_4__ page_sizes; TYPE_3__ node; TYPE_2__ mm; } ;
struct TYPE_11__ {struct drm_i915_private* i915; } ;
struct i915_ppgtt {TYPE_5__ vm; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {TYPE_4__ page_sizes; TYPE_3__ node; TYPE_2__ mm; } ;
struct object_info {unsigned int size; unsigned int gtt; unsigned int offset; } ;


 int FUNC_0 (TYPE_6__ const*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct i915_vma*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_4 (struct i915_vma*) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_5 (struct i915_vma*,int ) ;
 struct i915_vma* FUNC_6 (struct drm_i915_private*,unsigned int,int) ;
 int FUNC_7 (struct i915_vma*) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (struct i915_vma*) ;
 int FUNC_10 (struct i915_vma*) ;
 struct i915_vma* FUNC_11 (struct i915_vma*,TYPE_5__*,int *) ;
 int FUNC_12 (struct i915_vma*,int ,int ,unsigned int) ;
 int FUNC_13 (struct i915_vma*) ;
 int FUNC_14 (struct i915_vma*) ;
 int FUNC_15 (char*,unsigned int,...) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(void *VAR_11)
{
 struct i915_ppgtt *VAR_12 = VAR_11;
 struct drm_i915_private *VAR_13 = VAR_12->vm.i915;
 struct drm_i915_gem_object *VAR_14;
 const struct object_info {
  unsigned int size;
  unsigned int gtt;
  unsigned int offset;
 } VAR_15[] = {

  {
   .size = VAR_10,
   .gtt = VAR_3,
   .offset = 0,
  },
  {
   .size = VAR_10 + VAR_9,
   .gtt = VAR_2,
   .offset = 0,
  },
  {
   .size = VAR_10 - VAR_9,
   .gtt = VAR_2,
   .offset = 0,
  },
  {
   .size = VAR_8,
   .gtt = VAR_3,
   .offset = 0,
  },
  {
   .size = VAR_8 - VAR_9,
   .gtt = VAR_2,
   .offset = 0,
  },
  {
   .size = VAR_8 + VAR_9,
   .gtt = VAR_3 | VAR_2,
   .offset = 0,
  },
  {
   .size = VAR_8 + VAR_10,
   .gtt = VAR_3,
   .offset = 0,
  },
  {
   .size = VAR_8 - VAR_10,
   .gtt = VAR_3,
   .offset = 0,
  },

  {
   .size = VAR_10,
   .offset = VAR_8,
   .gtt = VAR_2,
  },
  {
   .size = VAR_7,
   .offset = VAR_8 - VAR_10,
   .gtt = VAR_2,
  },
 };
 struct i915_vma *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;







 if (!FUNC_1(VAR_13, VAR_3))
  return 0;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_15); ++VAR_17) {
  unsigned int VAR_20 = VAR_15[VAR_17].size;
  unsigned int VAR_21 = VAR_15[VAR_17].gtt;
  unsigned int VAR_22 = VAR_15[VAR_17].offset;
  unsigned int VAR_23 = VAR_6;

  for (VAR_18 = 0; VAR_18 <= 1; VAR_18++) {
   VAR_14 = FUNC_6(VAR_13, VAR_20, !!VAR_18);
   if (FUNC_3(VAR_14))
    return FUNC_4(VAR_14);

   VAR_19 = FUNC_7(VAR_14);
   if (VAR_19)
    goto out_object_put;





   VAR_14->mm.page_sizes.sg &= ~VAR_1;

   VAR_16 = FUNC_11(VAR_14, &VAR_12->vm, ((void*)0));
   if (FUNC_3(VAR_16)) {
    VAR_19 = FUNC_4(VAR_16);
    goto out_object_unpin;
   }

   if (VAR_22)
    VAR_23 |= VAR_5 | VAR_22;

   VAR_19 = FUNC_12(VAR_16, 0, 0, VAR_23);
   if (VAR_19)
    goto out_vma_close;

   VAR_19 = FUNC_14(VAR_16);
   if (VAR_19)
    goto out_vma_unpin;

   if (!VAR_22 && VAR_16->page_sizes.sg & VAR_3) {
    if (!FUNC_2(VAR_16->node.start,
      VAR_1)) {
     FUNC_15("node.start(%llx) not aligned to 2M\n",
            VAR_16->node.start);
     VAR_19 = -VAR_0;
     goto out_vma_unpin;
    }

    if (!FUNC_2(VAR_16->node.size,
      VAR_1)) {
     FUNC_15("node.size(%llx) not aligned to 2M\n",
            VAR_16->node.size);
     VAR_19 = -VAR_0;
     goto out_vma_unpin;
    }
   }

   if (VAR_16->page_sizes.gtt != VAR_21) {
    FUNC_15("gtt=%u, expected=%u, i=%d, single=%s\n",
           VAR_16->page_sizes.gtt, VAR_21, VAR_17,
           FUNC_16(!!VAR_18));
    VAR_19 = -VAR_0;
    goto out_vma_unpin;
   }

   FUNC_13(VAR_16);
   FUNC_10(VAR_16);

   FUNC_9(VAR_14);
   FUNC_5(VAR_14, VAR_4);
   FUNC_8(VAR_14);
  }
 }

 return 0;

out_vma_unpin:
 FUNC_13(VAR_16);
out_vma_close:
 FUNC_10(VAR_16);
out_object_unpin:
 FUNC_9(VAR_14);
out_object_put:
 FUNC_8(VAR_14);

 return VAR_19;
}
