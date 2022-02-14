
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_bridge {int dev; TYPE_1__* br_ops; } ;
struct TYPE_2__ {int (* fpga_bridge_remove ) (struct fpga_bridge*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fpga_bridge*) ;

void FUNC_2(struct fpga_bridge *VAR_0)
{




 if (VAR_0->br_ops && VAR_0->br_ops->fpga_bridge_remove)
  VAR_0->br_ops->fpga_bridge_remove(VAR_0);

 FUNC_0(&VAR_0->dev);
}
