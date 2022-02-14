
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_private {int capabilities; int bdev; TYPE_2__* dev; } ;
struct vmw_cmdbuf_man {int has_pool; int using_mob; size_t size; int * cmd_space; int default_size; int mm; int map_obj; int map; int handle; struct vmw_private* dev_priv; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,size_t,int *,int ) ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (int *,size_t,int ,int *,int ,int,int **) ;
 int FUNC_5 (int *,int ,size_t,int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int FUNC_7 (int *,int*) ;
 int VAR_7 ;

int FUNC_8(struct vmw_cmdbuf_man *VAR_8,
        size_t VAR_9, size_t VAR_10)
{
 struct vmw_private *VAR_11 = VAR_8->dev_priv;
 bool VAR_12;
 int VAR_13;

 if (VAR_8->has_pool)
  return -VAR_0;


 VAR_9 = FUNC_1(VAR_9);
 VAR_8->map = FUNC_2(&VAR_11->dev->pdev->dev, VAR_9,
          &VAR_8->handle, VAR_2);
 if (VAR_8->map) {
  VAR_8->using_mob = 0;
 } else {






  if (!(VAR_11->capabilities & VAR_4))
   return -VAR_1;

  VAR_13 = FUNC_4(&VAR_11->bdev, VAR_9, VAR_6,
        &VAR_7, 0, 0,
        &VAR_8->cmd_space);
  if (VAR_13)
   return VAR_13;

  VAR_8->using_mob = 1;
  VAR_13 = FUNC_5(VAR_8->cmd_space, 0, VAR_9 >> VAR_3,
      &VAR_8->map_obj);
  if (VAR_13)
   goto out_no_map;

  VAR_8->map = FUNC_7(&VAR_8->map_obj, &VAR_12);
 }

 VAR_8->size = VAR_9;
 FUNC_3(&VAR_8->mm, 0, VAR_9 >> VAR_3);

 VAR_8->has_pool = 1;







 VAR_8->default_size = VAR_5;
 FUNC_0("Using command buffers with %s pool.\n",
   (VAR_8->using_mob) ? "MOB" : "DMA");

 return 0;

out_no_map:
 if (VAR_8->using_mob) {
  FUNC_6(VAR_8->cmd_space);
  VAR_8->cmd_space = ((void*)0);
 }

 return VAR_13;
}
