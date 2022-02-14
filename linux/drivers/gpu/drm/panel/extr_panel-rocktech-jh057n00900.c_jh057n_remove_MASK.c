
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dev; } ;
struct jh057n {int panel; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct jh057n*) ;
 int FUNC_3 (struct mipi_dsi_device*) ;
 int FUNC_4 (struct mipi_dsi_device*) ;
 struct jh057n* FUNC_5 (struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_6(struct mipi_dsi_device *VAR_0)
{
 struct jh057n *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 FUNC_3(VAR_0);

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "Failed to detach from DSI host: %d\n",
         VAR_2);

 FUNC_1(&VAR_1->panel);

 FUNC_2(VAR_1);

 return 0;
}
