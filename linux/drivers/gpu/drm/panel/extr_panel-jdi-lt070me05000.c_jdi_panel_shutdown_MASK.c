
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dummy; } ;
struct jdi_panel {int base; } ;


 int FUNC_0 (int *) ;
 struct jdi_panel* FUNC_1 (struct mipi_dsi_device*) ;

__attribute__((used)) static void FUNC_2(struct mipi_dsi_device *VAR_0)
{
 struct jdi_panel *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->base);
}
