
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_host_ops {int (* attach ) (TYPE_1__*,struct mipi_dsi_device*) ;} ;
struct mipi_dsi_device {TYPE_1__* host; } ;
struct TYPE_2__ {struct mipi_dsi_host_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct mipi_dsi_device*) ;

int FUNC_1(struct mipi_dsi_device *VAR_1)
{
 const struct mipi_dsi_host_ops *VAR_2 = VAR_1->host->ops;

 if (!VAR_2 || !VAR_2->attach)
  return -VAR_0;

 return VAR_2->attach(VAR_1->host, VAR_1);
}
