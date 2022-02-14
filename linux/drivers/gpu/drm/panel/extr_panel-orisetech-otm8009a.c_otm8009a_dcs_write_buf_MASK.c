
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm8009a {int dev; } ;
struct mipi_dsi_device {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct mipi_dsi_device*,void const*,size_t) ;
 struct mipi_dsi_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct otm8009a *VAR_0, const void *VAR_1,
       size_t VAR_2)
{
 struct mipi_dsi_device *VAR_3 = FUNC_2(VAR_0->dev);

 if (FUNC_1(VAR_3, VAR_1, VAR_2) < 0)
  FUNC_0("mipi dsi dcs write buffer failed\n");
}
