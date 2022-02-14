
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_gem_object {struct dma_buf* dma_buf; TYPE_1__* import_attach; } ;
struct TYPE_5__ {int lock; } ;
struct drm_file {TYPE_2__ prime; } ;
struct drm_device {int object_name_lock; } ;
struct dma_buf {int dummy; } ;
struct TYPE_4__ {struct dma_buf* dmabuf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dma_buf*) ;
 int FUNC_1 (struct dma_buf*) ;
 int FUNC_2 (struct dma_buf*,int ) ;
 int FUNC_3 (struct dma_buf*) ;
 struct drm_gem_object* FUNC_4 (struct drm_file*,int ) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (TYPE_2__*,struct dma_buf*,int ) ;
 struct dma_buf* FUNC_7 (TYPE_2__*,int ) ;
 struct dma_buf* FUNC_8 (struct drm_device*,struct drm_gem_object*,int ) ;
 int FUNC_9 (struct dma_buf*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct drm_device *VAR_1,
          struct drm_file *VAR_2, uint32_t VAR_3,
          uint32_t VAR_4,
          int *VAR_5)
{
 struct drm_gem_object *VAR_6;
 int VAR_7 = 0;
 struct dma_buf *VAR_8;

 FUNC_10(&VAR_2->prime.lock);
 VAR_6 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out_unlock;
 }

 VAR_8 = FUNC_7(&VAR_2->prime, VAR_3);
 if (VAR_8) {
  FUNC_9(VAR_8);
  goto out_have_handle;
 }

 FUNC_10(&VAR_1->object_name_lock);

 if (VAR_6->import_attach) {
  VAR_8 = VAR_6->import_attach->dmabuf;
  FUNC_9(VAR_8);
  goto out_have_obj;
 }

 if (VAR_6->dma_buf) {
  FUNC_9(VAR_6->dma_buf);
  VAR_8 = VAR_6->dma_buf;
  goto out_have_obj;
 }

 VAR_8 = FUNC_8(VAR_1, VAR_6, VAR_4);
 if (FUNC_0(VAR_8)) {



  VAR_7 = FUNC_1(VAR_8);
  FUNC_11(&VAR_1->object_name_lock);
  goto out;
 }

out_have_obj:






 VAR_7 = FUNC_6(&VAR_2->prime,
           VAR_8, VAR_3);
 FUNC_11(&VAR_1->object_name_lock);
 if (VAR_7)
  goto fail_put_dmabuf;

out_have_handle:
 VAR_7 = FUNC_2(VAR_8, VAR_4);






 if (VAR_7 < 0) {
  goto fail_put_dmabuf;
 } else {
  *VAR_5 = VAR_7;
  VAR_7 = 0;
 }

 goto out;

fail_put_dmabuf:
 FUNC_3(VAR_8);
out:
 FUNC_5(VAR_6);
out_unlock:
 FUNC_11(&VAR_2->prime.lock);

 return VAR_7;
}
