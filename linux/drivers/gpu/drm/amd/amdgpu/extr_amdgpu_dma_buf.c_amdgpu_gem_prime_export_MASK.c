
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_gem_object {TYPE_1__* dev; } ;
struct dma_buf {int * ops; TYPE_3__* file; } ;
struct TYPE_6__ {int ttm; } ;
struct amdgpu_bo {int flags; TYPE_2__ tbo; } ;
struct TYPE_8__ {int i_mapping; } ;
struct TYPE_7__ {int f_mapping; } ;
struct TYPE_5__ {TYPE_4__* anon_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dma_buf* FUNC_0 (int ) ;
 int FUNC_1 (struct dma_buf*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 struct dma_buf* FUNC_3 (struct drm_gem_object*,int) ;
 struct amdgpu_bo* FUNC_4 (struct drm_gem_object*) ;

struct dma_buf *FUNC_5(struct drm_gem_object *VAR_3,
     int VAR_4)
{
 struct amdgpu_bo *VAR_5 = FUNC_4(VAR_3);
 struct dma_buf *VAR_6;

 if (FUNC_2(VAR_5->tbo.ttm) ||
     VAR_5->flags & VAR_0)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (!FUNC_1(VAR_6)) {
  VAR_6->file->f_mapping = VAR_3->dev->anon_inode->i_mapping;
  VAR_6->ops = &VAR_2;
 }

 return VAR_6;
}
