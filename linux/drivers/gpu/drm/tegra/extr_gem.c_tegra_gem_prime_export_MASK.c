
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_gem_object {TYPE_4__* dev; int size; } ;
struct dma_buf {int dummy; } ;
struct TYPE_10__ {TYPE_2__* driver; } ;
struct TYPE_9__ {int flags; struct drm_gem_object* priv; int size; int * ops; int owner; int exp_name; } ;
struct TYPE_8__ {TYPE_1__* fops; } ;
struct TYPE_7__ {int owner; } ;


 int FUNC_0 (TYPE_3__) ;
 int VAR_0 ;
 struct dma_buf* FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;

struct dma_buf *FUNC_2(struct drm_gem_object *VAR_3,
           int VAR_4)
{
 FUNC_0(VAR_1);

 VAR_1.exp_name = VAR_0;
 VAR_1.owner = VAR_3->dev->driver->fops->owner;
 VAR_1.ops = &VAR_2;
 VAR_1.size = VAR_3->size;
 VAR_1.flags = VAR_4;
 VAR_1.priv = VAR_3;

 return FUNC_1(VAR_3->dev, &VAR_1);
}
