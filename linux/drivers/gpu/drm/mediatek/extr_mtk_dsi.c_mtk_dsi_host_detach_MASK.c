
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dev; } ;
struct mtk_dsi {TYPE_1__ conn; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct mtk_dsi* FUNC_1 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_2(struct mipi_dsi_host *VAR_0,
          struct mipi_dsi_device *VAR_1)
{
 struct mtk_dsi *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->conn.dev)
  FUNC_0(VAR_2->conn.dev);

 return 0;
}
