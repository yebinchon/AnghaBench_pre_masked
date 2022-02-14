
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_gem_object {int dev; int size; } ;
struct dma_buf {int dummy; } ;
struct TYPE_4__ {int flags; struct drm_gem_object* priv; int size; int * ops; } ;


 int FUNC_0 (TYPE_1__) ;
 struct dma_buf* FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

struct dma_buf *FUNC_2(struct drm_gem_object *VAR_2, int VAR_3)
{
 FUNC_0(VAR_0);

 VAR_0.ops = &VAR_1;
 VAR_0.size = VAR_2->size;
 VAR_0.flags = VAR_3;
 VAR_0.priv = VAR_2;

 return FUNC_1(VAR_2->dev, &VAR_0);
}
