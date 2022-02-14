
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_dsi {int * device; int * panel; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int dummy; } ;


 struct sun6i_dsi* FUNC_0 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_1(struct mipi_dsi_host *VAR_0,
       struct mipi_dsi_device *VAR_1)
{
 struct sun6i_dsi *VAR_2 = FUNC_0(VAR_0);

 VAR_2->panel = ((void*)0);
 VAR_2->device = ((void*)0);

 return 0;
}
