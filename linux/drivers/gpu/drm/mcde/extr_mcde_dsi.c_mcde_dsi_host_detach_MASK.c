
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int dummy; } ;
struct mcde_dsi {TYPE_1__* mcde; int * mdsi; } ;
struct TYPE_2__ {int * mdsi; } ;


 struct mcde_dsi* FUNC_0 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_1(struct mipi_dsi_host *VAR_0,
    struct mipi_dsi_device *VAR_1)
{
 struct mcde_dsi *VAR_2 = FUNC_0(VAR_0);

 VAR_2->mdsi = ((void*)0);
 if (VAR_2->mcde)
  VAR_2->mcde->mdsi = ((void*)0);

 return 0;
}
