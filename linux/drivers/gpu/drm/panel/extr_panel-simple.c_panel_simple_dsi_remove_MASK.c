
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mipi_dsi_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  FUNC_0(&VAR_0->dev, "failed to detach from DSI host: %d\n", VAR_1);

 return FUNC_2(&VAR_0->dev);
}
