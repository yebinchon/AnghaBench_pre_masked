
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_host {int dev; } ;
struct mipi_dsi_device {int dev; int channel; struct mipi_dsi_host* host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mipi_dsi_device *VAR_0)
{
 struct mipi_dsi_host *VAR_1 = VAR_0->host;

 FUNC_1(&VAR_0->dev, "%s.%d", FUNC_0(VAR_1->dev), VAR_0->channel);

 return FUNC_2(&VAR_0->dev);
}
