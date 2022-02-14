
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_gem_object {int dummy; } ;
struct dma_buf_attachment {TYPE_3__* dev; } ;
struct dma_buf {struct drm_gem_object* priv; } ;
struct amdgpu_device {TYPE_4__* dev; } ;
struct TYPE_5__ {int resv; } ;
struct TYPE_6__ {TYPE_1__ base; int bdev; } ;
struct amdgpu_bo {int prime_shared_count; TYPE_2__ tbo; } ;
struct TYPE_8__ {scalar_t__ driver; } ;
struct TYPE_7__ {scalar_t__ driver; } ;


 int VAR_0 ;
 long FUNC_0 (int ) ;
 long FUNC_1 (struct amdgpu_bo*,int ) ;
 long FUNC_2 (struct amdgpu_bo*,int) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_4 (int ) ;
 long FUNC_5 (struct dma_buf*,struct dma_buf_attachment*) ;
 int FUNC_6 (struct dma_buf*,struct dma_buf_attachment*) ;
 struct amdgpu_bo* FUNC_7 (struct drm_gem_object*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct dma_buf *VAR_1,
         struct dma_buf_attachment *VAR_2)
{
 struct drm_gem_object *VAR_3 = VAR_1->priv;
 struct amdgpu_bo *VAR_4 = FUNC_7(VAR_3);
 struct amdgpu_device *VAR_5 = FUNC_4(VAR_4->tbo.bdev);
 long VAR_6;

 VAR_6 = FUNC_5(VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, 0);
 if (FUNC_8(VAR_6 != 0))
  goto error_detach;


 if (VAR_2->dev->driver != VAR_5->dev->driver) {
  VAR_6 = FUNC_0(VAR_4->tbo.base.resv);
  if (VAR_6)
   goto error_unreserve;
 }


 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (VAR_6)
  goto error_unreserve;

 if (VAR_2->dev->driver != VAR_5->dev->driver)
  VAR_4->prime_shared_count++;

error_unreserve:
 FUNC_3(VAR_4);

error_detach:
 if (VAR_6)
  FUNC_6(VAR_1, VAR_2);
 return VAR_6;
}
