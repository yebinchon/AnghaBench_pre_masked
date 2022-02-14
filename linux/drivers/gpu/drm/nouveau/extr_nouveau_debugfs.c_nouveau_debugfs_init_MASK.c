
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int object; } ;
struct TYPE_5__ {TYPE_1__ device; } ;
struct nouveau_drm {TYPE_3__* debugfs; TYPE_2__ client; } ;
struct TYPE_6__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int ,int *,int ,int *) ;

int
FUNC_2(struct nouveau_drm *VAR_3)
{
 int VAR_4;

 VAR_3->debugfs = FUNC_0(sizeof(*VAR_3->debugfs), VAR_1);
 if (!VAR_3->debugfs)
  return -VAR_0;

 VAR_4 = FUNC_1(&VAR_3->client.device.object, 0,
          VAR_2, ((void*)0), 0,
          &VAR_3->debugfs->ctrl);
 if (VAR_4)
  return VAR_4;

 return 0;
}
