
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_gem_object {int dev; int size; } ;
struct dma_buf {int dummy; } ;
struct TYPE_4__ {struct drm_gem_object* priv; int flags; int size; int * ops; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dma_buf* FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_2 ;

struct dma_buf *
FUNC_2(struct drm_gem_object *VAR_3, int VAR_4)
{
 FUNC_0(VAR_2);

 VAR_2.ops = &VAR_1;
 VAR_2.size = VAR_3->size;
 VAR_2.flags = VAR_0;
 VAR_2.priv = VAR_3;

 return FUNC_1(VAR_3->dev, &VAR_2);
}
