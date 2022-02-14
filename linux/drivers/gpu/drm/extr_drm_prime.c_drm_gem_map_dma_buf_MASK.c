
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct drm_gem_object {TYPE_2__* dev; TYPE_4__* funcs; } ;
struct dma_buf_attachment {int dev; TYPE_3__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {struct sg_table* (* get_sg_table ) (struct drm_gem_object*) ;} ;
struct TYPE_7__ {struct drm_gem_object* priv; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {struct sg_table* (* gem_prime_get_sg_table ) (struct drm_gem_object*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sg_table* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 int FUNC_3 (struct sg_table*) ;
 int FUNC_4 (struct sg_table*) ;
 struct sg_table* FUNC_5 (struct drm_gem_object*) ;
 struct sg_table* FUNC_6 (struct drm_gem_object*) ;

struct sg_table *FUNC_7(struct dma_buf_attachment *VAR_4,
         enum dma_data_direction VAR_5)
{
 struct drm_gem_object *VAR_6 = VAR_4->dmabuf->priv;
 struct sg_table *VAR_7;

 if (FUNC_1(VAR_5 == VAR_1))
  return FUNC_0(-VAR_2);

 if (VAR_6->funcs)
  VAR_7 = VAR_6->funcs->get_sg_table(VAR_6);
 else
  VAR_7 = VAR_6->dev->driver->gem_prime_get_sg_table(VAR_6);

 if (!FUNC_2(VAR_4->dev, VAR_7->sgl, VAR_7->nents, VAR_5,
         VAR_0)) {
  FUNC_4(VAR_7);
  FUNC_3(VAR_7);
  VAR_7 = FUNC_0(-VAR_3);
 }

 return VAR_7;
}
