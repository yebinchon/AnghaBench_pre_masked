
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wuxga_nt_panel {int base; } ;
struct mipi_dsi_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 struct wuxga_nt_panel* FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (struct wuxga_nt_panel*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mipi_dsi_device *VAR_0)
{
 struct wuxga_nt_panel *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_4(&VAR_1->base);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "failed to disable panel: %d\n", VAR_2);

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "failed to detach from DSI host: %d\n", VAR_2);

 FUNC_3(VAR_1);

 return 0;
}
