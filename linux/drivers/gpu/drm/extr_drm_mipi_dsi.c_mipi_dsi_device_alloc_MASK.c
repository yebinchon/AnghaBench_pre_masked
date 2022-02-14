
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_host {int dev; } ;
struct TYPE_2__ {int * type; int parent; int * bus; } ;
struct mipi_dsi_device {TYPE_1__ dev; struct mipi_dsi_host* host; } ;


 int VAR_0 ;
 struct mipi_dsi_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 struct mipi_dsi_device* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct mipi_dsi_device *FUNC_3(struct mipi_dsi_host *VAR_4)
{
 struct mipi_dsi_device *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->host = VAR_4;
 VAR_5->dev.bus = &VAR_2;
 VAR_5->dev.parent = VAR_4->dev;
 VAR_5->dev.type = &VAR_3;

 FUNC_1(&VAR_5->dev);

 return VAR_5;
}
