
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct fpga_bridge {struct fme_br_priv* priv; } ;
struct fme_br_priv {scalar_t__ port_ops; TYPE_1__* port_pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fpga_bridge*) ;
 struct fpga_bridge* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct fpga_bridge *VAR_1 = FUNC_2(VAR_0);
 struct fme_br_priv *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_1);

 if (VAR_2->port_pdev)
  FUNC_3(&VAR_2->port_pdev->dev);
 if (VAR_2->port_ops)
  FUNC_0(VAR_2->port_ops);

 return 0;
}
