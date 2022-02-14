
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_driver {int (* remove ) (struct mipi_dsi_device*) ;} ;
struct mipi_dsi_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct mipi_dsi_device*) ;
 struct mipi_dsi_device* FUNC_1 (struct device*) ;
 struct mipi_dsi_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct mipi_dsi_driver *VAR_1 = FUNC_2(VAR_0->driver);
 struct mipi_dsi_device *VAR_2 = FUNC_1(VAR_0);

 return VAR_1->remove(VAR_2);
}
