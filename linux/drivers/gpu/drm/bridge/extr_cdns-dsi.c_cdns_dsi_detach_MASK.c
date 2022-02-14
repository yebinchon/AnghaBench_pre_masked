
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int dummy; } ;
struct cdns_dsi_output {int bridge; scalar_t__ panel; } ;
struct cdns_dsi_input {int bridge; } ;
struct cdns_dsi {struct cdns_dsi_input input; struct cdns_dsi_output output; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct cdns_dsi* FUNC_2 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_3(struct mipi_dsi_host *VAR_0,
      struct mipi_dsi_device *VAR_1)
{
 struct cdns_dsi *VAR_2 = FUNC_2(VAR_0);
 struct cdns_dsi_output *VAR_3 = &VAR_2->output;
 struct cdns_dsi_input *VAR_4 = &VAR_2->input;

 FUNC_0(&VAR_4->bridge);
 if (VAR_3->panel)
  FUNC_1(VAR_3->bridge);

 return 0;
}
