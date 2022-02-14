
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_gem_object {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dev; } ;
struct dma_buf {struct drm_gem_object* priv; } ;
struct amdgpu_device {TYPE_2__* dev; } ;
struct TYPE_6__ {int bdev; } ;
struct amdgpu_bo {scalar_t__ prime_shared_count; TYPE_3__ tbo; } ;
struct TYPE_5__ {scalar_t__ driver; } ;
struct TYPE_4__ {scalar_t__ driver; } ;


 int FUNC_0 (struct amdgpu_bo*,int) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_3 (int ) ;
 int FUNC_4 (struct dma_buf*,struct dma_buf_attachment*) ;
 struct amdgpu_bo* FUNC_5 (struct drm_gem_object*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct dma_buf *VAR_0,
          struct dma_buf_attachment *VAR_1)
{
 struct drm_gem_object *VAR_2 = VAR_0->priv;
 struct amdgpu_bo *VAR_3 = FUNC_5(VAR_2);
 struct amdgpu_device *VAR_4 = FUNC_3(VAR_3->tbo.bdev);
 int VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_3, 1);
 if (FUNC_6(VAR_5 != 0))
  goto error;

 FUNC_1(VAR_3);
 if (VAR_1->dev->driver != VAR_4->dev->driver && VAR_3->prime_shared_count)
  VAR_3->prime_shared_count--;
 FUNC_2(VAR_3);

error:
 FUNC_4(VAR_0, VAR_1);
}
