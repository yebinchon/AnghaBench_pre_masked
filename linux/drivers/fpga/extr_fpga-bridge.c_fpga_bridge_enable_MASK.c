
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_bridge {TYPE_1__* br_ops; int dev; } ;
struct TYPE_2__ {int (* enable_set ) (struct fpga_bridge*,int) ;} ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fpga_bridge*,int) ;

int FUNC_2(struct fpga_bridge *VAR_0)
{
 FUNC_0(&VAR_0->dev, "enable\n");

 if (VAR_0->br_ops && VAR_0->br_ops->enable_set)
  return VAR_0->br_ops->enable_set(VAR_0, 1);

 return 0;
}
