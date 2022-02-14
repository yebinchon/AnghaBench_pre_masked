
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dev; } ;
struct kingdisplay_panel {int base; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct kingdisplay_panel*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mipi_dsi_device*) ;
 struct kingdisplay_panel* FUNC_5 (struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_6(struct mipi_dsi_device *VAR_0)
{
 struct kingdisplay_panel *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_3(&VAR_1->base);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "failed to unprepare panel: %d\n",
         VAR_2);

 VAR_2 = FUNC_2(&VAR_1->base);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "failed to disable panel: %d\n", VAR_2);

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "failed to detach from DSI host: %d\n",
         VAR_2);

 FUNC_1(VAR_1);

 return 0;
}
