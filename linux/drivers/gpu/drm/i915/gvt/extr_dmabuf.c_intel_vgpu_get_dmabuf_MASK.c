
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_vgpu_dmabuf_obj {int initref; int kref; int dmabuf_id; int info; } ;
struct intel_vgpu {int dmabuf_lock; int id; TYPE_2__* gvt; } ;
struct TYPE_6__ {int refcount; } ;
struct drm_i915_gem_object {TYPE_3__ base; int gvt_info; } ;
struct drm_device {int dummy; } ;
struct dma_buf {int file; } ;
struct TYPE_5__ {TYPE_1__* dev_priv; } ;
struct TYPE_4__ {struct drm_device drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dma_buf*) ;
 int FUNC_1 (struct dma_buf*) ;
 int FUNC_2 (struct dma_buf*,int) ;
 int FUNC_3 (struct dma_buf*) ;
 int FUNC_4 (struct intel_vgpu_dmabuf_obj*) ;
 int FUNC_5 (struct intel_vgpu_dmabuf_obj*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int ,int ,int,int ,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct drm_i915_gem_object*) ;
 struct dma_buf* FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct intel_vgpu_dmabuf_obj* FUNC_14 (struct intel_vgpu*,unsigned int) ;
 struct drm_i915_gem_object* FUNC_15 (struct drm_device*,int ) ;

int FUNC_16(struct intel_vgpu *VAR_4, unsigned int VAR_5)
{
 struct drm_device *VAR_6 = &VAR_4->gvt->dev_priv->drm;
 struct intel_vgpu_dmabuf_obj *VAR_7;
 struct drm_i915_gem_object *VAR_8;
 struct dma_buf *VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 FUNC_12(&VAR_4->dmabuf_lock);

 VAR_7 = FUNC_14(VAR_4, VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_8("invalid dmabuf id:%d\n", VAR_5);
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_8 = FUNC_15(VAR_6, VAR_7->info);
 if (VAR_8 == ((void*)0)) {
  FUNC_8("create gvt gem obj failed\n");
  VAR_11 = -VAR_3;
  goto out;
 }

 VAR_8->gvt_info = VAR_7->info;

 VAR_9 = FUNC_10(&VAR_8->base, VAR_0 | VAR_1);
 if (FUNC_0(VAR_9)) {
  FUNC_8("export dma-buf failed\n");
  VAR_11 = FUNC_1(VAR_9);
  goto out_free_gem;
 }

 FUNC_9(VAR_8);

 VAR_11 = FUNC_2(VAR_9, VAR_0 | VAR_1);
 if (VAR_11 < 0) {
  FUNC_8("create dma-buf fd failed ret:%d\n", VAR_11);
  goto out_free_dmabuf;
 }
 VAR_10 = VAR_11;

 FUNC_4(VAR_7);

 if (VAR_7->initref) {
  VAR_7->initref = 0;
  FUNC_5(VAR_7);
 }

 FUNC_13(&VAR_4->dmabuf_lock);

 FUNC_7("vgpu%d: dmabuf:%d, dmabuf ref %d, fd:%d\n"
      "        file count: %ld, GEM ref: %d\n",
      VAR_4->id, VAR_7->dmabuf_id,
      FUNC_11(&VAR_7->kref),
      VAR_10,
      FUNC_6(VAR_9->file),
      FUNC_11(&VAR_8->base.refcount));

 return VAR_10;

out_free_dmabuf:
 FUNC_3(VAR_9);
out_free_gem:
 FUNC_9(VAR_8);
out:
 FUNC_13(&VAR_4->dmabuf_lock);
 return VAR_11;
}
