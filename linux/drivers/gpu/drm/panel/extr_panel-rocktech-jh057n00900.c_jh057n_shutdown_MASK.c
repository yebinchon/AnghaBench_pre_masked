
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dev; } ;
struct jh057n {int panel; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct jh057n* FUNC_3 (struct mipi_dsi_device*) ;

__attribute__((used)) static void FUNC_4(struct mipi_dsi_device *VAR_0)
{
 struct jh057n *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->panel);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "Failed to unprepare panel: %d\n",
         VAR_2);

 VAR_2 = FUNC_1(&VAR_1->panel);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "Failed to disable panel: %d\n",
         VAR_2);
}
