
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int name; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*,struct device_driver*) ;
 int FUNC_1 (int ,int ) ;
 struct mipi_dsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct mipi_dsi_device *VAR_2 = FUNC_2(VAR_0);


 if (FUNC_0(VAR_0, VAR_1))
  return 1;


 if (!FUNC_1(VAR_2->name, VAR_1->name))
  return 1;

 return 0;
}
