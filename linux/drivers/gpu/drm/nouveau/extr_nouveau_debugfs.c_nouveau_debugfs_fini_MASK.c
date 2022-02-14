
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_drm {TYPE_2__* debugfs; } ;
struct TYPE_3__ {scalar_t__ priv; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(struct nouveau_drm *VAR_0)
{
 if (VAR_0->debugfs && VAR_0->debugfs->ctrl.priv)
  FUNC_1(&VAR_0->debugfs->ctrl);

 FUNC_0(VAR_0->debugfs);
 VAR_0->debugfs = ((void*)0);
}
