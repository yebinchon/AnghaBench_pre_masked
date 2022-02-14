
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct parser_exec_state {scalar_t__ buf_addr_type; scalar_t__ buf_type; unsigned long ip_gma; TYPE_5__* ip_va; TYPE_5__* rb_va; int is_ctx_wa; TYPE_4__* workload; struct intel_vgpu* vgpu; } ;
struct intel_vgpu_shadow_bb {int ppgtt; int clflush; int accessing; TYPE_5__* obj; TYPE_5__* va; TYPE_5__* bb_offset; TYPE_5__* bb_start_cmd_va; int list; } ;
struct intel_vgpu_mm {int dummy; } ;
struct TYPE_17__ {struct intel_vgpu_mm* ggtt_mm; } ;
struct intel_vgpu {TYPE_2__* gvt; TYPE_1__ gtt; } ;
struct TYPE_19__ {int size; } ;
struct TYPE_21__ {TYPE_3__ base; } ;
struct TYPE_20__ {int shadow_bb; struct intel_vgpu_mm* shadow_mm; } ;
struct TYPE_18__ {int dev_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct parser_exec_state*,TYPE_5__*) ;
 int FUNC_4 (struct intel_vgpu*,struct intel_vgpu_mm*,unsigned long,unsigned long,TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (struct parser_exec_state*,unsigned long*,unsigned long*) ;
 unsigned long FUNC_7 (struct parser_exec_state*,int) ;
 int FUNC_8 (char*) ;
 TYPE_5__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_5__*) ;
 TYPE_5__* FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_5__*,int*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (struct intel_vgpu_shadow_bb*) ;
 struct intel_vgpu_shadow_bb* FUNC_16 (int,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_19(struct parser_exec_state *VAR_10)
{
 struct intel_vgpu *VAR_11 = VAR_10->vgpu;
 struct intel_vgpu_shadow_bb *VAR_12;
 unsigned long VAR_13 = 0;
 unsigned long VAR_14;
 unsigned long VAR_15;
 int VAR_16 = 0;
 struct intel_vgpu_mm *VAR_17 = (VAR_10->buf_addr_type == VAR_5) ?
  VAR_10->vgpu->gtt.ggtt_mm : VAR_10->workload->shadow_mm;
 unsigned long VAR_18 = 0;


 VAR_13 = FUNC_7(VAR_10, 1);
 if (VAR_13 == VAR_8)
  return -VAR_2;

 VAR_16 = FUNC_6(VAR_10, &VAR_14, &VAR_15);
 if (VAR_16)
  return VAR_16;

 VAR_12 = FUNC_16(sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_3;

 VAR_12->ppgtt = (VAR_10->buf_addr_type == VAR_5) ? 0 : 1;
 if (VAR_12->ppgtt)
  VAR_18 = VAR_13 & ~VAR_6;

 VAR_12->obj = FUNC_9(VAR_10->vgpu->gvt->dev_priv,
            FUNC_18(VAR_14 + VAR_18,
       VAR_9));
 if (FUNC_1(VAR_12->obj)) {
  VAR_16 = FUNC_2(VAR_12->obj);
  goto err_free_bb;
 }

 VAR_16 = FUNC_12(VAR_12->obj, &VAR_12->clflush);
 if (VAR_16)
  goto err_free_obj;

 VAR_12->va = FUNC_11(VAR_12->obj, VAR_7);
 if (FUNC_1(VAR_12->va)) {
  VAR_16 = FUNC_2(VAR_12->va);
  goto err_finish_shmem_access;
 }

 if (VAR_12->clflush & VAR_1) {
  FUNC_5(VAR_12->va, VAR_12->obj->base.size);
  VAR_12->clflush &= ~VAR_1;
 }

 VAR_16 = FUNC_4(VAR_10->vgpu, VAR_17,
         VAR_13, VAR_13 + VAR_14,
         VAR_12->va + VAR_18);
 if (VAR_16 < 0) {
  FUNC_8("fail to copy guest ring buffer\n");
  VAR_16 = -VAR_2;
  goto err_unmap;
 }

 VAR_16 = FUNC_3(VAR_10, VAR_12->va + VAR_18 + VAR_15);
 if (VAR_16)
  goto err_unmap;

 FUNC_0(&VAR_12->list);
 FUNC_17(&VAR_12->list, &VAR_10->workload->shadow_bb);

 VAR_12->accessing = 1;
 VAR_12->bb_start_cmd_va = VAR_10->ip_va;

 if ((VAR_10->buf_type == VAR_0) && (!VAR_10->is_ctx_wa))
  VAR_12->bb_offset = VAR_10->ip_va - VAR_10->rb_va;
 else
  VAR_12->bb_offset = 0;
 VAR_10->ip_va = VAR_12->va + VAR_18;
 VAR_10->ip_gma = VAR_13;
 return 0;
err_unmap:
 FUNC_14(VAR_12->obj);
err_finish_shmem_access:
 FUNC_10(VAR_12->obj);
err_free_obj:
 FUNC_13(VAR_12->obj);
err_free_bb:
 FUNC_15(VAR_12);
 return VAR_16;
}
