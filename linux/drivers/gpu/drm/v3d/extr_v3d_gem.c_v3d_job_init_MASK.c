
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v3d_job {void (* free ) (struct kref*) ;int deps; int refcount; struct v3d_dev* v3d; } ;
struct v3d_dev {int dev; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct dma_fence*) ;
 int FUNC_1 (struct drm_file*,int ,int ,int ,struct dma_fence**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct v3d_dev *VAR_2, struct drm_file *VAR_3,
      struct v3d_job *VAR_4, void (*VAR_5)(struct kref *VAR_6),
      u32 VAR_7)
{
 struct dma_fence *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_4->v3d = VAR_2;
 VAR_4->free = VAR_5;

 VAR_9 = FUNC_3(VAR_2->dev);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_6(&VAR_4->deps, VAR_1);

 VAR_9 = FUNC_1(VAR_3, VAR_7, 0, 0, &VAR_8);
 if (VAR_9 == -VAR_0)
  goto fail;

 VAR_9 = FUNC_0(&VAR_4->deps, VAR_8);
 if (VAR_9)
  goto fail;

 FUNC_2(&VAR_4->refcount);

 return 0;
fail:
 FUNC_5(&VAR_4->deps);
 FUNC_4(VAR_2->dev);
 return VAR_9;
}
