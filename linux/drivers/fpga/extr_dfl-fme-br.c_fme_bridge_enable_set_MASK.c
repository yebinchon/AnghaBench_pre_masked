
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct fpga_bridge {struct fme_br_priv* priv; } ;
struct fme_br_priv {struct platform_device* port_pdev; struct dfl_fpga_port_ops* port_ops; TYPE_1__* pdata; } ;
struct dfl_fpga_port_ops {int (* enable_set ) (struct platform_device*,int) ;} ;
struct TYPE_2__ {int port_id; int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct platform_device* FUNC_0 (int ,int *,int ) ;
 int VAR_2 ;
 struct dfl_fpga_port_ops* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_3(struct fpga_bridge *VAR_3, bool VAR_4)
{
 struct fme_br_priv *VAR_5 = VAR_3->priv;
 struct platform_device *VAR_6;
 struct dfl_fpga_port_ops *VAR_7;

 if (!VAR_5->port_pdev) {
  VAR_6 = FUNC_0(VAR_5->pdata->cdev,
          &VAR_5->pdata->port_id,
          VAR_2);
  if (!VAR_6)
   return -VAR_0;

  VAR_5->port_pdev = VAR_6;
 }

 if (VAR_5->port_pdev && !VAR_5->port_ops) {
  VAR_7 = FUNC_1(VAR_5->port_pdev);
  if (!VAR_7 || !VAR_7->enable_set)
   return -VAR_1;

  VAR_5->port_ops = VAR_7;
 }

 return VAR_5->port_ops->enable_set(VAR_5->port_pdev, VAR_4);
}
