
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_host {int * ops; struct device* dev; } ;
struct dw_dsi {struct mipi_dsi_host host; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct dw_dsi *VAR_2)
{
 struct mipi_dsi_host *VAR_3 = &VAR_2->host;
 int VAR_4;

 VAR_3->dev = VAR_1;
 VAR_3->ops = &VAR_0;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_0("failed to register dsi host\n");
  return VAR_4;
 }

 return 0;
}
