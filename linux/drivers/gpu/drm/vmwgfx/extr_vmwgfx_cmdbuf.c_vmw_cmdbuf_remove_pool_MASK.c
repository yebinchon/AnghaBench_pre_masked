
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmw_cmdbuf_man {int has_pool; int handle; int map; int size; TYPE_3__* dev_priv; int * cmd_space; int map_obj; scalar_t__ using_mob; int default_size; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_cmdbuf_man*,int,int) ;

void FUNC_4(struct vmw_cmdbuf_man *VAR_2)
{
 if (!VAR_2->has_pool)
  return;

 VAR_2->has_pool = 0;
 VAR_2->default_size = VAR_1;
 (void) FUNC_3(VAR_2, 0, 10*VAR_0);
 if (VAR_2->using_mob) {
  (void) FUNC_1(&VAR_2->map_obj);
  FUNC_2(VAR_2->cmd_space);
  VAR_2->cmd_space = ((void*)0);
 } else {
  FUNC_0(&VAR_2->dev_priv->dev->pdev->dev,
      VAR_2->size, VAR_2->map, VAR_2->handle);
 }
}
