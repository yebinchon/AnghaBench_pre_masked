
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
struct intel_csr {int version; int * dmc_payload; } ;
struct TYPE_14__ {int platform; } ;
struct i915_gpu_state {int epoch; int ngtier; int* gtier; int nfence; int* fence; int fault_data1; int fault_data0; int uc; int params; int driver_caps; int runtime_info; TYPE_5__ device_info; scalar_t__ display; scalar_t__ overlay; struct drm_i915_error_engine* engine; int err_int; int done_reg; int error; int ccid; int derrmr; int forcewake; int pgtbl_er; int ier; int eir; int suspended; int wakelock; int awake; int iommu; int suspend_count; int reset_count; int capture; int uptime; int boottime; int time; scalar_t__* error_msg; } ;
struct drm_i915_error_state_buf {TYPE_4__* i915; } ;
struct drm_i915_error_object {int gtt_offset; } ;
struct TYPE_10__ {int comm; int pid; } ;
struct drm_i915_error_engine {int user_bo_count; int num_requests; struct drm_i915_error_object const* default_state; TYPE_2__* engine; struct drm_i915_error_object const* wa_batchbuffer; struct drm_i915_error_object const* wa_ctx; struct drm_i915_error_object const* ctx; struct drm_i915_error_object const* hws_page; struct drm_i915_error_object const* ringbuffer; int * requests; struct drm_i915_error_object const** user_bo; TYPE_1__ context; struct drm_i915_error_object* batchbuffer; struct drm_i915_error_engine* next; } ;
typedef int s64 ;
struct TYPE_13__ {struct intel_csr csr; } ;
struct TYPE_12__ {int release; int machine; } ;
struct TYPE_11__ {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int,int) ;
 int VAR_2 ;
 int FUNC_6 (struct drm_i915_error_state_buf*,TYPE_5__*,int *,int *) ;
 int FUNC_7 (struct drm_i915_error_state_buf*,int *) ;
 int FUNC_8 (struct drm_i915_error_state_buf*,TYPE_4__*) ;
 int FUNC_9 (struct drm_i915_error_state_buf*,int *) ;
 int FUNC_10 (struct drm_i915_error_state_buf*,char*,int,...) ;
 int FUNC_11 (struct drm_i915_error_state_buf*,int) ;
 int FUNC_12 (struct drm_i915_error_state_buf*,struct drm_i915_error_engine const*,int) ;
 int FUNC_13 (struct drm_i915_error_state_buf*,char*,int *,int) ;
 TYPE_3__* FUNC_14 () ;
 int FUNC_15 (struct drm_i915_error_state_buf*,scalar_t__) ;
 int FUNC_16 (struct drm_i915_error_state_buf*,scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int ) ;
 int VAR_3 ;
 int FUNC_19 (int ) ;
 struct timespec64 FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct drm_i915_error_state_buf*,TYPE_2__*,char*,struct drm_i915_error_object const*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static void FUNC_25(struct drm_i915_error_state_buf *VAR_4,
          struct i915_gpu_state *VAR_5)
{
 const struct drm_i915_error_engine *VAR_6;
 struct timespec64 VAR_7;
 int VAR_8, VAR_9;

 if (*VAR_5->error_msg)
  FUNC_10(VAR_4, "%s\n", VAR_5->error_msg);
 FUNC_10(VAR_4, "Kernel: %s %s\n",
     FUNC_14()->release,
     FUNC_14()->machine);
 FUNC_10(VAR_4, "Driver: %s\n", VAR_0);
 VAR_7 = FUNC_20(VAR_5->time);
 FUNC_10(VAR_4, "Time: %lld s %ld us\n",
     (s64)VAR_7.tv_sec, VAR_7.tv_nsec / VAR_2);
 VAR_7 = FUNC_20(VAR_5->boottime);
 FUNC_10(VAR_4, "Boottime: %lld s %ld us\n",
     (s64)VAR_7.tv_sec, VAR_7.tv_nsec / VAR_2);
 VAR_7 = FUNC_20(VAR_5->uptime);
 FUNC_10(VAR_4, "Uptime: %lld s %ld us\n",
     (s64)VAR_7.tv_sec, VAR_7.tv_nsec / VAR_2);
 FUNC_10(VAR_4, "Epoch: %lu jiffies (%u HZ)\n", VAR_5->epoch, VAR_1);
 FUNC_10(VAR_4, "Capture: %lu jiffies; %d ms ago, %d ms after epoch\n",
     VAR_5->capture,
     FUNC_19(VAR_3 - VAR_5->capture),
     FUNC_19(VAR_5->capture - VAR_5->epoch));

 for (VAR_6 = VAR_5->engine; VAR_6; VAR_6 = VAR_6->next)
  FUNC_10(VAR_4, "Active process (on ring %s): %s [%d]\n",
      VAR_6->engine->name,
      VAR_6->context.comm,
      VAR_6->context.pid);

 FUNC_10(VAR_4, "Reset count: %u\n", VAR_5->reset_count);
 FUNC_10(VAR_4, "Suspend count: %u\n", VAR_5->suspend_count);
 FUNC_10(VAR_4, "Platform: %s\n", FUNC_17(VAR_5->device_info.platform));
 FUNC_10(VAR_4, "Subplatform: 0x%x\n",
     FUNC_18(&VAR_5->runtime_info,
         VAR_5->device_info.platform));
 FUNC_8(VAR_4, VAR_4->i915);

 FUNC_10(VAR_4, "IOMMU enabled?: %d\n", VAR_5->iommu);

 if (FUNC_2(VAR_4->i915)) {
  struct intel_csr *VAR_10 = &VAR_4->i915->csr;

  FUNC_10(VAR_4, "DMC loaded: %s\n",
      FUNC_24(VAR_10->dmc_payload != ((void*)0)));
  FUNC_10(VAR_4, "DMC fw version: %d.%d\n",
      FUNC_0(VAR_10->version),
      FUNC_1(VAR_10->version));
 }

 FUNC_10(VAR_4, "GT awake: %s\n", FUNC_24(VAR_5->awake));
 FUNC_10(VAR_4, "RPM wakelock: %s\n", FUNC_24(VAR_5->wakelock));
 FUNC_10(VAR_4, "PM suspended: %s\n", FUNC_24(VAR_5->suspended));
 FUNC_10(VAR_4, "EIR: 0x%08x\n", VAR_5->eir);
 FUNC_10(VAR_4, "IER: 0x%08x\n", VAR_5->ier);
 for (VAR_8 = 0; VAR_8 < VAR_5->ngtier; VAR_8++)
  FUNC_10(VAR_4, "GTIER[%d]: 0x%08x\n", VAR_8, VAR_5->gtier[VAR_8]);
 FUNC_10(VAR_4, "PGTBL_ER: 0x%08x\n", VAR_5->pgtbl_er);
 FUNC_10(VAR_4, "FORCEWAKE: 0x%08x\n", VAR_5->forcewake);
 FUNC_10(VAR_4, "DERRMR: 0x%08x\n", VAR_5->derrmr);
 FUNC_10(VAR_4, "CCID: 0x%08x\n", VAR_5->ccid);

 for (VAR_8 = 0; VAR_8 < VAR_5->nfence; VAR_8++)
  FUNC_10(VAR_4, "  fence[%d] = %08llx\n", VAR_8, VAR_5->fence[VAR_8]);

 if (FUNC_5(VAR_4->i915, 6, 11)) {
  FUNC_10(VAR_4, "ERROR: 0x%08x\n", VAR_5->error);
  FUNC_10(VAR_4, "DONE_REG: 0x%08x\n", VAR_5->done_reg);
 }

 if (FUNC_3(VAR_4->i915) >= 8)
  FUNC_10(VAR_4, "FAULT_TLB_DATA: 0x%08x 0x%08x\n",
      VAR_5->fault_data1, VAR_5->fault_data0);

 if (FUNC_4(VAR_4->i915, 7))
  FUNC_10(VAR_4, "ERR_INT: 0x%08x\n", VAR_5->err_int);

 for (VAR_6 = VAR_5->engine; VAR_6; VAR_6 = VAR_6->next)
  FUNC_12(VAR_4, VAR_6, VAR_5->epoch);

 for (VAR_6 = VAR_5->engine; VAR_6; VAR_6 = VAR_6->next) {
  const struct drm_i915_error_object *VAR_11;

  VAR_11 = VAR_6->batchbuffer;
  if (VAR_11) {
   FUNC_11(VAR_4, VAR_6->engine->name);
   if (VAR_6->context.pid)
    FUNC_10(VAR_4, " (submitted by %s [%d])",
        VAR_6->context.comm,
        VAR_6->context.pid);
   FUNC_10(VAR_4, " --- gtt_offset = 0x%08x %08x\n",
       FUNC_23(VAR_11->gtt_offset),
       FUNC_21(VAR_11->gtt_offset));
   FUNC_22(VAR_4, VAR_6->engine, ((void*)0), VAR_11);
  }

  for (VAR_9 = 0; VAR_9 < VAR_6->user_bo_count; VAR_9++)
   FUNC_22(VAR_4, VAR_6->engine, "user", VAR_6->user_bo[VAR_9]);

  if (VAR_6->num_requests) {
   FUNC_10(VAR_4, "%s --- %d requests\n",
       VAR_6->engine->name,
       VAR_6->num_requests);
   for (VAR_9 = 0; VAR_9 < VAR_6->num_requests; VAR_9++)
    FUNC_13(VAR_4, " ",
          &VAR_6->requests[VAR_9],
          VAR_5->epoch);
  }

  FUNC_22(VAR_4, VAR_6->engine, "ringbuffer", VAR_6->ringbuffer);
  FUNC_22(VAR_4, VAR_6->engine, "HW Status", VAR_6->hws_page);
  FUNC_22(VAR_4, VAR_6->engine, "HW context", VAR_6->ctx);
  FUNC_22(VAR_4, VAR_6->engine, "WA context", VAR_6->wa_ctx);
  FUNC_22(VAR_4, VAR_6->engine,
    "WA batchbuffer", VAR_6->wa_batchbuffer);
  FUNC_22(VAR_4, VAR_6->engine,
    "NULL context", VAR_6->default_state);
 }

 if (VAR_5->overlay)
  FUNC_16(VAR_4, VAR_5->overlay);

 if (VAR_5->display)
  FUNC_15(VAR_4, VAR_5->display);

 FUNC_6(VAR_4, &VAR_5->device_info, &VAR_5->runtime_info,
          &VAR_5->driver_caps);
 FUNC_7(VAR_4, &VAR_5->params);
 FUNC_9(VAR_4, &VAR_5->uc);
}
