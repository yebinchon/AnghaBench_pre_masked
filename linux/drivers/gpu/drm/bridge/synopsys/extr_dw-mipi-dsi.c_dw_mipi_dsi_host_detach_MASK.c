
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mipi_dsi_host {TYPE_1__* dev; } ;
struct mipi_dsi_device {int dummy; } ;
struct dw_mipi_dsi_plat_data {int priv_data; TYPE_2__* host_ops; } ;
struct dw_mipi_dsi {int bridge; struct dw_mipi_dsi_plat_data* plat_data; } ;
struct TYPE_4__ {int (* detach ) (int ,struct mipi_dsi_device*) ;} ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;
 struct dw_mipi_dsi* FUNC_2 (struct mipi_dsi_host*) ;
 int FUNC_3 (int ,struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_4(struct mipi_dsi_host *VAR_0,
       struct mipi_dsi_device *VAR_1)
{
 struct dw_mipi_dsi *VAR_2 = FUNC_2(VAR_0);
 const struct dw_mipi_dsi_plat_data *VAR_3 = VAR_2->plat_data;
 int VAR_4;

 if (VAR_3->host_ops && VAR_3->host_ops->detach) {
  VAR_4 = VAR_3->host_ops->detach(VAR_3->priv_data, VAR_1);
  if (VAR_4 < 0)
   return VAR_4;
 }

 FUNC_1(VAR_0->dev->of_node, 1, 0);

 FUNC_0(&VAR_2->bridge);

 return 0;
}
