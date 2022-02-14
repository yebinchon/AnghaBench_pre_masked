
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_renderstate_rodata {unsigned int batch_items; int* batch; unsigned int* reloc; } ;
struct intel_renderstate {int batch_size; unsigned int aux_offset; unsigned int aux_size; int obj; scalar_t__ batch_offset; TYPE_2__* vma; struct intel_renderstate_rodata* rodata; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int start; } ;
struct TYPE_4__ {TYPE_1__ node; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int*,unsigned int,int) ;
 int FUNC_5 (int*,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,unsigned int*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int* FUNC_10 (int ) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct intel_renderstate *VAR_6,
         struct drm_i915_private *VAR_7)
{
 const struct intel_renderstate_rodata *VAR_8 = VAR_6->rodata;
 unsigned int VAR_9 = 0, VAR_10 = 0;
 unsigned int VAR_11;
 u32 *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_8(VAR_6->obj, &VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_12 = FUNC_10(FUNC_7(VAR_6->obj, 0));

 while (VAR_9 < VAR_8->batch_items) {
  u32 VAR_14 = VAR_8->batch[VAR_9];

  if (VAR_9 * 4 == VAR_8->reloc[VAR_10]) {
   u64 VAR_15 = VAR_14 + VAR_6->vma->node.start;
   VAR_14 = FUNC_12(VAR_15);
   if (FUNC_2(VAR_7)) {
    if (VAR_9 + 1 >= VAR_8->batch_items ||
        VAR_8->batch[VAR_9 + 1] != 0)
     goto err;

    VAR_12[VAR_9++] = VAR_14;
    VAR_14 = FUNC_13(VAR_15);
   }

   VAR_10++;
  }

  VAR_12[VAR_9++] = VAR_14;
 }

 if (VAR_8->reloc[VAR_10] != -1) {
  FUNC_1("only %d relocs resolved\n", VAR_10);
  goto err;
 }

 VAR_6->batch_offset = FUNC_9(VAR_6->vma);
 VAR_6->batch_size = VAR_8->batch_items * sizeof(u32);

 while (VAR_9 % VAR_0)
  FUNC_4(VAR_12, VAR_9, VAR_5);

 VAR_6->aux_offset = VAR_9 * sizeof(u32);

 if (FUNC_3(VAR_7)) {
  u32 VAR_16 = 0x00777000;

  FUNC_4(VAR_12, VAR_9, VAR_3);
  FUNC_4(VAR_12, VAR_9, VAR_2);
  FUNC_4(VAR_12, VAR_9, VAR_16);
  FUNC_4(VAR_12, VAR_9, 0);
  FUNC_4(VAR_12, VAR_9, 0);
  FUNC_4(VAR_12, VAR_9, 0);
 }

 FUNC_4(VAR_12, VAR_9, VAR_4);
 VAR_6->aux_size = VAR_9 * sizeof(u32) - VAR_6->aux_offset;
 VAR_6->aux_offset += VAR_6->batch_offset;




 VAR_6->aux_size = FUNC_0(VAR_6->aux_size, 8);

 if (VAR_11)
  FUNC_5(VAR_12, VAR_9 * sizeof(u32));
 FUNC_11(VAR_12);

 VAR_13 = 0;
out:
 FUNC_6(VAR_6->obj);
 return VAR_13;

err:
 FUNC_11(VAR_12);
 VAR_13 = -VAR_1;
 goto out;
}
