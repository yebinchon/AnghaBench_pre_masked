
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int of_node; struct device* parent; int class; } ;
struct fpga_region {int (* get_bridges ) (struct fpga_region*) ;TYPE_1__ dev; int bridge_list; int mutex; struct fpga_manager* mgr; } ;
struct fpga_manager {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct fpga_region*) ;
 struct fpga_region* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

struct fpga_region
*FUNC_8(struct device *VAR_3,
      struct fpga_manager *VAR_4,
      int (*VAR_5)(struct fpga_region *))
{
 struct fpga_region *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(&VAR_2, 0, 0, VAR_0);
 if (VAR_7 < 0)
  goto err_free;

 VAR_6->mgr = VAR_4;
 VAR_6->get_bridges = VAR_5;
 FUNC_7(&VAR_6->mutex);
 FUNC_0(&VAR_6->bridge_list);

 FUNC_2(&VAR_6->dev);
 VAR_6->dev.class = VAR_1;
 VAR_6->dev.parent = VAR_3;
 VAR_6->dev.of_node = VAR_3->of_node;
 VAR_6->dev.id = VAR_7;

 VAR_8 = FUNC_1(&VAR_6->dev, "region%d", VAR_7);
 if (VAR_8)
  goto err_remove;

 return VAR_6;

err_remove:
 FUNC_4(&VAR_2, VAR_7);
err_free:
 FUNC_5(VAR_6);

 return ((void*)0);
}
