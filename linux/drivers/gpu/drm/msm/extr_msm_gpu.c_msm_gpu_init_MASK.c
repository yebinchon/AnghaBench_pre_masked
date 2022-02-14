
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct platform_device {int dev; } ;
struct msm_rbmemptrs {int dummy; } ;
struct msm_gpu_funcs {int dummy; } ;
struct msm_gpu_config {int nr_rings; int va_end; int va_start; int ioname; } ;
struct msm_gpu {int num_perfcntrs; void** last_cntrs; char const* name; void* mmio; int irq; void* ebi1_clk; void* gpu_reg; void* gpu_cx; void* aspace; void** rb; int nr_rings; int memptrs_bo; struct platform_device* pdev; int perf_lock; int hangcheck_timer; int recover_work; int retire_work; int active_list; struct msm_gpu_funcs const* funcs; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (void**) ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (void*) ;
 int VAR_1 ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (int) ;
 void* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int,int ,int ,char const*,struct msm_gpu*) ;
 int FUNC_12 (struct platform_device*,struct msm_gpu*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_13 (struct platform_device*,char*) ;
 int FUNC_14 (struct msm_gpu*) ;
 void* FUNC_15 (struct drm_device*,int,int ,void*,int *,int*) ;
 int FUNC_16 (int ,void*,int) ;
 int FUNC_17 (int ,char*) ;
 void* FUNC_18 (struct msm_gpu*,struct platform_device*,int ,int ) ;
 void* FUNC_19 (struct platform_device*,int ,char const*) ;
 int FUNC_20 (void*) ;
 void* FUNC_21 (struct msm_gpu*,int,void*,int) ;
 int FUNC_22 (struct platform_device*,int ) ;
 int FUNC_23 (struct platform_device*,struct msm_gpu*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ,int ) ;

int FUNC_26(struct drm_device *VAR_6, struct platform_device *VAR_7,
  struct msm_gpu *VAR_8, const struct msm_gpu_funcs *VAR_9,
  const char *VAR_10, struct msm_gpu_config *VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = VAR_11->nr_rings;
 void *VAR_15;
 uint64_t VAR_16;

 if (FUNC_9(VAR_8->num_perfcntrs > FUNC_0(VAR_8->last_cntrs)))
  VAR_8->num_perfcntrs = FUNC_0(VAR_8->last_cntrs);

 VAR_8->dev = VAR_6;
 VAR_8->funcs = VAR_9;
 VAR_8->name = VAR_10;

 FUNC_5(&VAR_8->active_list);
 FUNC_6(&VAR_8->retire_work, VAR_5);
 FUNC_6(&VAR_8->recover_work, VAR_4);


 FUNC_25(&VAR_8->hangcheck_timer, VAR_2, 0);

 FUNC_24(&VAR_8->perf_lock);



 VAR_8->mmio = FUNC_19(VAR_7, VAR_11->ioname, VAR_10);
 if (FUNC_7(VAR_8->mmio)) {
  VAR_13 = FUNC_8(VAR_8->mmio);
  goto fail;
 }


 VAR_8->irq = FUNC_22(VAR_7, 0);
 if (VAR_8->irq < 0) {
  VAR_13 = VAR_8->irq;
  FUNC_2(VAR_6->dev, "failed to get irq: %d\n", VAR_13);
  goto fail;
 }

 VAR_13 = FUNC_11(&VAR_7->dev, VAR_8->irq, VAR_3,
   VAR_0, VAR_8->name, VAR_8);
 if (VAR_13) {
  FUNC_2(VAR_6->dev, "failed to request IRQ%u: %d\n", VAR_8->irq, VAR_13);
  goto fail;
 }

 VAR_13 = FUNC_12(VAR_7, VAR_8);
 if (VAR_13)
  goto fail;

 VAR_8->ebi1_clk = FUNC_13(VAR_7, "bus");
 FUNC_1("ebi1_clk: %p", VAR_8->ebi1_clk);
 if (FUNC_7(VAR_8->ebi1_clk))
  VAR_8->ebi1_clk = ((void*)0);


 VAR_8->gpu_reg = FUNC_10(&VAR_7->dev, "vdd");
 FUNC_1("gpu_reg: %p", VAR_8->gpu_reg);
 if (FUNC_7(VAR_8->gpu_reg))
  VAR_8->gpu_reg = ((void*)0);

 VAR_8->gpu_cx = FUNC_10(&VAR_7->dev, "vddcx");
 FUNC_1("gpu_cx: %p", VAR_8->gpu_cx);
 if (FUNC_7(VAR_8->gpu_cx))
  VAR_8->gpu_cx = ((void*)0);

 VAR_8->pdev = VAR_7;
 FUNC_23(VAR_7, VAR_8);

 FUNC_14(VAR_8);

 VAR_8->aspace = FUNC_18(VAR_8, VAR_7,
  VAR_11->va_start, VAR_11->va_end);

 if (VAR_8->aspace == ((void*)0))
  FUNC_3(VAR_6->dev, "%s: no IOMMU, fallback to VRAM carveout!\n", VAR_10);
 else if (FUNC_7(VAR_8->aspace)) {
  VAR_13 = FUNC_8(VAR_8->aspace);
  goto fail;
 }

 VAR_15 = FUNC_15(VAR_6,
  sizeof(struct msm_rbmemptrs) * VAR_14,
  VAR_1, VAR_8->aspace, &VAR_8->memptrs_bo,
  &VAR_16);

 if (FUNC_7(VAR_15)) {
  VAR_13 = FUNC_8(VAR_15);
  FUNC_2(VAR_6->dev, "could not allocate memptrs: %d\n", VAR_13);
  goto fail;
 }

 FUNC_17(VAR_8->memptrs_bo, "memptrs");

 if (VAR_14 > FUNC_0(VAR_8->rb)) {
  FUNC_4(VAR_6->dev, "Only creating %zu ringbuffers\n",
   FUNC_0(VAR_8->rb));
  VAR_14 = FUNC_0(VAR_8->rb);
 }


 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  VAR_8->rb[VAR_12] = FUNC_21(VAR_8, VAR_12, VAR_15, VAR_16);

  if (FUNC_7(VAR_8->rb[VAR_12])) {
   VAR_13 = FUNC_8(VAR_8->rb[VAR_12]);
   FUNC_2(VAR_6->dev,
    "could not create ringbuffer %d: %d\n", VAR_12, VAR_13);
   goto fail;
  }

  VAR_15 += sizeof(struct msm_rbmemptrs);
  VAR_16 += sizeof(struct msm_rbmemptrs);
 }

 VAR_8->nr_rings = VAR_14;

 return 0;

fail:
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8->rb); VAR_12++) {
  FUNC_20(VAR_8->rb[VAR_12]);
  VAR_8->rb[VAR_12] = ((void*)0);
 }

 FUNC_16(VAR_8->memptrs_bo, VAR_8->aspace, 0);

 FUNC_23(VAR_7, ((void*)0));
 return VAR_13;
}
