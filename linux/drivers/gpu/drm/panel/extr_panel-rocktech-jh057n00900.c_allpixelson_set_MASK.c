
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mipi_dsi_device {int dummy; } ;
struct jh057n {int panel; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mipi_dsi_device*,int ) ;
 int FUNC_6 (int) ;
 struct mipi_dsi_device* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_1, u64 VAR_2)
{
 struct jh057n *VAR_3 = VAR_1;
 struct mipi_dsi_device *VAR_4 = FUNC_7(VAR_3->dev);

 FUNC_0(VAR_3->dev, "Setting all pixels on\n");
 FUNC_5(VAR_4, VAR_0);
 FUNC_6(VAR_2 * 1000);

 FUNC_1(&VAR_3->panel);
 FUNC_4(&VAR_3->panel);
 FUNC_3(&VAR_3->panel);
 FUNC_2(&VAR_3->panel);

 return 0;
}
